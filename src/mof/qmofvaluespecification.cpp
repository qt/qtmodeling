/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofvaluespecification.h"
#include "qmofvaluespecification_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofValueSpecificationPrivate::QMofValueSpecificationPrivate()
{
}

QMofValueSpecificationPrivate::~QMofValueSpecificationPrivate()
{
}

/*!
    \class QMofValueSpecification

    \inmodule QtMof

    \brief A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.
 */

QMofValueSpecification::QMofValueSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofValueSpecificationPrivate, wrapper, parent),
    _wrappedMofPackageableElement(new QMofPackageableElement(this)),
    _wrappedMofTypedElement(new QMofTypedElement(this))
{
    setPropertyData();
}

QMofValueSpecification::QMofValueSpecification(QMofValueSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedMofPackageableElement(new QMofPackageableElement(this)),
    _wrappedMofTypedElement(new QMofTypedElement(this))
{
    setPropertyData();
}

QMofValueSpecification::~QMofValueSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QMofElement *> QMofValueSpecification::ownedElements() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QMofElement *QMofValueSpecification::owner() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QMofComment *> QMofValueSpecification::ownedComments() const
{
    return (qwrappedobject_cast<const QMofElement *>(this))->ownedComments();
}

void QMofValueSpecification::addOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->addOwnedComment(ownedComment);
}

void QMofValueSpecification::removeOwnedComment(QMofComment *ownedComment)
{
    (qwrappedobject_cast<QMofElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QMofValueSpecification::name() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->name();
}

void QMofValueSpecification::setName(QString name)
{
    (qwrappedobject_cast<QMofNamedElement *>(this))->setName(name);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QMofValueSpecification::qualifiedName() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofNamedElement
// ---------------------------------------------------------------

/*!
    Specifies the namespace that owns the NamedElement.
 */
QMofNamespace *QMofValueSpecification::namespace_() const
{
    return (qwrappedobject_cast<const QMofNamedElement *>(this))->namespace_();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMofPackageableElement
// ---------------------------------------------------------------

/*!
    Indicates that packageable elements must always have a visibility, i.e., visibility is not optional.
 */
QtMof::VisibilityKind QMofValueSpecification::visibility() const
{
    return (qwrappedobject_cast<const QMofPackageableElement *>(this))->visibility();
}

void QMofValueSpecification::setVisibility(QtMof::VisibilityKind visibility)
{
    (qwrappedobject_cast<QMofPackageableElement *>(this))->setVisibility(visibility);
}

void QMofValueSpecification::unsetVisibility()
{
    setVisibility(QtMof::VisibilityPublic);
    Q_D(QMofValueSpecification);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("visibility"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMofTypedElement
// ---------------------------------------------------------------

/*!
    The type of the TypedElement.
 */
QMofType *QMofValueSpecification::type() const
{
    return (qwrappedobject_cast<const QMofTypedElement *>(this))->type();
}

void QMofValueSpecification::setType(QMofType *type)
{
    (qwrappedobject_cast<QMofTypedElement *>(this))->setType(type);
}

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QMofValueSpecification::booleanValue() const
{
    qWarning("QMofValueSpecification::booleanValue: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
qint32 QMofValueSpecification::integerValue() const
{
    qWarning("QMofValueSpecification::integerValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QMofValueSpecification::isComputable() const
{
    qWarning("QMofValueSpecification::isComputable: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QMofValueSpecification::isNull() const
{
    qWarning("QMofValueSpecification::isNull: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
qreal QMofValueSpecification::realValue()
{
    qWarning("QMofValueSpecification::realValue: operation to be implemented");

    return qreal(); // change here to your derived return
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QMofValueSpecification::stringValue() const
{
    qWarning("QMofValueSpecification::stringValue: operation to be implemented");

    return QString(); // change here to your derived return
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
qint32 QMofValueSpecification::unlimitedValue() const
{
    qWarning("QMofValueSpecification::unlimitedValue: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QMofValueSpecification::setPropertyData()
{
    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofvaluespecification.cpp"

