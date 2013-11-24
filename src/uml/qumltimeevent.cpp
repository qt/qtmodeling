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
#include "qumltimeevent.h"

#include "private/qumltimeeventobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTimeExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlTimeEvent

    \inmodule QtUml

    \brief A time event can be defined relative to entering the current state of the executing state machine.A time event specifies a point in time. At the specified time, the event occurs.
 */

/*!
    Creates a new QUmlTimeEvent. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlTimeEvent::QUmlTimeEvent(bool createQModelingObject) :
    _isRelative(false),
    _when(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlTimeEventObject(this));
}

/*!
    Returns a deep-copied clone of the QUmlTimeEvent.
*/
QModelingElement *QUmlTimeEvent::clone() const
{
    QUmlTimeEvent *c = new QUmlTimeEvent;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    c->setRelative(isRelative());
    if (when())
        c->setWhen(dynamic_cast<QUmlTimeExpression *>(when()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Specifies whether it is relative or absolute time.
 */
bool QUmlTimeEvent::isRelative() const
{
    // This is a read-write property

    return _isRelative;
}

/*!
    Adjusts isRelative to \a isRelative.
 */
void QUmlTimeEvent::setRelative(bool isRelative)
{
    // This is a read-write property

    if (_isRelative != isRelative) {
        _isRelative = isRelative;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isRelative");
    }
}

/*!
    Specifies the corresponding time deadline.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlTimeExpression *QUmlTimeEvent::when() const
{
    // This is a read-write association end

    return _when;
}

/*!
    Adjusts when to \a when.
 */
void QUmlTimeEvent::setWhen(QUmlTimeExpression *when)
{
    // This is a read-write association end

    if (_when != when) {
        // Adjust subsetted properties
        removeOwnedElement(_when);

        _when = when;
        if (when && when->asQModelingObject() && this->asQModelingObject())
            QObject::connect(when->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setWhen()));
        when->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (when) {
            addOwnedElement(when);
        }
    }
}

QT_END_NAMESPACE

