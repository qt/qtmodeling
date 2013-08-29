/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef UMLASSOCIATION_H
#define UMLASSOCIATION_H

#include <QtUml/QtUmlGlobal>

#include "private/umlclassifier_p.h"
#include "private/umlrelationship_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlProperty;
class UmlType;

class Q_UML_EXPORT UmlAssociation : public virtual UmlClassifier, public UmlRelationship
{
public:
    Q_DECL_HIDDEN explicit UmlAssociation();

    // Owned attributes
    const QList<UmlType *> endType() const;
    Q_DECL_HIDDEN void addEndType(UmlType *endType);
    Q_DECL_HIDDEN void removeEndType(UmlType *endType);
    bool isDerived() const;
    void setDerived(bool isDerived);
    const QList<UmlProperty *> memberEnd() const;
    void addMemberEnd(UmlProperty *memberEnd);
    void removeMemberEnd(UmlProperty *memberEnd);
    const QSet<UmlProperty *> navigableOwnedEnd() const;
    void addNavigableOwnedEnd(UmlProperty *navigableOwnedEnd);
    void removeNavigableOwnedEnd(UmlProperty *navigableOwnedEnd);
    const QList<UmlProperty *> ownedEnd() const;
    void addOwnedEnd(UmlProperty *ownedEnd);
    void removeOwnedEnd(UmlProperty *ownedEnd);

protected:
    bool _isDerived;
    QList<UmlProperty *> _memberEnd;
    QSet<UmlProperty *> _navigableOwnedEnd;
    QList<UmlProperty *> _ownedEnd;
};

#endif // UMLASSOCIATION_H

