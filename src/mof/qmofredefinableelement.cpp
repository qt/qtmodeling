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
#include "qmofredefinableelement.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>

QT_BEGIN_NAMESPACE

/*!
    \class QMofRedefinableElement

    \inmodule QtMof

    \brief A redefinable element is an element that, when defined in the context of a classifier, can be redefined more specifically or differently in the context of another classifier that specializes (directly or indirectly) the context classifier.

    \b {QMofRedefinableElement is an abstract class.}
 */

/*!
    Creates a new QMofRedefinableElement.
*/
QMofRedefinableElement::QMofRedefinableElement() :
    _isLeaf(false)
{
}

/*!
    Destroys the QMofRedefinableElement.
 */
QMofRedefinableElement::~QMofRedefinableElement()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofRedefinableElement.
*/
QModelingElement *QMofRedefinableElement::clone() const
{
    QMofRedefinableElement *c = new QMofRedefinableElement;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    c->setLeaf(isLeaf());
    return c;
}

// OWNED ATTRIBUTES

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QMofRedefinableElement::isLeaf() const
{
    // This is a read-write property

    return _isLeaf;
}

/*!
    Adjusts isLeaf to \a isLeaf.
 */
void QMofRedefinableElement::setLeaf(bool isLeaf)
{
    // This is a read-write property

    if (_isLeaf != isLeaf) {
        _isLeaf = isLeaf;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isLeaf");
    }
}

/*!
    The redefinable element that is being redefined by this element.

    \b {This is a read-only derived union property.}
 */
const QSet<QMofRedefinableElement *> QMofRedefinableElement::redefinedElements() const
{
    // This is a read-only derived union association end

    return _redefinedElements;
}

/*!
    Adds \a redefinedElement to redefinedElements.

    \sa redefinedElements(), removeRedefinedElement()
 */
void QMofRedefinableElement::addRedefinedElement(QMofRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (!_redefinedElements.contains(redefinedElement)) {
        _redefinedElements.insert(redefinedElement);
        if (redefinedElement && redefinedElement->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedElement->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinedElement(QObject *)));
    }
}

/*!
    Removes \a redefinedElement from redefinedElements.

    \sa redefinedElements(), addRedefinedElement()
 */
void QMofRedefinableElement::removeRedefinedElement(QMofRedefinableElement *redefinedElement)
{
    // This is a read-only derived union association end

    if (_redefinedElements.contains(redefinedElement)) {
        _redefinedElements.remove(redefinedElement);
    }
}

/*!
    References the contexts that this element may be redefined from.

    \b {This is a read-only derived union property.}
 */
const QSet<QMofClassifier *> QMofRedefinableElement::redefinitionContexts() const
{
    // This is a read-only derived union association end

    return _redefinitionContexts;
}

/*!
    Adds \a redefinitionContext to redefinitionContexts.

    \sa redefinitionContexts(), removeRedefinitionContext()
 */
void QMofRedefinableElement::addRedefinitionContext(QMofClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (!_redefinitionContexts.contains(redefinitionContext)) {
        _redefinitionContexts.insert(redefinitionContext);
        if (redefinitionContext && redefinitionContext->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinitionContext->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRedefinitionContext(QObject *)));
    }
}

/*!
    Removes \a redefinitionContext from redefinitionContexts.

    \sa redefinitionContexts(), addRedefinitionContext()
 */
void QMofRedefinableElement::removeRedefinitionContext(QMofClassifier *redefinitionContext)
{
    // This is a read-only derived union association end

    if (_redefinitionContexts.contains(redefinitionContext)) {
        _redefinitionContexts.remove(redefinitionContext);
    }
}

// OPERATIONS

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QMofRedefinableElement::isConsistentWith(QMofRedefinableElement *redefinee) const
{
    qWarning("QMofRedefinableElement::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QMofRedefinableElement::isRedefinitionContextValid(QMofRedefinableElement *redefined) const
{
    qWarning("QMofRedefinableElement::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

