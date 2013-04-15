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
#include "qumloperation.h"
#include "qumloperation_p.h"

#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlType>
#include <QtUml/QUmlOperationTemplateParameter>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlClass>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlOperationPrivate::QUmlOperationPrivate() :
    isQuery(false),
    bodyCondition(0),
    datatype(0),
    templateParameter(0),
    interface_(0),
    class_(0)
{
}

QUmlOperationPrivate::~QUmlOperationPrivate()
{
}

/*!
    \class QUmlOperation

    \inmodule QtUml

    \brief An operation is a behavioral feature of a classifier that specifies the name, type, parameters, and constraints for invoking an associated behavior.An operation may invoke both the execution of method behaviors as well as other behavioral responses.Operation specializes TemplateableElement in order to support specification of template operations and bound operations. Operation specializes ParameterableElement to specify that an operation can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.
 */

QUmlOperation::QUmlOperation(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlOperationPrivate, wrapper, parent),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this)),
    _wrappedUmlBehavioralFeature(new QUmlBehavioralFeature(this)),
    _wrappedUmlParameterableElement(new QUmlParameterableElement(this))
{
    setPropertyData();
}

QUmlOperation::QUmlOperation(QUmlOperationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlTemplateableElement(new QUmlTemplateableElement(this)),
    _wrappedUmlBehavioralFeature(new QUmlBehavioralFeature(this)),
    _wrappedUmlParameterableElement(new QUmlParameterableElement(this))
{
    setPropertyData();
}

QUmlOperation::~QUmlOperation()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlOperation::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlOperation::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlOperation::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlOperation::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlOperation::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTemplateableElement
// ---------------------------------------------------------------

/*!
    The optional template signature specifying the formal template parameters.
 */
QUmlTemplateSignature *QUmlOperation::ownedTemplateSignature() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->ownedTemplateSignature();
}

void QUmlOperation::setOwnedTemplateSignature(QUmlTemplateSignature *ownedTemplateSignature)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->setOwnedTemplateSignature(ownedTemplateSignature);
}

/*!
    The optional bindings from this element to templates.
 */
QSet<QUmlTemplateBinding *> QUmlOperation::templateBindings() const
{
    return (qwrappedobject_cast<const QUmlTemplateableElement *>(this))->templateBindings();
}

void QUmlOperation::addTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->addTemplateBinding(templateBinding);
}

void QUmlOperation::removeTemplateBinding(QUmlTemplateBinding *templateBinding)
{
    (qwrappedobject_cast<QUmlTemplateableElement *>(this))->removeTemplateBinding(templateBinding);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlOperation::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlOperation::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlOperation::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlOperation::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlOperation::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlOperation::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlOperation::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlOperation::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlOperation::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlOperation::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlOperation::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlOperation::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlOperation::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlOperation::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlOperation::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlOperation::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlOperation::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlOperation::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlOperation::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlOperation::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlOperation::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlOperation::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlOperation::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlOperation::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlOperation::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlOperation::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlOperation::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlOperation::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true).
 */
bool QUmlOperation::isStatic() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->isStatic();
}

void QUmlOperation::setStatic(bool isStatic)
{
    (qwrappedobject_cast<QUmlFeature *>(this))->setStatic(isStatic);
}

