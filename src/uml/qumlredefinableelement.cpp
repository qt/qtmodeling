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
#include "qumlredefinableelement.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClassifier>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlRedefinableElement

    \inmodule QtUml

    \brief A redefinable element is an element that, when defined in the context of a classifier, can be redefined more specifically or differently in the context of another classifier that specializes (directly or indirectly) the context classifier.
 */

QUmlRedefinableElement::QUmlRedefinableElement() :
    _isLeaf(false)
{
    d_ptr->object.setProperty("isLeaf", QVariant::fromValue(false));
    d_ptr->object.setProperty("redefinedElement", QVariant::fromValue(&_redefinedElement));
    d_ptr->object.setProperty("redefinitionContext", QVariant::fromValue(&_redefinitionContext));
}

// OWNED ATTRIBUTES

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlRedefinableElement::isLeaf() const
{
    // This is a read-write property

    return _isLeaf;
}

void QUmlRedefinableElement::setLeaf(bool isLeaf)
{
    // This is a read-write property

    if (_isLeaf != isLeaf) {
        _isLeaf = isLeaf;
    }
}

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlRedefinableElement::redefinedElement() const
{
    // This is a read-only derived union association end

    return _redefinedElement;
}

void QUmlRedefinableElement::addRedefinedElement(QUmlRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (!_redefinedElement.contains(redefinedElement)) {
        _redefinedElement.insert(redefinedElement);
    }
}

void QUmlRedefinableElement::removeRedefinedElement(QUmlRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (_redefinedElement.contains(redefinedElement)) {
        _redefinedElement.remove(redefinedElement);
    }
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlRedefinableElement::redefinitionContext() const
{
    // This is a read-only derived union association end

    return _redefinitionContext;
}

void QUmlRedefinableElement::addRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (!_redefinitionContext.contains(redefinitionContext)) {
        _redefinitionContext.insert(redefinitionContext);
    }
}

void QUmlRedefinableElement::removeRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (_redefinitionContext.contains(redefinitionContext)) {
        _redefinitionContext.remove(redefinitionContext);
    }
}

// OPERATIONS

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QUmlRedefinableElement::isConsistentWith(
    QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRedefinableElement::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlRedefinableElement::isRedefinitionContextValid(
    QUmlRedefinableElement *redefined) const
{
    qWarning("QUmlRedefinableElement::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

