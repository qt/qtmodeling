/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qvaluespecification.h"
#include "qvaluespecification_p.h"

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

QValueSpecificationPrivate::QValueSpecificationPrivate()
{
}

QValueSpecificationPrivate::~QValueSpecificationPrivate()
{
}

/*!
    \class QValueSpecification

    \inmodule QtMof

    \brief A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QValueSpecification::QValueSpecification(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QValueSpecificationPrivate, parent, wrapper),
    _wrappedPackageableElement(new QPackageableElement(this, this)),
    _wrappedTypedElement(new QTypedElement(this, this))
{
    setPropertyData();
}

QValueSpecification::QValueSpecification(QValueSpecificationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedPackageableElement(new QPackageableElement(this, this)),
    _wrappedTypedElement(new QTypedElement(this, this))
{
    setPropertyData();
}

QValueSpecification::~QValueSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QValueSpecification::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QValueSpecification::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QValueSpecification::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QValueSpecification::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QValueSpecification::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QValueSpecification::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QValueSpecification::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QValueSpecification::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QValueSpecification::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QValueSpecification::visibility() const
{
    return (qwrappedobject_cast<const QPackageableElement *>(this))->visibility();
}

void QValueSpecification::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QPackageableElement *>(this))->setVisibility(visibility);
}

void QValueSpecification::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QType *QValueSpecification::type() const
{
    return (qwrappedobject_cast<const QTypedElement *>(this))->type();
}

void QValueSpecification::setType(QType *type)
{
    (qwrappedobject_cast<QTypedElement *>(this))->setType(type);
}

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QValueSpecification::booleanValue() const
{
    qWarning("QValueSpecification::booleanValue: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
qint32 QValueSpecification::integerValue() const
{
    qWarning("QValueSpecification::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QValueSpecification::isComputable() const
{
    qWarning("QValueSpecification::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QValueSpecification::isNull() const
{
    qWarning("QValueSpecification::isNull: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
qreal QValueSpecification::realValue()
{
    qWarning("QValueSpecification::realValue: operation to be implemented");

    return qreal(); // change here to your derived return
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QValueSpecification::stringValue() const
{
    qWarning("QValueSpecification::stringValue: operation to be implemented");

    return QString(); // change here to your derived return
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
qint32 QValueSpecification::unlimitedValue() const
{
    qWarning("QValueSpecification::unlimitedValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QValueSpecification::registerMetaTypes() const
{
    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QValueSpecification::setPropertyData()
{

    QWrappedObject::setPropertyData();
}

#include "moc_qvaluespecification.cpp"

QT_END_NAMESPACE_QTMOF

