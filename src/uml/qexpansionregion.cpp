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
#include "qexpansionregion_p.h"

#include <QtUml/QExpansionNode>

QT_BEGIN_NAMESPACE_QTUML

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

void QExpansionRegionPrivate::setMode(QtUml::ExpansionKind mode)
{
    this->mode = mode;
}
  
void QExpansionRegionPrivate::addInputElement(const QExpansionNode *inputElement) 
{   
    this->inputElements->insert(const_cast<QExpansionNode *>(inputElement));  
}
 
void QExpansionRegionPrivate::removeInputElement(const QExpansionNode *inputElement) 
{    
    this->inputElements->remove(const_cast<QExpansionNode *>(inputElement)); 
}
  
void QExpansionRegionPrivate::addOutputElement(const QExpansionNode *outputElement) 
{   
    this->outputElements->insert(const_cast<QExpansionNode *>(outputElement));  
}
 
void QExpansionRegionPrivate::removeOutputElement(const QExpansionNode *outputElement) 
{    
    this->outputElements->remove(const_cast<QExpansionNode *>(outputElement)); 
}

/*!
    \class QExpansionRegion

    \inmodule QtUml

    \brief An expansion region is a structured activity region that executes multiple times corresponding to elements of an input collection.
 */

QExpansionRegion::QExpansionRegion(QObject *parent)
    : QStructuredActivityNode(false, parent)
{
    d_umlptr = new QExpansionRegionPrivate;
}

QExpansionRegion::QExpansionRegion(bool createPimpl, QObject *parent)
    : QStructuredActivityNode(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QExpansionRegionPrivate;
}

QExpansionRegion::~QExpansionRegion()
{
}

/*!
    The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution
 */
QtUml::ExpansionKind QExpansionRegion::mode() const
{
    Q_D(const QExpansionRegion);
    return d->mode;
}

void QExpansionRegion::setMode(QtUml::ExpansionKind mode)
{
    Q_D(QExpansionRegion);
    d->setMode(mode);
}

/*!
    An object node that holds a separate element of the input collection during each of the multiple executions of the region.
 */
const QSet<QExpansionNode *> *QExpansionRegion::inputElements() const
{
    Q_D(const QExpansionRegion);
    return d->inputElements;
}

void QExpansionRegion::addInputElement(const QExpansionNode *inputElement)
{
    Q_D(QExpansionRegion);
    d->addInputElement(const_cast<QExpansionNode *>(inputElement));
}

void QExpansionRegion::removeInputElement(const QExpansionNode *inputElement)
{
    Q_D(QExpansionRegion);
    d->removeInputElement(const_cast<QExpansionNode *>(inputElement));
}

/*!
    An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete.
 */
const QSet<QExpansionNode *> *QExpansionRegion::outputElements() const
{
    Q_D(const QExpansionRegion);
    return d->outputElements;
}

void QExpansionRegion::addOutputElement(const QExpansionNode *outputElement)
{
    Q_D(QExpansionRegion);
    d->addOutputElement(const_cast<QExpansionNode *>(outputElement));
}

void QExpansionRegion::removeOutputElement(const QExpansionNode *outputElement)
{
    Q_D(QExpansionRegion);
    d->removeOutputElement(const_cast<QExpansionNode *>(outputElement));
}

#include "moc_qexpansionregion.cpp"

QT_END_NAMESPACE_QTUML