void QUmlOperation::unsetStatic()
{
    setStatic(false);
    Q_D(QUmlOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isStatic"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlFeature
// ---------------------------------------------------------------

/*!
    The Classifiers that have this Feature as a feature.
 */
QSet<QUmlClassifier *> QUmlOperation::featuringClassifiers() const
{
    return (qwrappedobject_cast<const QUmlFeature *>(this))->featuringClassifiers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlBehavioralFeature
// ---------------------------------------------------------------

/*!
    Specifies the semantics of concurrent calls to the same passive instance (i.e., an instance originating from a class with isActive being false). Active instances control access to their own behavioral features.
 */
QtUml::CallConcurrencyKind QUmlOperation::concurrency() const
{
    return (qwrappedobject_cast<const QUmlBehavioralFeature *>(this))->concurrency();
}

void QUmlOperation::setConcurrency(QtUml::CallConcurrencyKind concurrency)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->setConcurrency(concurrency);
}

void QUmlOperation::unsetConcurrency()
{
    setConcurrency(QtUml::CallConcurrencySequential);
    Q_D(QUmlOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("concurrency"));
}

/*!
    If true, then the behavioral feature does not have an implementation, and one must be supplied by a more specific element. If false, the behavioral feature must have an implementation in the classifier or one must be inherited from a more general element.
 */
bool QUmlOperation::isAbstract() const
{
    return (qwrappedobject_cast<const QUmlBehavioralFeature *>(this))->isAbstract();
}

void QUmlOperation::setAbstract(bool isAbstract)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->setAbstract(isAbstract);
}

void QUmlOperation::unsetAbstract()
{
    setAbstract(false);
    Q_D(QUmlOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isAbstract"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlBehavioralFeature
// ---------------------------------------------------------------

/*!
    The ParameterSets owned by this BehavioralFeature.
 */
QSet<QUmlParameterSet *> QUmlOperation::ownedParameterSets() const
{
    return (qwrappedobject_cast<const QUmlBehavioralFeature *>(this))->ownedParameterSets();
}

void QUmlOperation::addOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->addOwnedParameterSet(ownedParameterSet);
}

void QUmlOperation::removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->removeOwnedParameterSet(ownedParameterSet);
}

/*!
    A behavioral description that implements the behavioral feature. There may be at most one behavior for a particular pairing of a classifier (as owner of the behavior) and a behavioral feature (as specification of the behavior).
 */
QSet<QUmlBehavior *> QUmlOperation::methods() const
{
    return (qwrappedobject_cast<const QUmlBehavioralFeature *>(this))->methods();
}

void QUmlOperation::addMethod(QUmlBehavior *method)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->addMethod(method);
}

void QUmlOperation::removeMethod(QUmlBehavior *method)
{
    (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->removeMethod(method);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlOperation::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlOperation::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlOperation
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.
 */
qint32 QUmlOperation::lower() const
{
    // This is a read-only derived attribute

    qWarning("QUmlOperation::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).
 */
bool QUmlOperation::isQuery() const
{
    // This is a read-write attribute

    Q_D(const QUmlOperation);
    return d->isQuery;
}

void QUmlOperation::setQuery(bool isQuery)
{
    // This is a read-write attribute

    Q_D(QUmlOperation);
    if (d->isQuery != isQuery) {
        d->isQuery = isQuery;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isQuery");
}

void QUmlOperation::unsetQuery()
{
    setQuery(false);
    Q_D(QUmlOperation);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isQuery"));
}

/*!
    Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.
 */
bool QUmlOperation::isUnique() const
{
    // This is a read-only derived attribute

    qWarning("QUmlOperation::isUnique: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.
 */
qint32 QUmlOperation::upper() const
{
    // This is a read-only derived attribute

    qWarning("QUmlOperation::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

/*!
    This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.
 */
bool QUmlOperation::isOrdered() const
{
    // This is a read-only derived attribute

    qWarning("QUmlOperation::isOrdered: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlOperation
// ---------------------------------------------------------------

/*!
    Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.
 */
QList<QUmlParameter *> QUmlOperation::ownedParameters() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->ownedParameters;
}

void QUmlOperation::addOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (!d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.append(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->addOwnedParameter(qwrappedobject_cast<QUmlParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(this);
    }
}

void QUmlOperation::removeOwnedParameter(QUmlParameter *ownedParameter)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->ownedParameters.contains(ownedParameter)) {
        d->ownedParameters.removeAll(ownedParameter);
        qTopLevelWrapper(ownedParameter)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->removeOwnedParameter(qwrappedobject_cast<QUmlParameter *>(ownedParameter));

        // Adjust opposite property
        ownedParameter->setOperation(0);
    }
}

/*!
    An optional Constraint on the result values of an invocation of this Operation.
 */
QUmlConstraint *QUmlOperation::bodyCondition() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->bodyCondition;
}

void QUmlOperation::setBodyCondition(QUmlConstraint *bodyCondition)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->bodyCondition != bodyCondition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(d->bodyCondition));

        d->bodyCondition = bodyCondition;

        // Adjust subsetted property(ies)
        if (bodyCondition) {
            (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(bodyCondition));
        }
    }
}

/*!
    References the Operations that are redefined by this Operation.
 */
QSet<QUmlOperation *> QUmlOperation::redefinedOperations() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->redefinedOperations;
}

void QUmlOperation::addRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (!d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.insert(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedOperation));
    }
}

void QUmlOperation::removeRedefinedOperation(QUmlOperation *redefinedOperation)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->redefinedOperations.contains(redefinedOperation)) {
        d->redefinedOperations.remove(redefinedOperation);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedOperation));
    }
}

