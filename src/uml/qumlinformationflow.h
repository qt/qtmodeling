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

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlDirectedRelationship>
#include <QtUml/QUmlPackageableElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlConnector;
class QUmlMessage;
class QUmlActivityEdge;
class QUmlNamedElement;
class QUmlClassifier;
class QUmlRelationship;

class QUmlInformationFlowPrivate;

class Q_UML_EXPORT QUmlInformationFlow : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QSet<QUmlElement *> relatedElements READ relatedElements)

    Q_PROPERTY(QSet<QUmlElement *> sources READ sources)
    Q_PROPERTY(QSet<QUmlElement *> targets READ targets)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility RESET unsetVisibility)

    Q_PROPERTY(QSet<QUmlNamedElement *> informationTargets READ informationTargets)
    Q_PROPERTY(QSet<QUmlConnector *> realizingConnectors READ realizingConnectors)
    Q_PROPERTY(QSet<QUmlClassifier *> conveyed READ conveyed)
    Q_PROPERTY(QSet<QUmlNamedElement *> informationSources READ informationSources)
    Q_PROPERTY(QSet<QUmlMessage *> realizingMessages READ realizingMessages)
    Q_PROPERTY(QSet<QUmlActivityEdge *> realizingActivityEdges READ realizingActivityEdges)
    Q_PROPERTY(QSet<QUmlRelationship *> realizations READ realizations)

    Q_DISABLE_COPY(QUmlInformationFlow)
    Q_DECLARE_PRIVATE(QUmlInformationFlow)

public:
    Q_INVOKABLE explicit QUmlInformationFlow(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlInformationFlow();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Association ends from aggregated QUmlRelationship
    Q_INVOKABLE QSet<QUmlElement *> relatedElements() const;

    // Association ends from aggregated QUmlDirectedRelationship
    Q_INVOKABLE QSet<QUmlElement *> sources() const;
    Q_INVOKABLE QSet<QUmlElement *> targets() const;

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Attributes from aggregated QUmlPackageableElement
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE void unsetVisibility();

    // Association ends from QUmlInformationFlow
    Q_INVOKABLE QSet<QUmlNamedElement *> informationTargets() const;
    Q_INVOKABLE void addInformationTarget(QUmlNamedElement *informationTarget);
    Q_INVOKABLE void removeInformationTarget(QUmlNamedElement *informationTarget);
    Q_INVOKABLE QSet<QUmlConnector *> realizingConnectors() const;
    Q_INVOKABLE void addRealizingConnector(QUmlConnector *realizingConnector);
    Q_INVOKABLE void removeRealizingConnector(QUmlConnector *realizingConnector);
    Q_INVOKABLE QSet<QUmlClassifier *> conveyed() const;
    Q_INVOKABLE void addConveyed(QUmlClassifier *conveyed);
    Q_INVOKABLE void removeConveyed(QUmlClassifier *conveyed);
    Q_INVOKABLE QSet<QUmlNamedElement *> informationSources() const;
    Q_INVOKABLE void addInformationSource(QUmlNamedElement *informationSource);
    Q_INVOKABLE void removeInformationSource(QUmlNamedElement *informationSource);
    Q_INVOKABLE QSet<QUmlMessage *> realizingMessages() const;
    Q_INVOKABLE void addRealizingMessage(QUmlMessage *realizingMessage);
    Q_INVOKABLE void removeRealizingMessage(QUmlMessage *realizingMessage);
    Q_INVOKABLE QSet<QUmlActivityEdge *> realizingActivityEdges() const;
    Q_INVOKABLE void addRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge);
    Q_INVOKABLE void removeRealizingActivityEdge(QUmlActivityEdge *realizingActivityEdge);
    Q_INVOKABLE QSet<QUmlRelationship *> realizations() const;
    Q_INVOKABLE void addRealization(QUmlRelationship *realization);
    Q_INVOKABLE void removeRealization(QUmlRelationship *realization);

    virtual void setPropertyData();

protected:
    explicit QUmlInformationFlow(QUmlInformationFlowPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlDirectedRelationship *_wrappedUmlDirectedRelationship;
    QUmlPackageableElement *_wrappedUmlPackageableElement;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLINFORMATIONFLOW_H

