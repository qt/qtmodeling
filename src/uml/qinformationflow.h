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

// Forward decls for function parameters
class QConnector;
class QMessage;
class QActivityEdge;
class QNamedElement;
class QClassifier;
class QRelationship;

class QInformationFlowPrivate;

class Q_UML_EXPORT QInformationFlow : public QObject
{
    Q_OBJECT

    // From aggregated QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From aggregated QRelationship
    Q_PROPERTY(const QSet<QElement *> * relatedElements READ relatedElements)

    // From aggregated QDirectedRelationship
    Q_PROPERTY(const QSet<QElement *> * sources READ sources)
    Q_PROPERTY(const QSet<QElement *> * targets READ targets)

    // From aggregated QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From aggregated QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From aggregated QPackageableElement
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)

    // From QInformationFlow
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
    explicit QInformationFlow(QObject *parent = 0);
    virtual ~QInformationFlow();

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Association ends from aggregated QRelationship
    const QSet<QElement *> *relatedElements() const;

    // Association ends from aggregated QDirectedRelationship
    const QSet<QElement *> *sources() const;
    const QSet<QElement *> *targets() const;

    // Association ends from aggregated QParameterableElement
    QTemplateParameter *owningTemplateParameter() const;
    void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);
    QTemplateParameter *templateParameter() const;
    void setTemplateParameter(QTemplateParameter *templateParameter);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Attributes from aggregated QPackageableElement
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);

    // Association ends from QInformationFlow
    const QSet<QNamedElement *> *informationTargets() const;
    void addInformationTarget(QNamedElement *informationTarget);
    void removeInformationTarget(QNamedElement *informationTarget);
    const QSet<QConnector *> *realizingConnectors() const;
    void addRealizingConnector(QConnector *realizingConnector);
    void removeRealizingConnector(QConnector *realizingConnector);
    const QSet<QClassifier *> *conveyed() const;
    void addConveyed(QClassifier *conveyed);
    void removeConveyed(QClassifier *conveyed);
    const QSet<QNamedElement *> *informationSources() const;
    void addInformationSource(QNamedElement *informationSource);
    void removeInformationSource(QNamedElement *informationSource);
    const QSet<QMessage *> *realizingMessages() const;
    void addRealizingMessage(QMessage *realizingMessage);
    void removeRealizingMessage(QMessage *realizingMessage);
    const QSet<QActivityEdge *> *realizingActivityEdges() const;
    void addRealizingActivityEdge(QActivityEdge *realizingActivityEdge);
    void removeRealizingActivityEdge(QActivityEdge *realizingActivityEdge);
    const QSet<QRelationship *> *realizations() const;
    void addRealization(QRelationship *realization);
    void removeRealization(QRelationship *realization);

protected:
    explicit QInformationFlow(QInformationFlowPrivate &dd, QObject *parent = 0);

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

