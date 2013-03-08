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
#ifndef QUMLPROPERTY_H
#define QUMLPROPERTY_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlDeploymentTarget>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlType;
class QUmlInterface;
class QUmlRedefinableElement;
class QUmlParameterableElement;
class QUmlValueSpecification;
class QUmlDataType;
class QUmlAssociation;
class QUmlClass;
class QUmlProperty;

class QUmlPropertyPrivate;

class Q_UML_EXPORT QUmlProperty : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QUmlType * type READ type WRITE setType)

    Q_PROPERTY(qint32 upper READ upper WRITE setUpper RESET unsetUpper STORED false)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique RESET unsetUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower STORED false)
    Q_PROPERTY(QUmlValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QUmlValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)
    Q_PROPERTY(QSet<QUmlClassifier *> redefinitionContexts READ redefinitionContexts)

    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic RESET unsetStatic)
    Q_PROPERTY(QSet<QUmlClassifier *> featuringClassifiers READ featuringClassifiers)

    Q_PROPERTY(QUmlTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    Q_PROPERTY(QList<QUmlConnectorEnd *> ends READ ends STORED false)
    Q_PROPERTY(QUmlConnectableElementTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    Q_PROPERTY(QSet<QUmlPackageableElement *> deployedElements READ deployedElements STORED false)
    Q_PROPERTY(QSet<QUmlDeployment *> deployments READ deployments)

    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived RESET unsetDerived)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault_ STORED false)
    Q_PROPERTY(bool isComposite READ isComposite WRITE setComposite RESET unsetComposite STORED false)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)
    Q_PROPERTY(bool isID READ isID WRITE setID RESET unsetID)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion RESET unsetDerivedUnion)
    Q_PROPERTY(QtUml::AggregationKind aggregation READ aggregation WRITE setAggregation RESET unsetAggregation)
    Q_PROPERTY(QSet<QUmlProperty *> subsettedProperties READ subsettedProperties)
    Q_PROPERTY(QUmlAssociation * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(QList<QUmlProperty *> qualifiers READ qualifiers)
    Q_PROPERTY(QUmlValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QUmlClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QUmlProperty * opposite READ opposite WRITE setOpposite STORED false)
    Q_PROPERTY(QUmlProperty * associationEnd READ associationEnd WRITE setAssociationEnd)
    Q_PROPERTY(QUmlDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QSet<QUmlProperty *> redefinedProperties READ redefinedProperties)
    Q_PROPERTY(QUmlAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QUmlInterface * interface_ READ interface_ WRITE setInterface_)

    Q_DISABLE_COPY(QUmlProperty)
    Q_DECLARE_PRIVATE(QUmlProperty)

public:
    Q_INVOKABLE explicit QUmlProperty(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlProperty();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlTypedElement
    Q_INVOKABLE QUmlType *type() const;
    Q_INVOKABLE void setType(QUmlType *type);

    // Attributes from aggregated QUmlMultiplicityElement
    Q_INVOKABLE qint32 upper() const;
    Q_INVOKABLE void setUpper(qint32 upper);
    Q_INVOKABLE void unsetUpper();
    Q_INVOKABLE bool isUnique() const;
    Q_INVOKABLE void setUnique(bool isUnique);
    Q_INVOKABLE void unsetUnique();
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE void unsetOrdered();
    Q_INVOKABLE qint32 lower() const;
    Q_INVOKABLE void setLower(qint32 lower);

    // Association ends from aggregated QUmlMultiplicityElement
    Q_INVOKABLE QUmlValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QUmlValueSpecification *upperValue);
    Q_INVOKABLE QUmlValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QUmlValueSpecification *lowerValue);

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QUmlClassifier *> redefinitionContexts() const;

    // Attributes from aggregated QUmlFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QUmlFeature
    Q_INVOKABLE QSet<QUmlClassifier *> featuringClassifiers() const;

    // Association ends from aggregated QUmlParameterableElement
    Q_INVOKABLE QUmlTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter);

    // Association ends from aggregated QUmlConnectableElement
    Q_INVOKABLE QList<QUmlConnectorEnd *> ends() const;
    Q_INVOKABLE QUmlConnectableElementTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QUmlConnectableElementTemplateParameter *templateParameter);

    // Association ends from aggregated QUmlDeploymentTarget
    Q_INVOKABLE QSet<QUmlPackageableElement *> deployedElements() const;
    Q_INVOKABLE QSet<QUmlDeployment *> deployments() const;
    Q_INVOKABLE void addDeployment(QUmlDeployment *deployment);
    Q_INVOKABLE void removeDeployment(QUmlDeployment *deployment);

    // Attributes from QUmlProperty
    Q_INVOKABLE bool isDerived() const;
    Q_INVOKABLE void setDerived(bool isDerived);
    Q_INVOKABLE void unsetDerived();
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE void setDefault_(QString default_);
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE void setComposite(bool isComposite);
    Q_INVOKABLE void unsetComposite();
    Q_INVOKABLE bool isReadOnly() const;
    Q_INVOKABLE void setReadOnly(bool isReadOnly);
    Q_INVOKABLE void unsetReadOnly();
    Q_INVOKABLE bool isID() const;
    Q_INVOKABLE void setID(bool isID);
    Q_INVOKABLE void unsetID();
    Q_INVOKABLE bool isDerivedUnion() const;
    Q_INVOKABLE void setDerivedUnion(bool isDerivedUnion);
    Q_INVOKABLE void unsetDerivedUnion();
    Q_INVOKABLE QtUml::AggregationKind aggregation() const;
    Q_INVOKABLE void setAggregation(QtUml::AggregationKind aggregation);
    Q_INVOKABLE void unsetAggregation();

    // Association ends from QUmlProperty
    Q_INVOKABLE QSet<QUmlProperty *> subsettedProperties() const;
    Q_INVOKABLE void addSubsettedProperty(QUmlProperty *subsettedProperty);
    Q_INVOKABLE void removeSubsettedProperty(QUmlProperty *subsettedProperty);
    Q_INVOKABLE QUmlAssociation *owningAssociation() const;
    Q_INVOKABLE void setOwningAssociation(QUmlAssociation *owningAssociation);
    Q_INVOKABLE QList<QUmlProperty *> qualifiers() const;
    Q_INVOKABLE void addQualifier(QUmlProperty *qualifier);
    Q_INVOKABLE void removeQualifier(QUmlProperty *qualifier);
    Q_INVOKABLE QUmlValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QUmlValueSpecification *defaultValue);
    Q_INVOKABLE QUmlClass *class_() const;
    Q_INVOKABLE void setClass_(QUmlClass *class_);
    Q_INVOKABLE QUmlProperty *opposite() const;
    Q_INVOKABLE void setOpposite(QUmlProperty *opposite);
    Q_INVOKABLE QUmlProperty *associationEnd() const;
    Q_INVOKABLE void setAssociationEnd(QUmlProperty *associationEnd);
    Q_INVOKABLE QUmlDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QUmlDataType *datatype);
    Q_INVOKABLE QSet<QUmlProperty *> redefinedProperties() const;
    Q_INVOKABLE void addRedefinedProperty(QUmlProperty *redefinedProperty);
    Q_INVOKABLE void removeRedefinedProperty(QUmlProperty *redefinedProperty);
    Q_INVOKABLE QUmlAssociation *association() const;
    Q_INVOKABLE void setAssociation(QUmlAssociation *association);
    Q_INVOKABLE QUmlInterface *interface_() const;
    Q_INVOKABLE void setInterface_(QUmlInterface *interface_);

    // Operations
    Q_INVOKABLE bool isAttribute(const QUmlProperty *p) const;
    Q_INVOKABLE bool isCompatibleWith(const QUmlParameterableElement *p) const;
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QUmlType *> subsettingContext() const;

    virtual void setPropertyData();

protected:
    explicit QUmlProperty(QUmlPropertyPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlStructuralFeature *_wrappedUmlStructuralFeature;
    QUmlConnectableElement *_wrappedUmlConnectableElement;
    QUmlDeploymentTarget *_wrappedUmlDeploymentTarget;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLPROPERTY_H

