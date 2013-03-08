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

#include "qumlvaluespecification.h"
#include "qumlvaluespecification_p.h"

#include <QtUml/QUmlParameterableElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlValueSpecificationPrivate::QUmlValueSpecificationPrivate()
{
}

QUmlValueSpecificationPrivate::~QUmlValueSpecificationPrivate()
{
}

/*!
    \class QUmlValueSpecification

    \inmodule QtUml

    \brief ValueSpecification specializes ParameterableElement to specify that a value specification can be exposed as a formal template parameter, and provided as an actual parameter in a binding of a template.A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QUmlValueSpecification::QUmlValueSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlValueSpecificationPrivate, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this))
{
    setPropertyData();
}

QUmlValueSpecification::QUmlValueSpecification(QUmlValueSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlTypedElement(new QUmlTypedElement(this)),
    _wrappedUmlPackageableElement(new QUmlPackageableElement(this))
{
    setPropertyData();
}

QUmlValueSpecification::~QUmlValueSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlValueSpecification::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlValueSpecification::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlValueSpecification::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlValueSpecification::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlValueSpecification::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlValueSpecification::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlValueSpecification::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlValueSpecification::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlValueSpecification::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlValueSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlValueSpecification::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlValueSpecification::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlValueSpecification::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlValueSpecification::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlValueSpecification::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlValueSpecification::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlParameterableElement
// ---------------------------------------------------------------

/*!
    The formal template parameter that owns this element.
 */
QUmlTemplateParameter *QUmlValueSpecification::owningTemplateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->owningTemplateParameter();
}

void QUmlValueSpecification::setOwningTemplateParameter(QUmlTemplateParameter *owningTemplateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setOwningTemplateParameter(owningTemplateParameter);
}

/*!
    The template parameter that exposes this element as a formal parameter.
 */
QUmlTemplateParameter *QUmlValueSpecification::templateParameter() const
{
    return (qwrappedobject_cast<const QUmlParameterableElement *>(this))->templateParameter();
}

void QUmlValueSpecification::setTemplateParameter(QUmlTemplateParameter *templateParameter)
{
    (qwrappedobject_cast<QUmlParameterableElement *>(this))->setTemplateParameter(templateParameter);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtUml::VisibilityKind QUmlValueSpecification::visibility() const
{
    return (qwrappedobject_cast<const QUmlPackageableElement *>(this))->visibility();
}

void QUmlValueSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlPackageableElement *>(this))->setVisibility(visibility);
}

void QUmlValueSpecification::unsetVisibility()
{
    setVisibility(QtUml::VisibilityPublic);
    Q_D(QUmlValueSpecification);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QUmlValueSpecification::booleanValue() const
{
    qWarning("QUmlValueSpecification::booleanValue: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
qint32 QUmlValueSpecification::integerValue() const
{
    qWarning("QUmlValueSpecification::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isCompatibleWith() determines if this parameterable element is compatible with the specified parameterable element. By default parameterable element P is compatible with parameterable element Q if the kind of P is the same or a subtype as the kind of Q. In addition, for ValueSpecification, the type must be conformant with the type of the specified parameterable element.
 */
bool QUmlValueSpecification::isCompatibleWith(const QUmlParameterableElement *p) const
{
    qWarning("QUmlValueSpecification::isCompatibleWith: operation to be implemented");
    Q_UNUSED(p);

    return bool(); // change here to your derived return
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QUmlValueSpecification::isComputable() const
{
    qWarning("QUmlValueSpecification::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QUmlValueSpecification::isNull() const
{
    qWarning("QUmlValueSpecification::isNull: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
qreal QUmlValueSpecification::realValue() const
{
    qWarning("QUmlValueSpecification::realValue: operation to be implemented");

    return qreal(); // change here to your derived return
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QUmlValueSpecification::stringValue() const
{
    qWarning("QUmlValueSpecification::stringValue: operation to be implemented");

    return QString(); // change here to your derived return
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
qint32 QUmlValueSpecification::unlimitedValue() const
{
    qWarning("QUmlValueSpecification::unlimitedValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QUmlValueSpecification::setPropertyData()
{
    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlvaluespecification.cpp"

