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
#ifndef QTUML_QPROPERTY_H
#define QTUML_QPROPERTY_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QStructuralFeature>
#include <QtUml/QConnectableElement>
#include <QtUml/QDeploymentTarget>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QType;
class QInterface;
class QRedefinableElement;
class QParameterableElement;
class QValueSpecification;
class QDataType;
class QAssociation;
class QClass;

class QPropertyPrivate;

class Q_UML_EXPORT QProperty : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived RESET unsetDerived)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault_ STORED false)
    Q_PROPERTY(bool isComposite READ isComposite WRITE setComposite RESET unsetComposite STORED false)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly RESET unsetReadOnly)
    Q_PROPERTY(bool isID READ isID WRITE setID RESET unsetID)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion RESET unsetDerivedUnion)
    Q_PROPERTY(QtUml::AggregationKind aggregation READ aggregation WRITE setAggregation RESET unsetAggregation)
    Q_PROPERTY(QSet<QProperty *> subsettedProperties READ subsettedProperties)
    Q_PROPERTY(QAssociation * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(QList<QProperty *> qualifiers READ qualifiers)
    Q_PROPERTY(QValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QProperty * opposite READ opposite WRITE setOpposite STORED false)
    Q_PROPERTY(QProperty * associationEnd READ associationEnd WRITE setAssociationEnd)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(QSet<QProperty *> redefinedProperties READ redefinedProperties)
    Q_PROPERTY(QAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QInterface * interface_ READ interface_ WRITE setInterface_)

    Q_DISABLE_COPY(QProperty)
    Q_DECLARE_PRIVATE(QProperty)

public:
    Q_INVOKABLE explicit QProperty(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QProperty();

    // Association ends from aggregated QElement
    Q_INVOKABLE QSet<QElement *> ownedElements() const;
    Q_INVOKABLE QElement *owner() const;
    Q_INVOKABLE QSet<QComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    Q_INVOKABLE QStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QStringExpression *nameExpression);
    Q_INVOKABLE QNamespace *namespace_() const;
    Q_INVOKABLE QSet<QDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QTypedElement
    Q_INVOKABLE QType *type() const;
    Q_INVOKABLE void setType(QType *type);

    // Attributes from aggregated QMultiplicityElement
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

    // Association ends from aggregated QMultiplicityElement
    Q_INVOKABLE QValueSpecification *upperValue() const;
    Q_INVOKABLE void setUpperValue(QValueSpecification *upperValue);
    Q_INVOKABLE QValueSpecification *lowerValue() const;
    Q_INVOKABLE void setLowerValue(QValueSpecification *lowerValue);

    // Attributes from aggregated QRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QRedefinableElement
    Q_INVOKABLE QSet<QRedefinableElement *> redefinedElements() const;
    Q_INVOKABLE QSet<QClassifier *> redefinitionContexts() const;

    // Attributes from aggregated QFeature
    Q_INVOKABLE bool isStatic() const;
    Q_INVOKABLE void setStatic(bool isStatic);
    Q_INVOKABLE void unsetStatic();

    // Association ends from aggregated QFeature
    Q_INVOKABLE QSet<QClassifier *> featuringClassifiers() const;

    // Association ends from aggregated QParameterableElement
    Q_INVOKABLE QTemplateParameter *owningTemplateParameter() const;
    Q_INVOKABLE void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Association ends from aggregated QConnectableElement
    Q_INVOKABLE QList<QConnectorEnd *> ends() const;
    Q_INVOKABLE QConnectableElementTemplateParameter *templateParameter() const;
    Q_INVOKABLE void setTemplateParameter(QConnectableElementTemplateParameter *templateParameter);

    // Association ends from aggregated QDeploymentTarget
    Q_INVOKABLE QSet<QPackageableElement *> deployedElements() const;
    Q_INVOKABLE QSet<QDeployment *> deployments() const;
    Q_INVOKABLE void addDeployment(QDeployment *deployment);
    Q_INVOKABLE void removeDeployment(QDeployment *deployment);

    // Attributes from QProperty
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

    // Association ends from QProperty
    Q_INVOKABLE QSet<QProperty *> subsettedProperties() const;
    Q_INVOKABLE void addSubsettedProperty(QProperty *subsettedProperty);
    Q_INVOKABLE void removeSubsettedProperty(QProperty *subsettedProperty);
    Q_INVOKABLE QAssociation *owningAssociation() const;
    Q_INVOKABLE void setOwningAssociation(QAssociation *owningAssociation);
    Q_INVOKABLE QList<QProperty *> qualifiers() const;
    Q_INVOKABLE void addQualifier(QProperty *qualifier);
    Q_INVOKABLE void removeQualifier(QProperty *qualifier);
    Q_INVOKABLE QValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QValueSpecification *defaultValue);
    Q_INVOKABLE QClass *class_() const;
    Q_INVOKABLE void setClass_(QClass *class_);
    Q_INVOKABLE QProperty *opposite() const;
    Q_INVOKABLE void setOpposite(QProperty *opposite);
    Q_INVOKABLE QProperty *associationEnd() const;
    Q_INVOKABLE void setAssociationEnd(QProperty *associationEnd);
    Q_INVOKABLE QDataType *datatype() const;
    Q_INVOKABLE void setDatatype(QDataType *datatype);
    Q_INVOKABLE QSet<QProperty *> redefinedProperties() const;
    Q_INVOKABLE void addRedefinedProperty(QProperty *redefinedProperty);
    Q_INVOKABLE void removeRedefinedProperty(QProperty *redefinedProperty);
    Q_INVOKABLE QAssociation *association() const;
    Q_INVOKABLE void setAssociation(QAssociation *association);
    Q_INVOKABLE QInterface *interface_() const;
    Q_INVOKABLE void setInterface_(QInterface *interface_);

    // Operations
    Q_INVOKABLE bool isAttribute(const QProperty *p) const;
    Q_INVOKABLE bool isCompatibleWith(const QParameterableElement *p) const;
    Q_INVOKABLE bool isConsistentWith(const QRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isNavigable() const;
    Q_INVOKABLE QSet<QType *> subsettingContext() const;

    virtual void setPropertyData();

protected:
    explicit QProperty(QPropertyPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QStructuralFeature *_wrappedStructuralFeature;
    QConnectableElement *_wrappedConnectableElement;
    QDeploymentTarget *_wrappedDeploymentTarget;
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QPROPERTY_H

