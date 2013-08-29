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
#ifndef UMLINFORMATIONFLOW_H
#define UMLINFORMATIONFLOW_H

#include <QtUml/QtUmlGlobal>

#include "private/umldirectedrelationship_p.h"
#include "private/umlpackageableelement_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlActivityEdge;
class UmlClassifier;
class UmlConnector;
class UmlMessage;
class UmlNamedElement;
class UmlRelationship;

class Q_UML_EXPORT UmlInformationFlow : public UmlDirectedRelationship, public UmlPackageableElement
{
public:
    Q_DECL_HIDDEN explicit UmlInformationFlow();

    // Owned attributes
    const QSet<UmlClassifier *> conveyed() const;
    void addConveyed(UmlClassifier *conveyed);
    void removeConveyed(UmlClassifier *conveyed);
    const QSet<UmlNamedElement *> informationSource() const;
    void addInformationSource(UmlNamedElement *informationSource);
    void removeInformationSource(UmlNamedElement *informationSource);
    const QSet<UmlNamedElement *> informationTarget() const;
    void addInformationTarget(UmlNamedElement *informationTarget);
    void removeInformationTarget(UmlNamedElement *informationTarget);
    const QSet<UmlRelationship *> realization() const;
    void addRealization(UmlRelationship *realization);
    void removeRealization(UmlRelationship *realization);
    const QSet<UmlActivityEdge *> realizingActivityEdge() const;
    void addRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    void removeRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    const QSet<UmlConnector *> realizingConnector() const;
    void addRealizingConnector(UmlConnector *realizingConnector);
    void removeRealizingConnector(UmlConnector *realizingConnector);
    const QSet<UmlMessage *> realizingMessage() const;
    void addRealizingMessage(UmlMessage *realizingMessage);
    void removeRealizingMessage(UmlMessage *realizingMessage);

protected:
    QSet<UmlClassifier *> _conveyed;
    QSet<UmlNamedElement *> _informationSource;
    QSet<UmlNamedElement *> _informationTarget;
    QSet<UmlRelationship *> _realization;
    QSet<UmlActivityEdge *> _realizingActivityEdge;
    QSet<UmlConnector *> _realizingConnector;
    QSet<UmlMessage *> _realizingMessage;
};

#endif // UMLINFORMATIONFLOW_H

