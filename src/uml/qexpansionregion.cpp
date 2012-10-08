/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qexpansionregion.h"

#include <QtUml/QExpansionNode>

QT_BEGIN_NAMESPACE_QTUML

class QExpansionRegionPrivate
{
public:
    explicit QExpansionRegionPrivate();
    virtual ~QExpansionRegionPrivate();

    QtUml::ExpansionKind mode;
    QSet<QExpansionNode *> *inputElements;
    QSet<QExpansionNode *> *outputElements;
};

QExpansionRegionPrivate::QExpansionRegionPrivate() :
    mode(QtUml::ExpansionIterative),
    inputElements(new QSet<QExpansionNode *>),
    outputElements(new QSet<QExpansionNode *>)
{
}

QExpansionRegionPrivate::~QExpansionRegionPrivate()
{
    delete inputElements;
    delete outputElements;
}

/*!
    \class QExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */

QExpansionRegion::QExpansionRegion(QObject *parent)
    : QStructuredActivityNode(parent), d_ptr(new QExpansionRegionPrivate)
{
}

QExpansionRegion::~QExpansionRegion()
{
    delete d_ptr;
}

/*!
    The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution
 */
QtUml::ExpansionKind QExpansionRegion::mode() const
{
    return d_ptr->mode;
}

void QExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    d_ptr->mode = mode;
}

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.
 */
const QSet<QExpansionNode *> *QExpansionRegion::inputElements() const
{
    return d_ptr->inputElements;
}

void QExpansionRegion::addInputElement(const QExpansionNode *inputElement)
{
    d_ptr->inputElements->insert(const_cast<QExpansionNode *>(inputElement));
}

void QExpansionRegion::removeInputElement(const QExpansionNode *inputElement)
{
    d_ptr->inputElements->remove(const_cast<QExpansionNode *>(inputElement));
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.
 */
const QSet<QExpansionNode *> *QExpansionRegion::outputElements() const
{
    return d_ptr->outputElements;
}

void QExpansionRegion::addOutputElement(const QExpansionNode *outputElement)
{
    d_ptr->outputElements->insert(const_cast<QExpansionNode *>(outputElement));
}

void QExpansionRegion::removeOutputElement(const QExpansionNode *outputElement)
{
    d_ptr->outputElements->remove(const_cast<QExpansionNode *>(outputElement));
}

#include "moc_qexpansionregion.cpp"

QT_END_NAMESPACE_QTUML
