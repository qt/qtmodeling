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
#include <QtCore/QObject>
#include <QtUml/QStructuralFeature>
#include <QtUml/QConnectableElement>
#include <QtUml/QDeploymentTarget>

// QtUml includes
#include <QtUml/QtUmlEnumerations>

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

class Q_UML_EXPORT QProperty : public QObject
{
    Q_OBJECT

    // From aggregated QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From aggregated QNamedElement
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName)
    Q_PROPERTY(QStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QNamespace * namespace_ READ namespace_)
    Q_PROPERTY(const QSet<QDependency *> * clientDependencies READ clientDependencies)

    // From aggregated QTypedElement
    Q_PROPERTY(QType * type READ type WRITE setType)

    // From aggregated QMultiplicityElement
    Q_PROPERTY(qint32 upper READ upper WRITE setUpper)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique)
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered)
    Q_PROPERTY(qint32 lower READ lower WRITE setLower)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)

    // From aggregated QRedefinableElement
    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf)
    Q_PROPERTY(const QSet<QRedefinableElement *> * redefinedElements READ redefinedElements)
    Q_PROPERTY(const QSet<QClassifier *> * redefinitionContexts READ redefinitionContexts)

    // From aggregated QFeature
    Q_PROPERTY(bool isStatic READ isStatic WRITE setStatic)
    Q_PROPERTY(const QSet<QClassifier *> * featuringClassifiers READ featuringClassifiers)

    // From aggregated QParameterableElement
    Q_PROPERTY(QTemplateParameter * owningTemplateParameter READ owningTemplateParameter WRITE setOwningTemplateParameter)

    // From aggregated QConnectableElement
    Q_PROPERTY(const QList<QConnectorEnd *> * ends READ ends)
    Q_PROPERTY(QConnectableElementTemplateParameter * templateParameter READ templateParameter WRITE setTemplateParameter)

    // From aggregated QDeploymentTarget
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

    // Association ends from aggregated QElement
    const QSet<QElement *> *ownedElements() const;
    QElement *owner() const;
    const QSet<QComment *> *ownedComments() const;
    void addOwnedComment(QComment *ownedComment);
    void removeOwnedComment(QComment *ownedComment);

    // Attributes from aggregated QNamedElement
    QString name() const;
    void setName(QString name);
    QtUml::VisibilityKind visibility() const;
    void setVisibility(QtUml::VisibilityKind visibility);
    QString qualifiedName() const;

    // Association ends from aggregated QNamedElement
    QStringExpression *nameExpression() const;
    void setNameExpression(QStringExpression *nameExpression);
    QNamespace *namespace_() const;
    const QSet<QDependency *> *clientDependencies() const;
    void addClientDependency(QDependency *clientDependency);
    void removeClientDependency(QDependency *clientDependency);

    // Association ends from aggregated QTypedElement
    QType *type() const;
    void setType(QType *type);

    // Attributes from aggregated QMultiplicityElement
    qint32 upper() const;
    void setUpper(qint32 upper);
    bool isUnique() const;
    void setUnique(bool isUnique);
    bool isOrdered() const;
    void setOrdered(bool isOrdered);
    qint32 lower() const;
    void setLower(qint32 lower);

    // Association ends from aggregated QMultiplicityElement
    QValueSpecification *upperValue() const;
    void setUpperValue(QValueSpecification *upperValue);
    QValueSpecification *lowerValue() const;
    void setLowerValue(QValueSpecification *lowerValue);

    // Attributes from aggregated QRedefinableElement
    bool isLeaf() const;
    void setLeaf(bool isLeaf);

    // Association ends from aggregated QRedefinableElement
    const QSet<QRedefinableElement *> *redefinedElements() const;
    const QSet<QClassifier *> *redefinitionContexts() const;

    // Attributes from aggregated QFeature
    bool isStatic() const;
    void setStatic(bool isStatic);

    // Association ends from aggregated QFeature
    const QSet<QClassifier *> *featuringClassifiers() const;

    // Association ends from aggregated QParameterableElement
    QTemplateParameter *owningTemplateParameter() const;
    void setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter);

    // Association ends from aggregated QConnectableElement
    const QList<QConnectorEnd *> *ends() const;
    QConnectableElementTemplateParameter *templateParameter() const;
    void setTemplateParameter(QConnectableElementTemplateParameter *templateParameter);

    // Association ends from aggregated QDeploymentTarget
    const QSet<QPackageableElement *> *deployedElements() const;
    const QSet<QDeployment *> *deployments() const;
    void addDeployment(QDeployment *deployment);
    void removeDeployment(QDeployment *deployment);

    // Attributes from QProperty
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

    // Association ends from QProperty
    const QSet<QProperty *> *subsettedProperties() const;
    void addSubsettedProperty(QProperty *subsettedProperty);
    void removeSubsettedProperty(QProperty *subsettedProperty);
    QAssociation *owningAssociation() const;
    void setOwningAssociation(QAssociation *owningAssociation);
    const QList<QProperty *> *qualifiers() const;
    void addQualifier(QProperty *qualifier);
    void removeQualifier(QProperty *qualifier);
    QValueSpecification *defaultValue() const;
    void setDefaultValue(QValueSpecification *defaultValue);
    QClass *class_() const;
    void setClass_(QClass *class_);
    QProperty *opposite() const;
    void setOpposite(QProperty *opposite);
    QProperty *associationEnd() const;
    void setAssociationEnd(QProperty *associationEnd);
    QDataType *datatype() const;
    void setDatatype(QDataType *datatype);
    const QSet<QProperty *> *redefinedProperties() const;
    void addRedefinedProperty(QProperty *redefinedProperty);
    void removeRedefinedProperty(QProperty *redefinedProperty);
    QAssociation *association() const;
    void setAssociation(QAssociation *association);
    QInterface *interface() const;
    void setInterface(QInterface *interface);

    // Operations
    bool isAttribute(const QProperty *p) const;
    bool isCompatibleWith(const QParameterableElement *p) const;
    bool isConsistentWith(const QRedefinableElement *redefinee) const;
    bool isNavigable() const;
    const QSet<QType *> *subsettingContext() const;

protected:
    explicit QProperty(QPropertyPrivate &dd, QObject *parent = 0);

private:
    QStructuralFeature *_wrappedStructuralFeature;
    QConnectableElement *_wrappedConnectableElement;
    QDeploymentTarget *_wrappedDeploymentTarget;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QProperty) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QProperty) *> *)

QT_END_HEADER

#endif // QTUML_QPROPERTY_H

