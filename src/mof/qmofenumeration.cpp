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
#include "qmofenumeration.h"

#include "private/qmofenumerationobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofEnumerationLiteral>
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
    \class QMofEnumeration

    \inmodule QtMof

    \brief An enumeration is a data type whose values are enumerated in the model as enumeration literals.
 */
QMofEnumeration::QMofEnumeration(bool createQModelingObject) :
    QMofDataType(false)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofEnumerationObject(this));
}

QModelingElement *QMofEnumeration::clone() const
{
    QMofEnumeration *c = new QMofEnumeration;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (package())
        c->setPackage(dynamic_cast<QMofPackage *>(package()->clone()));
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
    foreach (QMofClassifier *element, redefinedClassifiers())
        c->addRedefinedClassifier(dynamic_cast<QMofClassifier *>(element->clone()));
    foreach (QMofProperty *element, ownedAttributes())
        c->addOwnedAttribute(dynamic_cast<QMofProperty *>(element->clone()));
    foreach (QMofOperation *element, ownedOperations())
        c->addOwnedOperation(dynamic_cast<QMofOperation *>(element->clone()));
    foreach (QMofEnumerationLiteral *element, ownedLiterals())
        c->addOwnedLiteral(dynamic_cast<QMofEnumerationLiteral *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The ordered set of literals for this Enumeration.
 */
const QList<QMofEnumerationLiteral *> QMofEnumeration::ownedLiterals() const
{
    // This is a read-write association end

    return _ownedLiterals;
}

void QMofEnumeration::addOwnedLiteral(QMofEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    if (!_ownedLiterals.contains(ownedLiteral)) {
        _ownedLiterals.append(ownedLiteral);
        if (ownedLiteral && ownedLiteral->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedLiteral->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedLiteral(QObject *)));
        ownedLiteral->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedLiteral);

        // Adjust opposite properties
        if (ownedLiteral) {
            ownedLiteral->setEnumeration(this);
        }
    }
}

void QMofEnumeration::removeOwnedLiteral(QMofEnumerationLiteral *ownedLiteral)
{
    // This is a read-write association end

    if (_ownedLiterals.contains(ownedLiteral)) {
        _ownedLiterals.removeAll(ownedLiteral);
        if (ownedLiteral->asQModelingObject())
            ownedLiteral->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedLiteral);

        // Adjust opposite properties
        if (ownedLiteral) {
            ownedLiteral->setEnumeration(0);
        }
    }
}

QT_END_NAMESPACE

