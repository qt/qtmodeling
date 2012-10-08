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

// QtUml includes
#include <QtUml/QtUmlEnumerations>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QStructuralFeature>
#include <QtUml/QConnectableElement>
#include <QtUml/QDeploymentTarget>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QPropertyPrivate;
class QRedefinableElement;
class QParameterableElement;
class QType;
class QInterface;
class QValueSpecification;
class QAssociation;
class QDataType;
class QClass;

class Q_UML_EXPORT QProperty : public QObject, public QStructuralFeature, public QConnectableElement, public QDeploymentTarget
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From QTypedElement
    Q_PROPERTY(QType * type READ type WRITE setType)

    // From QMultiplicityElement
    Q_PROPERTY(qint32 upper READ upper WRITE setUpper)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    // From QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QSet<QClassifier *> * featuringClassifiers READ featuringClassifiers)

    // From QStructuralFeature

    // From QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From QConnectableElement
    Q_PROPERTY(const QList<QConnectorEnd *> * ends READ ends)
    Q_PROPERTY(QConnectableElementTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From QDeploymentTarget
    Q_PROPERTY(const QSet<QPackageableElement *> * deployedElements READ deployedElements)
    Q_PROPERTY(const QSet<QDeployment *> * deployments READ deployments)

    // From QProperty
    Q_PROPERTY(bool isDerived READ isDerived WRITE setDerived)
    Q_PROPERTY(QString default_ READ default_ WRITE setDefault_)
    Q_PROPERTY(bool isComposite READ isComposite WRITE setComposite)
    Q_PROPERTY(bool isReadOnly READ isReadOnly WRITE setReadOnly)
    Q_PROPERTY(bool isID READ isID WRITE setID)
    Q_PROPERTY(bool isDerivedUnion READ isDerivedUnion WRITE setDerivedUnion)
    Q_PROPERTY(QtUml::AggregationKind aggregation READ aggregation WRITE setAggregation)
    Q_PROPERTY(const QSet<QProperty *> * subsettedProperties READ subsettedProperties)
    Q_PROPERTY(QAssociation * owningAssociation READ owningAssociation WRITE setOwningAssociation)
    Q_PROPERTY(const QList<QProperty *> * qualifiers READ qualifiers)
    Q_PROPERTY(QValueSpecification * defaultValue READ defaultValue WRITE setDefaultValue)
    Q_PROPERTY(QClass * class_ READ class_ WRITE setClass_)
    Q_PROPERTY(QProperty * opposite READ opposite WRITE setOpposite)
    Q_PROPERTY(QProperty * associationEnd READ associationEnd WRITE setAssociationEnd)
    Q_PROPERTY(QDataType * datatype READ datatype WRITE setDatatype)
    Q_PROPERTY(const QSet<QProperty *> * redefinedProperties READ redefinedProperties)
    Q_PROPERTY(QAssociation * association READ association WRITE setAssociation)
    Q_PROPERTY(QInterface * interface READ interface WRITE setInterface)

    Q_DISABLE_COPY(QProperty)
    Q_DECLARE_PRIVATE(QProperty)

public:
    explicit QProperty(QObject *parent = 0);
    virtual ~QProperty();

    // Attributes
    bool isDerived() const;
    void setDerived(bool isDerived);
    QString default_() const;
    void setDefault_(QString default_);
    bool isComposite() const;
    void setComposite(bool isComposite);
    bool isReadOnly() const;
    void setReadOnly(bool isReadOnly);
    bool isID() const;
    void setID(bool isID);
    bool isDerivedUnion() const;
    void setDerivedUnion(bool isDerivedUnion);
    QtUml::AggregationKind aggregation() const;
    void setAggregation(QtUml::AggregationKind aggregation);

    // Association-ends
    const QSet<QProperty *> *subsettedProperties() const;
    void addSubsettedProperty(const QProperty *subsettedProperty);
    void removeSubsettedProperty(const QProperty *subsettedProperty);
    QAssociation *owningAssociation() const;
    void setOwningAssociation(const QAssociation *owningAssociation);
    const QList<QProperty *> *qualifiers() const;
    void addQualifier(const QProperty *qualifier);
    void removeQualifier(const QProperty *qualifier);
    QValueSpecification *defaultValue() const;
    void setDefaultValue(const QValueSpecification *defaultValue);
    QClass *class_() const;
    void setClass_(const QClass *class_);
    QProperty *opposite() const;
    void setOpposite(const QProperty *opposite);
    QProperty *associationEnd() const;
    void setAssociationEnd(const QProperty *associationEnd);
    QDataType *datatype() const;
    void setDatatype(const QDataType *datatype);
    const QSet<QProperty *> *redefinedProperties() const;
    void addRedefinedProperty(const QProperty *redefinedProperty);
    void removeRedefinedProperty(const QProperty *redefinedProperty);
    QAssociation *association() const;
    void setAssociation(const QAssociation *association);
    QInterface *interface() const;
    void setInterface(const QInterface *interface);

    // Operations
    bool isAttribute(const QProperty *p) const;
    bool isCompatibleWith(const QParameterableElement *p) const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isNavigable() const;
    const QSet<QType *> *subsettingContext() const;

protected:
    QPropertyPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QProperty) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *)

QT_END_HEADER

#endif // QTUML_QPROPERTY_H

