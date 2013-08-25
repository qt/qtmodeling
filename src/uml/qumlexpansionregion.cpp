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
#include "qumlexpansionregion.h"
#include "qumlexpansionregion_p.h"

#include <QtUml/QUmlExpansionNode>

QT_BEGIN_NAMESPACE

QUmlExpansionRegionPrivate::QUmlExpansionRegionPrivate() :
    mode(QtUml::ExpansionIterative)
{
}

/*!
    \class QUmlExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */

QUmlExpansionRegion::QUmlExpansionRegion(bool create_d_ptr) :
    QUmlStructuredActivityNode(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlExpansionRegionPrivate);
}

// OWNED ATTRIBUTES

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.
 */
QSet<QUmlExpansionNode *> QUmlExpansionRegion::inputElement() const
{
    // This is a read-write association end

    QM_D(const QUmlExpansionRegion);
    return d->inputElement;
}

void QUmlExpansionRegion::addInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    QM_D(QUmlExpansionRegion);
    if (!d->inputElement.contains(inputElement)) {
        d->inputElement.insert(inputElement);
    }
}

void QUmlExpansionRegion::removeInputElement(QUmlExpansionNode *inputElement)
{
    // This is a read-write association end

    QM_D(QUmlExpansionRegion);
    if (d->inputElement.contains(inputElement)) {
        d->inputElement.remove(inputElement);
    }
}

/*!
    The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution
 */
QtUml::ExpansionKind QUmlExpansionRegion::mode() const
{
    // This is a read-write property

    QM_D(const QUmlExpansionRegion);
    return d->mode;
}

void QUmlExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    // This is a read-write property

    QM_D(QUmlExpansionRegion);
    if (d->mode != mode) {
        d->mode = mode;
    }
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.
 */
QSet<QUmlExpansionNode *> QUmlExpansionRegion::outputElement() const
{
    // This is a read-write association end

    QM_D(const QUmlExpansionRegion);
    return d->outputElement;
}

void QUmlExpansionRegion::addOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    QM_D(QUmlExpansionRegion);
    if (!d->outputElement.contains(outputElement)) {
        d->outputElement.insert(outputElement);
    }
}

void QUmlExpansionRegion::removeOutputElement(QUmlExpansionNode *outputElement)
{
    // This is a read-write association end

    QM_D(QUmlExpansionRegion);
    if (d->outputElement.contains(outputElement)) {
        d->outputElement.remove(outputElement);
    }
}

QT_END_NAMESPACE

