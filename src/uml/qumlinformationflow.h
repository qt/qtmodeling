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

#include <QtUml/QUmlDirectedRelationship>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityEdge;
class QUmlClassifier;
class QUmlConnector;
class QUmlMessage;
class QUmlNamedElement;
class QUmlRelationship;

class Q_UML_EXPORT QUmlInformationFlow : public QUmlDirectedRelationship, public QUmlPackageableElement
{
public:
    QUmlInformationFlow();

    // Owned attributes
    QSet<QUmlClassifier *> conveyed() const;
    void addConveyed(QUmlClassifier *conveyed);
    void removeConveyed(QUmlClassifier *conveyed);
    QSet<QUmlNamedElement *> informationSource() const;
    void addInformationSource(QUmlNamedElement *informationSource);
    void removeInformationSource(QUmlNamedElement *informationSource);
    QSet<QUmlNamedElement *> informationTarget() const;
    void addInformationTarget(QUmlNamedElement *informationTarget);
    void removeInformationTarget(QUmlNamedElement *informationTarget);
    QSet<QUmlRelationship *> realization() const;
    void addRealization(QUmlRelationship *realization);
    void removeRealization(QUmlRelationship *realization);
    QSet<QUmlActivityEdge *> realizingActivityEdge() const;
    void addRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge);
    void removeRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge);
    QSet<QUmlConnector *> realizingConnector() const;
    void addRealizingConnector(QUmlConnector *realizingConnector);
    void removeRealizingConnector(QUmlConnector *realizingConnector);
    QSet<QUmlMessage *> realizingMessage() const;
    void addRealizingMessage(QUmlMessage *realizingMessage);
    void removeRealizingMessage(QUmlMessage *realizingMessage);

protected:
    QSet<QUmlClassifier *> _conveyed;
    QSet<QUmlNamedElement *> _informationSource;
    QSet<QUmlNamedElement *> _informationTarget;
    QSet<QUmlRelationship *> _realization;
    QSet<QUmlActivityEdge *> _realizingActivityEdge;
    QSet<QUmlConnector *> _realizingConnector;
    QSet<QUmlMessage *> _realizingMessage;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINFORMATIONFLOW_H

