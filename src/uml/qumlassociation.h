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
#ifndef QUMLASSOCIATION_H
#define QUMLASSOCIATION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlassociation_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlProperty;
class QUmlType;

class Q_UML_EXPORT QUmlAssociation : public QObject, public UmlAssociation
{
    Q_OBJECT
    Q_PROPERTY(QList<QUmlType *> endType READ endType)
    Q_PROPERTY(bool isDerived READ isDerived)
    Q_PROPERTY(QList<QUmlProperty *> memberEnd READ memberEnd)
    Q_PROPERTY(QSet<QUmlProperty *> navigableOwnedEnd READ navigableOwnedEnd)
    Q_PROPERTY(QList<QUmlProperty *> ownedEnd READ ownedEnd)

public:
    Q_INVOKABLE explicit QUmlAssociation(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QList<QUmlType *> endType() const;
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE void setDerived(bool isDerived);
    Q_INVOKABLE const QList<QUmlProperty *> memberEnd() const;
    Q_INVOKABLE void addMemberEnd(UmlProperty *memberEnd);
    Q_INVOKABLE void removeMemberEnd(UmlProperty *memberEnd);
    Q_INVOKABLE const QSet<QUmlProperty *> navigableOwnedEnd() const;
    Q_INVOKABLE void addNavigableOwnedEnd(UmlProperty *navigableOwnedEnd);
    Q_INVOKABLE void removeNavigableOwnedEnd(UmlProperty *navigableOwnedEnd);
    Q_INVOKABLE const QList<QUmlProperty *> ownedEnd() const;
    Q_INVOKABLE void addOwnedEnd(UmlProperty *ownedEnd);
    Q_INVOKABLE void removeOwnedEnd(UmlProperty *ownedEnd);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlAssociation *)
Q_DECLARE_METATYPE(QList<QUmlAssociation *> *)
Q_DECLARE_METATYPE(QSet<QUmlAssociation *> *)

QT_END_HEADER

#endif // QUMLASSOCIATION_H

