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
#include "qmofenumerationliteral.h"

#include "private/qmofenumerationliteralobject_p.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofEnumeration>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofSlot>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QMofEnumerationLiteral

    \inmodule QtMof

    \brief An enumeration literal is a user-defined data value for an enumeration.
 */
QMofEnumerationLiteral::QMofEnumerationLiteral(bool createQModelingObject) :
    QMofInstanceSpecification(false),
    _enumeration(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofEnumerationLiteralObject(this));
}

QModelingElement *QMofEnumerationLiteral::clone() const
{
    QMofEnumerationLiteral *c = new QMofEnumerationLiteral;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    foreach (QMofSlot *element, slots_())
        c->addSlot(dynamic_cast<QMofSlot *>(element->clone()));
    if (specification())
        c->setSpecification(dynamic_cast<QMofValueSpecification *>(specification()->clone()));
    if (enumeration())
        c->setEnumeration(dynamic_cast<QMofEnumeration *>(enumeration()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The classifier of this EnumerationLiteral derived to be equal to its enumeration.
 */
QMofEnumeration *QMofEnumerationLiteral::classifier() const
{
    // This is a read-only derived association end

    qWarning("QMofEnumerationLiteral::classifier(): to be implemented (this is a derived association end)");

    return 0;
}

void QMofEnumerationLiteral::setClassifier(QMofEnumeration *classifier)
{
    // This is a read-only derived association end

    qWarning("QMofEnumerationLiteral::setClassifier(): to be implemented (this is a derived association end)");
    Q_UNUSED(classifier);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust redefined properties        // QMofInstanceSpecification::removeClassifier(/* <derived-code> */);

        // <derived-code>

        // Adjust redefined properties
        if (classifier) {
            QMofInstanceSpecification::addClassifier(classifier);
        }
    }
}

/*!
    The Enumeration that this EnumerationLiteral is a member of.
 */
QMofEnumeration *QMofEnumerationLiteral::enumeration() const
{
    // This is a read-write association end

    return _enumeration;
}

void QMofEnumerationLiteral::setEnumeration(QMofEnumeration *enumeration)
{
    // This is a read-write association end

    if (_enumeration != enumeration) {
        // Adjust subsetted properties

        _enumeration = enumeration;
        if (enumeration && enumeration->asQModelingObject() && this->asQModelingObject())
            QObject::connect(enumeration->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEnumeration()));

        // Adjust subsetted properties
        setNamespace(enumeration);
    }
}

QT_END_NAMESPACE

