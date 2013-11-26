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
#include "qmofdatatype.h"

#include "private/qmofdatatypeobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofFeature>
#include <QtMof/QMofGeneralization>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofObject>
#include <QtMof/QMofOperation>
#include <QtMof/QMofPackage>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofProperty>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofDataType

    \inmodule QtMof

    \brief A data type is a type whose instances are identified only by their value. A data type may contain attributes to support the modeling of structured data types.
 */

/*!
    Creates a new QMofDataType. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QMofDataType::QMofDataType(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofDataTypeObject(this));
}

/*!
    Destroys the QMofDataType.
 */
QMofDataType::~QMofDataType()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofDataType.
*/
QModelingElement *QMofDataType::clone() const
{
    QMofDataType *c = new QMofDataType;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    foreach (QMofGeneralization *element, generalizations())
        c->addGeneralization(dynamic_cast<QMofGeneralization *>(element->clone()));
    c->setAbstract(isAbstract());
    c->setFinalSpecialization(isFinalSpecialization());
    foreach (QMofProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QMofProperty *>(element->clone()));
    foreach (QMofOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QMofOperation *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The Attributes owned by the DataType.

    \sa addOwnedAttribute(), removeOwnedAttribute()

    \b {Subsetted property(ies):} QMofClassifier::attributes(), QMofNamespace::ownedMembers().

    \b {Opposite property(ies):} QMofProperty::datatype().
 */
const QList<QMofProperty *> QMofDataType::ownedAttributes() const
{
    // This is a read-write association end

    return _ownedAttributes;
}

/*!
    Adds \a ownedAttribute to ownedAttributes.

    \sa ownedAttributes(), removeOwnedAttribute()
 */
void QMofDataType::addOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    if (!_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.append(ownedAttribute);
        if (ownedAttribute && ownedAttribute->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedAttribute->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedAttribute(QObject *)));
        ownedAttribute->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addAttribute(ownedAttribute);
        addOwnedMember(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setDatatype(this);
        }
    }
}

/*!
    Removes \a ownedAttribute from ownedAttributes.

    \sa ownedAttributes(), addOwnedAttribute()
 */
void QMofDataType::removeOwnedAttribute(QMofProperty *ownedAttribute)
{
    // This is a read-write association end

    if (_ownedAttributes.contains(ownedAttribute)) {
        _ownedAttributes.removeAll(ownedAttribute);
        if (ownedAttribute->asQModelingObject())
            ownedAttribute->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeAttribute(ownedAttribute);
        removeOwnedMember(ownedAttribute);

        // Adjust opposite properties
        if (ownedAttribute) {
            ownedAttribute->setDatatype(0);
        }
    }
}

/*!
    The Operations owned by the DataType.

    \sa addOwnedOperation(), removeOwnedOperation()

    \b {Subsetted property(ies):} QMofClassifier::features(), QMofNamespace::ownedMembers(), .

    \b {Opposite property(ies):} QMofOperation::datatype().
 */
const QList<QMofOperation *> QMofDataType::ownedOperations() const
{
    // This is a read-write association end

    return _ownedOperations;
}

/*!
    Adds \a ownedOperation to ownedOperations.

    \sa ownedOperations(), removeOwnedOperation()
 */
void QMofDataType::addOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    if (!_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.append(ownedOperation);
        if (ownedOperation && ownedOperation->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedOperation->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedOperation(QObject *)));
        ownedOperation->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addFeature(ownedOperation);
        addOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setDatatype(this);
        }
    }
}

/*!
    Removes \a ownedOperation from ownedOperations.

    \sa ownedOperations(), addOwnedOperation()
 */
void QMofDataType::removeOwnedOperation(QMofOperation *ownedOperation)
{
    // This is a read-write association end

    if (_ownedOperations.contains(ownedOperation)) {
        _ownedOperations.removeAll(ownedOperation);
        if (ownedOperation->asQModelingObject())
            ownedOperation->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeFeature(ownedOperation);
        removeOwnedMember(ownedOperation);

        // Adjust opposite properties
        if (ownedOperation) {
            ownedOperation->setDatatype(0);
        }
    }
}

// OPERATIONS

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QSet<QMofNamedElement *> QMofDataType::inherit(QSet<QMofNamedElement *> inhs) const
{
    qWarning("QMofDataType::inherit(): to be implemented (operation)");

    Q_UNUSED(inhs);
    return QSet<QMofNamedElement *> ();
}

QT_END_NAMESPACE

