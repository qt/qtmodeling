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
#ifndef QUMLINFORMATIONFLOW_H
#define QUMLINFORMATIONFLOW_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlinformationflow_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityEdge;
class QUmlClassifier;
class QUmlConnector;
class QUmlMessage;
class QUmlNamedElement;
class QUmlRelationship;

class Q_UML_EXPORT QUmlInformationFlow : public QObject, public UmlInformationFlow
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlClassifier *> conveyed READ conveyed)
    Q_PROPERTY(QSet<QUmlNamedElement *> informationSource READ informationSource)
    Q_PROPERTY(QSet<QUmlNamedElement *> informationTarget READ informationTarget)
    Q_PROPERTY(QSet<QUmlRelationship *> realization READ realization)
    Q_PROPERTY(QSet<QUmlActivityEdge *> realizingActivityEdge READ realizingActivityEdge)
    Q_PROPERTY(QSet<QUmlConnector *> realizingConnector READ realizingConnector)
    Q_PROPERTY(QSet<QUmlMessage *> realizingMessage READ realizingMessage)

public:
    Q_INVOKABLE explicit QUmlInformationFlow(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlClassifier *> conveyed() const;
    Q_INVOKABLE void addConveyed(UmlClassifier *conveyed);
    Q_INVOKABLE void removeConveyed(UmlClassifier *conveyed);
    Q_INVOKABLE const QSet<QUmlNamedElement *> informationSource() const;
    Q_INVOKABLE void addInformationSource(UmlNamedElement *informationSource);
    Q_INVOKABLE void removeInformationSource(UmlNamedElement *informationSource);
    Q_INVOKABLE const QSet<QUmlNamedElement *> informationTarget() const;
    Q_INVOKABLE void addInformationTarget(UmlNamedElement *informationTarget);
    Q_INVOKABLE void removeInformationTarget(UmlNamedElement *informationTarget);
    Q_INVOKABLE const QSet<QUmlRelationship *> realization() const;
    Q_INVOKABLE void addRealization(UmlRelationship *realization);
    Q_INVOKABLE void removeRealization(UmlRelationship *realization);
    Q_INVOKABLE const QSet<QUmlActivityEdge *> realizingActivityEdge() const;
    Q_INVOKABLE void addRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    Q_INVOKABLE void removeRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    Q_INVOKABLE const QSet<QUmlConnector *> realizingConnector() const;
    Q_INVOKABLE void addRealizingConnector(UmlConnector *realizingConnector);
    Q_INVOKABLE void removeRealizingConnector(UmlConnector *realizingConnector);
    Q_INVOKABLE const QSet<QUmlMessage *> realizingMessage() const;
    Q_INVOKABLE void addRealizingMessage(UmlMessage *realizingMessage);
    Q_INVOKABLE void removeRealizingMessage(UmlMessage *realizingMessage);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlInformationFlow *)
Q_DECLARE_METATYPE(QList<QUmlInformationFlow *> *)
Q_DECLARE_METATYPE(QSet<QUmlInformationFlow *> *)

QT_END_HEADER

#endif // QUMLINFORMATIONFLOW_H