/*!
    An optional set of Constraints specifying the state of the system when the Operation is completed.
 */
QSet<QUmlConstraint *> QUmlOperation::postconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->postconditions;
}

void QUmlOperation::addPostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (!d->postconditions.contains(postcondition)) {
        d->postconditions.insert(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(postcondition));
    }
}

void QUmlOperation::removePostcondition(QUmlConstraint *postcondition)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->postconditions.contains(postcondition)) {
        d->postconditions.remove(postcondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(postcondition));
    }
}

/*!
    The DataType that owns this Operation.
 */
QUmlDataType *QUmlOperation::datatype() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->datatype;
}

void QUmlOperation::setDatatype(QUmlDataType *datatype)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->datatype != datatype) {
        // Adjust opposite property
        if (d->datatype)
            d->datatype->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->datatype));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->datatype));

        d->datatype = datatype;

        // Adjust subsetted property(ies)
        if (datatype) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(datatype));
        }
        if (datatype) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(datatype));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(datatype));

        // Adjust opposite property
        if (datatype)
            datatype->addOwnedOperation(this);
    }
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlOperationTemplateParameter *QUmlOperation::templateParameter() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->templateParameter;
}

void QUmlOperation::setTemplateParameter(QUmlOperationTemplateParameter *templateParameter)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->templateParameter != templateParameter) {
        // Adjust opposite property

        d->templateParameter = templateParameter;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(qwrappedobject_cast<QUmlTemplateParameter *>(templateParameter));

        // Adjust opposite property
        templateParameter->setParameteredElement(this);
    }
}

/*!
    The Interface that owns this Operation.
 */
QUmlInterface *QUmlOperation::interface_() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->interface_;
}

void QUmlOperation::setInterface_(QUmlInterface *interface_)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->interface_ != interface_) {
        // Adjust opposite property
        if (d->interface_)
            d->interface_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->interface_));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->interface_));

        d->interface_ = interface_;

        // Adjust subsetted property(ies)
        if (interface_) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(interface_));
        }
        if (interface_) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(interface_));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(interface_));

        // Adjust opposite property
        if (interface_)
            interface_->addOwnedOperation(this);
    }
}

/*!
    This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.
 */
QUmlType *QUmlOperation::type() const
{
    // This is a read-only derived association end

    qWarning("QUmlOperation::type: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    An optional set of Constraints on the state of the system when the Operation is invoked.
 */
QSet<QUmlConstraint *> QUmlOperation::preconditions() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->preconditions;
}

void QUmlOperation::addPrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (!d->preconditions.contains(precondition)) {
        d->preconditions.insert(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(precondition));
    }
}

void QUmlOperation::removePrecondition(QUmlConstraint *precondition)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->preconditions.contains(precondition)) {
        d->preconditions.remove(precondition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(precondition));
    }
}

/*!
    The class that owns the operation.
 */
QUmlClass *QUmlOperation::class_() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->class_;
}

