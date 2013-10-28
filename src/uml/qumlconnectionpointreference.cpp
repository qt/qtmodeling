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
#include "qumlconnectionpointreference.h"

#include "private/qumlconnectionpointreferenceobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */
QUmlConnectionPointReference::QUmlConnectionPointReference(bool createQModelingObject) :
    _state(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlConnectionPointReferenceObject(this));
}

QModelingElement *QUmlConnectionPointReference::clone() const
{
    QUmlConnectionPointReference *c = new QUmlConnectionPointReference;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    if (container())
        c->setContainer(dynamic_cast<QUmlRegion *>(container()->clone()));
    foreach (QUmlPseudostate *element, entries())
        c->addEntry(dynamic_cast<QUmlPseudostate *>(element->clone()));
    foreach (QUmlPseudostate *element, exits())
        c->addExit(dynamic_cast<QUmlPseudostate *>(element->clone()));
    if (state())
        c->setState(dynamic_cast<QUmlState *>(state()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::entries() const
{
    // This is a read-write association end

    return _entries;
}

void QUmlConnectionPointReference::addEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    if (!_entries.contains(entry)) {
        _entries.insert(entry);
        if (entry && entry->asQModelingObject() && this->asQModelingObject())
            QObject::connect(entry->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeEntry(QObject *)));
    }
}

void QUmlConnectionPointReference::removeEntry(QUmlPseudostate *entry)
{
    // This is a read-write association end

    if (_entries.contains(entry)) {
        _entries.remove(entry);
    }
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::exits() const
{
    // This is a read-write association end

    return _exits;
}

void QUmlConnectionPointReference::addExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    if (!_exits.contains(exit)) {
        _exits.insert(exit);
        if (exit && exit->asQModelingObject() && this->asQModelingObject())
            QObject::connect(exit->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeExit(QObject *)));
    }
}

void QUmlConnectionPointReference::removeExit(QUmlPseudostate *exit)
{
    // This is a read-write association end

    if (_exits.contains(exit)) {
        _exits.remove(exit);
    }
}

/*!
    The State in which the connection point refreshens are defined.
 */
QUmlState *QUmlConnectionPointReference::state() const
{
    // This is a read-write association end

    return _state;
}

void QUmlConnectionPointReference::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;
        if (state && state->asQModelingObject() && this->asQModelingObject())
            QObject::connect(state->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setState()));

        // Adjust subsetted properties
        setNamespace(state);
    }
}

QT_END_NAMESPACE

