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
** rights. These rights are described in the Nokia Qt LGPL Exception
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

#include "qoperation.h"
#include "qoperation_p.h"

#include <QtUml/QRedefinableElement>
#include <QtUml/QType>
#include <QtUml/QOperationTemplateParameter>
#include <QtUml/QParameter>
#include <QtUml/QInterface>
#include <QtUml/QConstraint>
#include <QtUml/QDataType>
#include <QtUml/QClass>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QOperationPrivate::QOperationPrivate() :
    isQuery(false),
    bodyCondition(0),
    datatype(0),
    templateParameter(0),
    interface_(0),
    class_(0)
{
}

QOperationPrivate::~QOperationPrivate()
{
}

/*!
    \class QOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QOperation::QOperation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QOperationPrivate, wrapper, parent),
    _wrappedTemplateableElement(new QTemplateableElement(this)),
    _wrappedBehavioralFeature(new QBehavioralFeature(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    setPropertyData();
}

QOperation::QOperation(QOperationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedTemplateableElement(new QTemplateableElement(this)),
    _wrappedBehavioralFeature(new QBehavioralFeature(this)),
    _wrappedParameterableElement(new QParameterableElement(this))
{
    setPropertyData();
}

QOperation::~QOperation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QOperation::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QOperation::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QOperation::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QOperation::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QOperation::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QTemplateSignature *QOperation::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->ownedTemplateSignature();
}

void QOperation::setOwnedTemplateSignature(QTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QTemplateBinding *> QOperation::templateBindings() const
{
    return (qwrappedobject_cast<const QTemplateableElement *>(this))->templateBindings();
}

void QOperation::addTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QOperation::removeTemplateBinding(QTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QOperation::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QOperation::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUmlNS::VisibilityKind QOperation::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QOperation::setVisibility(QtUmlNS::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QOperation::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QOperation::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QOperation::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QOperation::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QOperation::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QOperation::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QOperation::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QOperation::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QOperation::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QOperation::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QOperation::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QOperation::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QOperation::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QOperation::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QOperation::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QOperation::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QOperation::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QOperation::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QOperation::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QOperation::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QOperation::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QOperation::unsetLeaf()
{
    setLeaf(false);
    Q_D(QOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QOperation::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QClassifier *> QOperation::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QOperation::isStatic() const
{
    return (qwrappedobject_cast<const QFeature *>(this))->isStatic();
}

void QOperation::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QFeature *>(this))->setStatic(isStatic);
}

void QOperation::unsetStatic()
{
    setStatic(false);
    Q_D(QOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QClassifier *> QOperation::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QBehavioralFeature
// ---------------------------------------------------------------

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUmlNS::CallConcurrencyKind QOperation::concurrency() const
{
    return (qwrappedobject_cast<const QBehavioralFeature *>(this))->concurrency();
}

void QOperation::setConcurrency(QtUmlNS::CallConcurrencyKind concurrency)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->setConcurrency(concurrency);
}

void QOperation::unsetConcurrency()
{
    setConcurrency(QtUmlNS::CallConcurrencySequential);
    Q_D(QOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("concurrency"));
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QOperation::isAbstract() const
{
    return (qwrappedobject_cast<const QBehavioralFeature *>(this))->isAbstract();
}

void QOperation::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->setAbstract(isAbstract);
}

void QOperation::unsetAbstract()
{
    setAbstract(false);
    Q_D(QOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QBehavioralFeature
// ---------------------------------------------------------------

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
QSet<QParameterSet *> QOperation::ownedParameterSets() const
{
    return (qwrappedobject_cast<const QBehavioralFeature *>(this))->ownedParameterSets();
}

void QOperation::addOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->addOwnedParameterSet(ownedParameterSet);
}

void QOperation::removeOwnedParameterSet(QParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->removeOwnedParameterSet(ownedParameterSet);
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
QSet<QBehavior *> QOperation::methods() const
{
    return (qwrappedobject_cast<const QBehavioralFeature *>(this))->methods();
}

void QOperation::addMethod(QBehavior *method)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->addMethod(method);
}

void QOperation::removeMethod(QBehavior *method)
{
    (qwrappedobject_cast<QBehavioralFeature *>(this))->removeMethod(method);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QTemplateParameter *QOperation::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QParameterableElement *>(this))->owningTemplateParameter();
}

void QOperation::setOwningTemplateParameter(QTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QOperation
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QOperation::lower() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QOperation::isQuery() const
{
    // This is a read-write attribute

    Q_D(const QOperation);
    return d->isQuery;
}

void QOperation::setQuery(bool isQuery)
{
    // This is a read-write attribute

    Q_D(QOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isQuery");
}

void QOperation::unsetQuery()
{
    setQuery(false);
    Q_D(QOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isQuery"));
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QOperation::isUnique() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isUnique: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QOperation::upper() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QOperation::isOrdered() const
{
    // This is a read-only derived attribute

    qWarning("QOperation::isOrdered: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QOperation
// ---------------------------------------------------------------

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
QList<QParameter *> QOperation::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->ownedParameters;
}

void QOperation::addOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QBehavioralFeature *>(this))->addOwnedParameter(qwrappedobject_cast<QParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QOperation::removeOwnedParameter(QParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QBehavioralFeature *>(this))->removeOwnedParameter(qwrappedobject_cast<QParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(0);
    }
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QConstraint *QOperation::bodyCondition() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->bodyCondition;
}

void QOperation::setBodyCondition(QConstraint *bodyCondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->bodyCondition != bodyCondition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
QSet<QOperation *> QOperation::redefinedOperations() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->redefinedOperations;
}

void QOperation::addRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.insert(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

void QOperation::removeRedefinedOperation(QOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QSet<QConstraint *> QOperation::postconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->postconditions;
}

void QOperation::addPostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
    }
}

void QOperation::removePostcondition(QConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(postcondition));
    }
}

/*!
    The DataType that owns this Operation.
 */
