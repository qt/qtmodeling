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
#include <QtUml/QUmlObject>
#include <QtUml/QDirectedRelationship>
#include <QtUml/QPackageableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QConnector;
class QMessage;
class QActivityEdge;
class QNamedElement;
class QClassifier;
class QRelationship;

class QInformationFlowPrivate;

class Q_UML_EXPORT QInformationFlow : public QUmlObject
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QNamedElement *> * informationTargets READ informationTargets)
    Q_PROPERTY(const QSet<QConnector *> * realizingConnectors READ realizingConnectors)
    Q_PROPERTY(const QSet<QClassifier *> * conveyed READ conveyed)
    Q_PROPERTY(const QSet<QNamedElement *> * informationSources READ informationSources)
    Q_PROPERTY(const QSet<QMessage *> * realizingMessages READ realizingMessages)
    Q_PROPERTY(const QSet<QActivityEdge *> * realizingActivityEdges READ realizingActivityEdges)
    Q_PROPERTY(const QSet<QRelationship *> * realizations READ realizations)

    Q_DISABLE_COPY(QInformationFlow)
    Q_DECLARE_PRIVATE(QInformationFlow)

public:
    Q_INVOKABLE explicit QInformationFlow(QUmlObject *parent = 0, QUmlObject *wrapper = 0);
    virtual ~QInformationFlow();

    // Association ends from aggregated QElement
    Q_INVOKABLE const QSet<QElement *> *ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE const QSet<QComment *> *ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QRelationship
    Q_INVOKABLE const QSet<QElement *> *relatedElements() const;

    // Association ends from aggregated QDirectedRelationship
    Q_INVOKABLE const QSet<QElement *> *sources() const;
    Q_INVOKABLE const QSet<QElement *> *targets() const;

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE const QSet<QDependency *> *clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);

    // Association ends from QInformationFlow
    Q_INVOKABLE const QSet<QNamedElement *> *informationTargets() const;
    Q_INVOKABLE void addInformationTarget(QNamedElement *informationTarget);
    Q_INVOKABLE void removeInformationTarget(QNamedElement *informationTarget);
    Q_INVOKABLE const QSet<QConnector *> *realizingConnectors() const;
    Q_INVOKABLE void addRealizingConnector(QConnector *realizingConnector);
    Q_INVOKABLE void removeRealizingConnector(QConnector *realizingConnector);
    Q_INVOKABLE const QSet<QClassifier *> *conveyed() const;
    Q_INVOKABLE void addConveyed(QClassifier *conveyed);
    Q_INVOKABLE void removeConveyed(QClassifier *conveyed);
    Q_INVOKABLE const QSet<QNamedElement *> *informationSources() const;
    Q_INVOKABLE void addInformationSource(QNamedElement *informationSource);
    Q_INVOKABLE void removeInformationSource(QNamedElement *informationSource);
    Q_INVOKABLE const QSet<QMessage *> *realizingMessages() const;
    Q_INVOKABLE void addRealizingMessage(QMessage *realizingMessage);
    Q_INVOKABLE void removeRealizingMessage(QMessage *realizingMessage);
    Q_INVOKABLE const QSet<QActivityEdge *> *realizingActivityEdges() const;
    Q_INVOKABLE void addRealizingActivityEdge(QActivityEdge *realizingActivityEdge);
    Q_INVOKABLE void removeRealizingActivityEdge(QActivityEdge *realizingActivityEdge);
    Q_INVOKABLE const QSet<QRelationship *> *realizations() const;
    Q_INVOKABLE void addRealization(QRelationship *realization);
    Q_INVOKABLE void removeRealization(QRelationship *realization);

protected:
    explicit QInformationFlow(QInformationFlowPrivate &dd, QUmlObject *parent = 0, QUmlObject *wrapper = 0);

private:
    QDirectedRelationship *_wrappedDirectedRelationship;
    QPackageableElement *_wrappedPackageableElement;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QInformationFlow) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QInformationFlow) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QInformationFlow) *> *)

QT_END_HEADER

#endif // QTUML_QINFORMATIONFLOW_H

