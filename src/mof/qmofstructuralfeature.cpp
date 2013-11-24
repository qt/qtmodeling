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
#include "qmofstructuralfeature.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofRedefinableElement>
#include <QtMof/QMofType>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QMofStructuralFeature

    \inmodule QtMof

    \brief By specializing multiplicity element, it supports a multiplicity that specifies valid cardinalities for the collection of values associated with an instantiation of the structural feature.

    \b {QMofStructuralFeature is an abstract class.}
 */

/*!
    Creates a new QMofStructuralFeature.
*/
QMofStructuralFeature::QMofStructuralFeature() :
    _isReadOnly(false)
{
}

/*!
    Returns a deep-copied clone of the QMofStructuralFeature.
*/
QModelingElement *QMofStructuralFeature::clone() const
{
    QMofStructuralFeature *c = new QMofStructuralFeature;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    c->setStatic(isStatic());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QMofValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QMofValueSpecification *>(upperValue()->clone()));
    c->setReadOnly(isReadOnly());
    return c;
}

// OWNED ATTRIBUTES

/*!
    States whether the feature's value may be modified by a client.
 */
bool QMofStructuralFeature::isReadOnly() const
{
    // This is a read-write property

    return _isReadOnly;
}

/*!
    Adjusts isReadOnly to \a isReadOnly.
 */
void QMofStructuralFeature::setReadOnly(bool isReadOnly)
{
    // This is a read-write property

    if (_isReadOnly != isReadOnly) {
        _isReadOnly = isReadOnly;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isReadOnly");
    }
}

QT_END_NAMESPACE