QDataType *QOperation::datatype() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->datatype;
}

void QOperation::setDatatype(QDataType *datatype)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->datatype));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        if (datatype) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(datatype));
        }
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(datatype));

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedOperation(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QOperationTemplateParameter *QOperation::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->templateParameter;
}

void QOperation::setTemplateParameter(QOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QTemplateParameter *>(templateParameter));

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    The Interface that owns this Operation.
 */
QInterface *QOperation::interface_() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->interface_;
}

void QOperation::setInterface_(QInterface *interface_)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->interface_ != interface_) {
        // Adjust opposite property
        if (d->interface_)
            d->interface_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->interface_));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->interface_));

        d->interface_ = interface_;

        // Adjust subsetted property(ies)
        if (interface_) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(interface_));
        }
        if (interface_) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(interface_));
        }
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(interface_));

        // Adjust opposite property
        if (interface_)
            interface_->addOwnedOperation(this);
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QType *QOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QOperation::type: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
QSet<QConstraint *> QOperation::preconditions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->preconditions;
}

void QOperation::addPrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
    }
}

void QOperation::removePrecondition(QConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(precondition));
    }
}

/*!
    The class that owns the operation.
 */
QClass *QOperation::class_() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->class_;
}

void QOperation::setClass_(QClass *class_)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QClassifier *>(d->class_));
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        if (class_) {
            (qwrappedobject_cast<QFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QClassifier *>(class_));
        }
        (qwrappedobject_cast<QNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QNamespace *>(class_));

        // Adjust opposite property
        if (class_)
            class_->addOwnedOperation(this);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QSet<QType *> QOperation::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QOperation);
    return d->raisedExceptions;
}

void QOperation::addRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QBehavioralFeature *>(this))->addRaisedException(qwrappedobject_cast<QType *>(raisedException));
    }
}

void QOperation::removeRaisedException(QType *raisedException)
{
    // This is a read-write association end

    Q_D(QOperation);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QBehavioralFeature *>(this))->removeRaisedException(qwrappedobject_cast<QType *>(raisedException));
    }
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QOperation::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QOperation::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QParameter *> QOperation::returnResult() const
{
    qWarning("QOperation::returnResult: operation to be implemented");

    return QSet<QParameter *>(); // change here to your derived return
}

void QOperation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("lower")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("upper")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QBehavioralFeature::ownedParameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QParameter::operation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional Constraint on the result values of an invocation of this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operations that are redefined by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying the state of the system when the Operation is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QDataType::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template parameter that exposes this element as a formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOperationTemplateParameter::parameteredElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Interface that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInterface::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints on the state of the system when the Operation is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The class that owns the operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QFeature::featuringClassifiers QRedefinableElement::redefinitionContexts QNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("class_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QClass::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QBehavioralFeature::raisedExceptions");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qoperation.cpp"

