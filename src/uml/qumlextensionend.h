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
#ifndef QUMLEXTENSIONEND_H
#define QUMLEXTENSIONEND_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlextensionend_p.h"

#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAssociation;
class QUmlClass;
class QUmlClassifier;
class QUmlComment;
class QUmlConnectableElementTemplateParameter;
class QUmlConnectorEnd;
class QUmlDataType;
class QUmlDependency;
class QUmlDeployment;
class QUmlElement;
class QUmlInterface;
class QUmlMultiplicityElement;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlPackage;
class QUmlPackageableElement;
class QUmlParameterableElement;
class QUmlProperty;
class QUmlRedefinableElement;
class QUmlStereotype;
class QUmlStringExpression;
class QUmlTemplateParameter;
class QUmlType;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlExtensionEnd : public QObject, public UmlExtensionEnd
{
    Q_OBJECT

    // Properties [Element]
    Q_PROPERTY(QSet<QUmlComment *> ownedComment READ ownedComment)
    Q_PROPERTY(QSet<QUmlElement *> ownedElement READ ownedElement)
    Q_PROPERTY(QUmlElement * owner READ owner)

    // Properties [NamedElement]
    Q_PROPERTY(QSet<QUmlDependency *> clientDependency READ clientDependency)
    Q_PROPERTY(QString name READ name)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility)

    // Properties [TypedElement]

    // Properties [MultiplicityElement]
    Q_PROPERTY(bool isOrdered READ isOrdered)
    Q_PROPERTY(bool isUnique READ isUnique)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue)
    Q_PROPERTY(int upper READ upper)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue)

    // Properties [RedefinableElement]
    Q_PROPERTY(bool isLeaf READ isLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElement READ redefinedElement)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContext READ redefinitionContext)

    // Properties [Feature]
    Q_PROPERTY(QSet<QUmlClassifier *> featuringClassifier READ featuringClassifier)
    Q_PROPERTY(bool isStatic READ isStatic)

    // Properties [StructuralFeature]

    // Properties [ParameterableElement]
    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter)

    // Properties [ConnectableElement]
    Q_PROPERTY(QList<QUmlConnectorEnd *> end READ end)
    Q_PROPERTY(QUmlConnectableElementTemplateParameter * templateParameter READ templateParameter)

    // Properties [DeploymentTarget]
    Q_PROPERTY(QSet<QUmlPackageableElement *> deployedElement READ deployedElement)
    Q_PROPERTY(QSet<QUmlDeployment *> deployment READ deployment)

    // Properties [Property]
    Q_PROPERTY(QtUml::AggregationKind aggregation READ aggregation)
    Q_PROPERTY(QUmlAssociation * association READ association)
    Q_PROPERTY(QUmlProperty * associationEnd READ associationEnd)
    Q_PROPERTY(QUmlClass * class_ READ class_)
    Q_PROPERTY(QUmlDataType * datatype READ datatype)
    Q_PROPERTY(QString default_ READ default_)
    Q_PROPERTY(QUmlValueSpecification * defaultValue READ defaultValue)
    Q_PROPERTY(QUmlInterface * interface_ READ interface_)
    Q_PROPERTY(bool isComposite READ isComposite)
    Q_PROPERTY(bool isDerived READ isDerived)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion)
    Q_PROPERTY(bool isID READ isID)
    Q_PROPERTY(bool isReadOnly READ isReadOnly)
    Q_PROPERTY(QUmlProperty * opposite READ opposite)
    Q_PROPERTY(QUmlAssociation * owningAssociation READ owningAssociation)
    Q_PROPERTY(QList<QUmlProperty *> qualifier READ qualifier)
    Q_PROPERTY(QSet<QUmlProperty *> redefinedProperty READ redefinedProperty)
    Q_PROPERTY(QSet<QUmlProperty *> subsettedProperty READ subsettedProperty)

    // Properties [ExtensionEnd]
    Q_PROPERTY(int lower READ lower)
    Q_PROPERTY(QUmlStereotype * type READ type)