void QUmlOperation::setClass_(QUmlClass *class_)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->class_ != class_) {
        // Adjust opposite property
        if (d->class_)
            d->class_->removeOwnedOperation(this);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->removeFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(d->class_));
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(d->class_));

        d->class_ = class_;

        // Adjust subsetted property(ies)
        if (class_) {
            (qwrappedobject_cast<QUmlFeaturePrivate *>(d))->addFeaturingClassifier(qwrappedobject_cast<QUmlClassifier *>(class_));
        }
        if (class_) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinitionContext(qwrappedobject_cast<QUmlClassifier *>(class_));
        }
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(class_));

        // Adjust opposite property
        if (class_)
            class_->addOwnedOperation(this);
    }
}

/*!
    References the Types representing exceptions that may be raised during an invocation of this operation.
 */
QSet<QUmlType *> QUmlOperation::raisedExceptions() const
{
    // This is a read-write association end

    Q_D(const QUmlOperation);
    return d->raisedExceptions;
}

void QUmlOperation::addRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (!d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.insert(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->addRaisedException(qwrappedobject_cast<QUmlType *>(raisedException));
    }
}

void QUmlOperation::removeRaisedException(QUmlType *raisedException)
{
    // This is a read-write association end

    Q_D(QUmlOperation);
    if (d->raisedExceptions.contains(raisedException)) {
        d->raisedExceptions.remove(raisedException);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlBehavioralFeature *>(this))->removeRaisedException(qwrappedobject_cast<QUmlType *>(raisedException));
    }
}

/*!
    A redefining operation is consistent with a redefined operation if it has the same number of owned parameters, and the type of each owned parameter conforms to the type of the corresponding redefined parameter.The query isConsistentWith() specifies, for any two Operations in a context in which redefinition is possible, whether redefinition would be consistent in the sense of maintaining type covariance. Other senses of consistency may be required, for example to determine consistency in the sense of contravariance. Users may define alternative queries under names different from 'isConsistentWith()', as for example, users may define a query named 'isContravariantWith()'.
 */
bool QUmlOperation::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlOperation::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query returnResult() returns the set containing the return parameter of the Operation if one exists, otherwise, it returns an empty set
 */
QSet<QUmlParameter *> QUmlOperation::returnResult() const
{
    qWarning("QUmlOperation::returnResult: operation to be implemented");

    return QSet<QUmlParameter *>(); // change here to your derived return
}

void QUmlOperation::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the lower multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("lower")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether an execution of the BehavioralFeature leaves the state of the system unchanged (isQuery=true) or whether side effects may occur (isQuery=false).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isQuery")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the return parameter is unique or not, if present.This information is derived from the return result for this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isUnique")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the upper multiplicity of the return parameter, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("upper")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies whether the return parameter is ordered or not, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the ordered set of formal parameters of this BehavioralFeature.Specifies the parameters owned by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlBehavioralFeature::ownedParameters");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("ownedParameters")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlParameter::operation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional Constraint on the result values of an invocation of this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("bodyCondition")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Operations that are redefined by this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("redefinedOperations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints specifying the state of the system when the Operation is completed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("postconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The DataType that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("datatype")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlDataType::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The template parameter that exposes this element as a formal parameter.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlParameterableElement::templateParameter");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("templateParameter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlOperationTemplateParameter::parameteredElement");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The Interface that owns this Operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("interface_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInterface::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("This information is derived from the return result for this Operation.Specifies the return result of the operation, if present.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("type")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional set of Constraints on the state of the system when the Operation is invoked.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("preconditions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The class that owns the operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlFeature::featuringClassifiers QUmlRedefinableElement::redefinitionContexts QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("class_")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlClass::ownedOperation");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Types representing exceptions that may be raised during an invocation of this operation.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlBehavioralFeature::raisedExceptions");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOperation")][QString::fromLatin1("raisedExceptions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumloperation.cpp"

