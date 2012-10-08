/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QTUML_QINFORMATIONFLOW_H
#define QTUML_QINFORMATIONFLOW_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QDirectedRelationship>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QInformationFlowPrivate;
class QConnector;
class QMessage;
class QActivityEdge;
class QNamedElement;
class QClassifier;
class QRelationship;

class Q_UML_EXPORT QInformationFlow : public QObject, public QDirectedRelationship, public QPackageableElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)

    // From QRelationship
    Q_PROPERTY(const QSet<QElement *> * relatedElements READ relatedElements)

    // From QDirectedRelationship
    Q_PROPERTY(const QSet<QElement *> * sources READ sources)
    Q_PROPERTY(const QSet<QElement *> * targets READ targets)

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)

    // From QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QInformationFlow
    Q_PROPERTY(const QSet<QClassifier *> * conveyed READ conveyed)
    Q_PROPERTY(const QSet<QNamedElement *> * informationSources READ informationSources)
    Q_PROPERTY(const QSet<QNamedElement *> * informationTargets READ informationTargets)
    Q_PROPERTY(const QSet<QRelationship *> * realizations READ realizations)
    Q_PROPERTY(const QSet<QActivityEdge *> * realizingActivityEdges READ realizingActivityEdges)
    Q_PROPERTY(const QSet<QConnector *> * realizingConnectors READ realizingConnectors)
    Q_PROPERTY(const QSet<QMessage *> * realizingMessages READ realizingMessages)

    Q_DISABLE_COPY(QInformationFlow)
    Q_DECLARE_PRIVATE(QInformationFlow)

public:
    explicit QInformationFlow(QObject *parent = 0);
    virtual ~QInformationFlow();

    // Association-ends
    const QSet<QClassifier *> *conveyed() const;
    void addConveyed(const QClassifier *conveyed);
    void removeConveyed(const QClassifier *conveyed);
    const QSet<QNamedElement *> *informationSources() const;
    void addInformationSource(const QNamedElement *informationSource);
    void removeInformationSource(const QNamedElement *informationSource);
    const QSet<QNamedElement *> *informationTargets() const;
    void addInformationTarget(const QNamedElement *informationTarget);
    void removeInformationTarget(const QNamedElement *informationTarget);
    const QSet<QRelationship *> *realizations() const;
    void addRealization(const QRelationship *realization);
    void removeRealization(const QRelationship *realization);
    const QSet<QActivityEdge *> *realizingActivityEdges() const;
    void addRealizingActivityEdge(const QActivityEdge *realizingActivityEdge);
    void removeRealizingActivityEdge(const QActivityEdge *realizingActivityEdge);
    const QSet<QConnector *> *realizingConnectors() const;
    void addRealizingConnector(const QConnector *realizingConnector);
    void removeRealizingConnector(const QConnector *realizingConnector);
    const QSet<QMessage *> *realizingMessages() const;
    void addRealizingMessage(const QMessage *realizingMessage);
    void removeRealizingMessage(const QMessage *realizingMessage);

private:
    QInformationFlowPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInformationFlow) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QInformationFlow) *> *)

QT_END_HEADER

#endif // QTUML_QINFORMATIONFLOW_H
