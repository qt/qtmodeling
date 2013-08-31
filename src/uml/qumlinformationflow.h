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

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlActivityEdge;
class QUmlClassifier;
class QUmlComment;
class QUmlConnector;
class QUmlDependency;
class QUmlElement;
class QUmlMessage;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlParameterableElement;
class QUmlRelationship;
class QUmlStringExpression;
class QUmlTemplateParameter;

class Q_UML_EXPORT QUmlInformationFlow : public QObject, public UmlInformationFlow
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [Relationship]
    Q_PROPERTY(QSet<QUmlElement *> relatedElement READ relatedElement)

    // Properties [DirectedRelationship]
    Q_PROPERTY(QSet<QUmlElement *> source READ source)
    Q_PROPERTY(QSet<QUmlElement *> target READ target)

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)
    Q_PROPERTY(QUmlTemplateParameter * templateParameter READ templateParameter)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)

    // Properties [PackageableElement]
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [InformationFlow]
    Q_PROPERTY(QSet<QUmlClassifier *> conveyed READ conveyed)
    Q_PROPERTY(QSet<QUmlNamedElement *> informationSource READ informationSource)
    Q_PROPERTY(QSet<QUmlNamedElement *> informationTarget READ informationTarget)
    Q_PROPERTY(QSet<QUmlRelationship *> realization READ realization)
    Q_PROPERTY(QSet<QUmlActivityEdge *> realizingActivityEdge READ realizingActivityEdge)
    Q_PROPERTY(QSet<QUmlConnector *> realizingConnector READ realizingConnector)
    Q_PROPERTY(QSet<QUmlMessage *> realizingMessage READ realizingMessage)

public:
    Q_INVOKABLE explicit QUmlInformationFlow(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [Relationship]
    Q_INVOKABLE const QSet<QUmlElement *> relatedElement() const;

    // Owned attributes [DirectedRelationship]
    Q_INVOKABLE const QSet<QUmlElement *> source() const;
    Q_INVOKABLE const QSet<QUmlElement *> target() const;

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE QUmlTemplateParameter *templateParameter() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;

    // Owned attributes [PackageableElement]
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [InformationFlow]
    Q_INVOKABLE const QSet<QUmlClassifier *> conveyed() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> informationSource() const;
    Q_INVOKABLE const QSet<QUmlNamedElement *> informationTarget() const;
    Q_INVOKABLE const QSet<QUmlRelationship *> realization() const;
    Q_INVOKABLE const QSet<QUmlActivityEdge *> realizingActivityEdge() const;
    Q_INVOKABLE const QSet<QUmlConnector *> realizingConnector() const;
    Q_INVOKABLE const QSet<QUmlMessage *> realizingMessage() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [Relationship]

    // Slots for owned attributes [DirectedRelationship]

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);
    void setTemplateParameter(QUmlTemplateParameter *templateParameter);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);

    // Slots for owned attributes [PackageableElement]
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [InformationFlow]
    void addConveyed(UmlClassifier *conveyed);
    void removeConveyed(UmlClassifier *conveyed);
    void addInformationSource(UmlNamedElement *informationSource);
    void removeInformationSource(UmlNamedElement *informationSource);
    void addInformationTarget(UmlNamedElement *informationTarget);
    void removeInformationTarget(UmlNamedElement *informationTarget);
    void addRealization(UmlRelationship *realization);
    void removeRealization(UmlRelationship *realization);
    void addRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    void removeRealizingActivityEdge(UmlActivityEdge *realizingActivityEdge);
    void addRealizingConnector(UmlConnector *realizingConnector);
    void removeRealizingConnector(UmlConnector *realizingConnector);
    void addRealizingMessage(UmlMessage *realizingMessage);
    void removeRealizingMessage(UmlMessage *realizingMessage);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlInformationFlow *)
Q_DECLARE_METATYPE(QList<QUmlInformationFlow *> *)
Q_DECLARE_METATYPE(QSet<QUmlInformationFlow *> *)

QT_END_HEADER

#endif // QUMLINFORMATIONFLOW_H

