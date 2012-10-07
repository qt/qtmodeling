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

#include "qexpansionnode.h"

#include <QtUml/QExpansionRegion>

QT_BEGIN_NAMESPACE_QTUML

class QExpansionNodePrivate
{
public:
    explicit QExpansionNodePrivate();
    virtual ~QExpansionNodePrivate();

    QExpansionRegion *regionAsInput;
    QExpansionRegion *regionAsOutput;
};

QExpansionNodePrivate::QExpansionNodePrivate() :
    regionAsInput(0),
    regionAsOutput(0)
{
}

QExpansionNodePrivate::~QExpansionNodePrivate()
{
}

/*!
    \class QExpansionNode

    \inmodule QtUml

    \brief An expansion node is an object node used to indicate a flow across the boundary of an expansion region. A flow into a region contains a collection that is broken into its individual elements inside the region, which is executed once per element. A flow out of a region combines individual elements into a collection for use outside the region.
 */

QExpansionNode::QExpansionNode(QObject *parent)
    : QObject(parent), d_ptr(new QExpansionNodePrivate)
{
}

QExpansionNode::~QExpansionNode()
{
    delete d_ptr;
}

/*!
    The expansion region for which the node is an input.
 */
QExpansionRegion *QExpansionNode::regionAsInput() const
{
    return d_ptr->regionAsInput;
}

void QExpansionNode::setRegionAsInput(const QExpansionRegion *regionAsInput)
{
    d_ptr->regionAsInput = const_cast<QExpansionRegion *>(regionAsInput);
}

/*!
    The expansion region for which the node is an output.
 */
QExpansionRegion *QExpansionNode::regionAsOutput() const
{
    return d_ptr->regionAsOutput;
}

void QExpansionNode::setRegionAsOutput(const QExpansionRegion *regionAsOutput)
{
    d_ptr->regionAsOutput = const_cast<QExpansionRegion *>(regionAsOutput);
}

#include "moc_qexpansionnode.cpp"

QT_END_NAMESPACE_QTUML