public:
    Q_INVOKABLE explicit QUmlExtensionEnd(QObject *parent = 0);

    // Owned attributes [Element]
    Q_INVOKABLE const QSet<QUmlComment *> ownedComment() const;
    Q_INVOKABLE const QSet<QUmlElement *> ownedElement() const;
    Q_INVOKABLE QUmlElement *owner() const;

    // Owned attributes [NamedElement]
    Q_INVOKABLE const QSet<QUmlDependency *> clientDependency() const;
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QString qualifiedName() const;
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;

    // Owned attributes [TypedElement]

    // Owned attributes [MultiplicityElement]
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE int upper() const;
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;

    // Owned attributes [RedefinableElement]
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE const QSet<QUmlRedefinableElement *> redefinedElement() const;
    Q_INVOKABLE const QSet<QUmlClassifier *> redefinitionContext() const;

    // Owned attributes [Feature]
    Q_INVOKABLE const QSet<QUmlClassifier *> featuringClassifier() const;
    Q_INVOKABLE bool isStatic() const;

    // Owned attributes [StructuralFeature]

    // Owned attributes [ParameterableElement]
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;

    // Owned attributes [ConnectableElement]
    Q_INVOKABLE const QList<QUmlConnectorEnd *> end() const;
    Q_INVOKABLE QUmlConnectableElementTemplateParameter *templateParameter() const;

    // Owned attributes [DeploymentTarget]
    Q_INVOKABLE const QSet<QUmlPackageableElement *> deployedElement() const;
    Q_INVOKABLE const QSet<QUmlDeployment *> deployment() const;

    // Owned attributes [Property]
    Q_INVOKABLE QtUml::AggregationKind aggregation() const;
    Q_INVOKABLE QUmlAssociation *association() const;
    Q_INVOKABLE QUmlProperty *associationEnd() const;
    Q_INVOKABLE QUmlClass *class_() const;
    Q_INVOKABLE QUmlDataType *datatype() const;
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE QUmlValueSpecification *defaultValue() const;
    Q_INVOKABLE QUmlInterface *interface_() const;
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE bool isDerivedUnion() const;
    Q_INVOKABLE bool isID() const;
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE QUmlProperty *opposite() const;
    Q_INVOKABLE QUmlAssociation *owningAssociation() const;
    Q_INVOKABLE const QList<QUmlProperty *> qualifier() const;
    Q_INVOKABLE const QSet<QUmlProperty *> redefinedProperty() const;
    Q_INVOKABLE const QSet<QUmlProperty *> subsettedProperty() const;

    // Owned attributes [ExtensionEnd]
    Q_INVOKABLE int lower() const;
    Q_INVOKABLE QUmlStereotype *type() const;

    // Operations [Element]
    Q_INVOKABLE QSet<QUmlElement *> allOwnedElements() const;
    Q_INVOKABLE bool mustBeOwned() const;

    // Operations [NamedElement]
    Q_INVOKABLE QList<QUmlNamespace *> allNamespaces() const;
    Q_INVOKABLE QSet<QUmlPackage *> allOwningPackages() const;
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
    Q_INVOKABLE QString separator() const;

    // Operations [MultiplicityElement]
    Q_INVOKABLE bool compatibleWith(QUmlMultiplicityElement *other) const;
    Q_INVOKABLE bool includesCardinality(int C) const;
    Q_INVOKABLE bool includesMultiplicity(QUmlMultiplicityElement *M) const;
    Q_INVOKABLE bool is(int lowerbound, int upperbound) const;
    Q_INVOKABLE bool isMultivalued() const;
    Q_INVOKABLE int upperBound() const;

    // Operations [RedefinableElement]
    Q_INVOKABLE bool isRedefinitionContextValid(QUmlRedefinableElement *redefined) const;

    // Operations [ParameterableElement]
    Q_INVOKABLE bool isTemplateParameter() const;

    // Operations [Property]
    Q_INVOKABLE bool isAttribute(QUmlProperty *p) const;
    Q_INVOKABLE bool isCompatibleWith(QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isConsistentWith(QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QUmlType *> subsettingContext() const;

    // Operations [ExtensionEnd]
    Q_INVOKABLE int lowerBound() const;

public Q_SLOTS:

    // Slots for owned attributes [Element]
    void addOwnedComment(UmlComment *ownedComment);
    void removeOwnedComment(UmlComment *ownedComment);

    // Slots for owned attributes [NamedElement]
    void addClientDependency(UmlDependency *clientDependency);
    void removeClientDependency(UmlDependency *clientDependency);
    void setName(QString name);
    void setNameExpression(QUmlStringExpression *nameExpression);
    void setVisibility(QtUml::VisibilityKind visibility);

    // Slots for owned attributes [TypedElement]

    // Slots for owned attributes [MultiplicityElement]
    void setOrdered(bool isOrdered);
    void setUnique(bool isUnique);
    void setLowerValue(QUmlValueSpecification *lowerValue);
    void setUpper(int upper);
    void setUpperValue(QUmlValueSpecification *upperValue);

    // Slots for owned attributes [RedefinableElement]
    void setLeaf(bool isLeaf);

    // Slots for owned attributes [Feature]
    void setStatic(bool isStatic);

    // Slots for owned attributes [StructuralFeature]

    // Slots for owned attributes [ParameterableElement]
    void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Slots for owned attributes [ConnectableElement]
    void setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter);

    // Slots for owned attributes [DeploymentTarget]
    void addDeployment(UmlDeployment *deployment);
    void removeDeployment(UmlDeployment *deployment);

    // Slots for owned attributes [Property]
    void setAggregation(QtUml::AggregationKind aggregation);
    void setAssociation(QUmlAssociation *association);
    void setAssociationEnd(QUmlProperty *associationEnd);
    void setClass(QUmlClass *class_);
    void setDatatype(QUmlDataType *datatype);
    void setDefault(QString default_);
    void setDefaultValue(QUmlValueSpecification *defaultValue);
    void setInterface(QUmlInterface *interface_);
    void setComposite(bool isComposite);
    void setDerived(bool isDerived);
    void setDerivedUnion(bool isDerivedUnion);
    void setID(bool isID);
    void setReadOnly(bool isReadOnly);
    void setOpposite(QUmlProperty *opposite);
    void setOwningAssociation(QUmlAssociation *owningAssociation);
    void addQualifier(UmlProperty *qualifier);
    void removeQualifier(UmlProperty *qualifier);
    void addRedefinedProperty(UmlProperty *redefinedProperty);
    void removeRedefinedProperty(UmlProperty *redefinedProperty);
    void addSubsettedProperty(UmlProperty *subsettedProperty);
    void removeSubsettedProperty(UmlProperty *subsettedProperty);

    // Slots for owned attributes [ExtensionEnd]
    void setLower(int lower);
    void setType(QUmlStereotype *type);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlExtensionEnd *)
Q_DECLARE_METATYPE(QList<QUmlExtensionEnd *> *)
Q_DECLARE_METATYPE(QSet<QUmlExtensionEnd *> *)

QT_END_HEADER

#endif // QUMLEXTENSIONEND_H

