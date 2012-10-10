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

#include "qlinkenddestructiondata.h"
#include "qlinkenddestructiondata_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QLinkEndDestructionDataPrivate::QLinkEndDestructionDataPrivate() :
    isDestroyDuplicates(false),
    destroyAt(0)
{
}

QLinkEndDestructionDataPrivate::~QLinkEndDestructionDataPrivate()
{
}

void QLinkEndDestructionDataPrivate::setDestroyDuplicates(bool isDestroyDuplicates)
{
    this->isDestroyDuplicates = isDestroyDuplicates;
}
  
void QLinkEndDestructionDataPrivate::setDestroyAt(const QInputPin *destroyAt) 
{  
    this->destroyAt = const_cast<QInputPin *>(destroyAt);   
}

/*!
    \class QLinkEndDestructionData

    \inmodule QtUml

    \brief A link end destruction data is not an action. It is an element that identifies links. It identifies one end of a link to be destroyed by destroy link action.
 */

QLinkEndDestructionData::QLinkEndDestructionData(QObject *parent)
    : QLinkEndData(false, parent)
{
    d_umlptr = new QLinkEndDestructionDataPrivate;
}

QLinkEndDestructionData::QLinkEndDestructionData(bool createPimpl, QObject *parent)
    : QLinkEndData(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QLinkEndDestructionDataPrivate;
}

QLinkEndDestructionData::~QLinkEndDestructionData()
{
}

/*!
    Specifies whether to destroy duplicates of the value in nonunique association ends.
 */
bool QLinkEndDestructionData::isDestroyDuplicates() const
{
    Q_D(const QLinkEndDestructionData);
    return d->isDestroyDuplicates;
}

void QLinkEndDestructionData::setDestroyDuplicates(bool isDestroyDuplicates)
{
    Q_D(QLinkEndDestructionData);
    d->setDestroyDuplicates(isDestroyDuplicates);
}

/*!
    Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QLinkEndDestructionData::destroyAt() const
{
    Q_D(const QLinkEndDestructionData);
    return d->destroyAt;
}

void QLinkEndDestructionData::setDestroyAt(const QInputPin *destroyAt)
{
    Q_D(QLinkEndDestructionData);
    d->setDestroyAt(const_cast<QInputPin *>(destroyAt));
}

#include "moc_qlinkenddestructiondata.cpp"

QT_END_NAMESPACE_QTUML

