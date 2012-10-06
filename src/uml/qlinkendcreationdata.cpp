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

#include "qlinkendcreationdata.h"

QT_BEGIN_NAMESPACE_QTUML

class QLinkEndCreationDataPrivate
{
public:
    explicit QLinkEndCreationDataPrivate();
    virtual ~QLinkEndCreationDataPrivate();

    bool isReplaceAll;
    QInputPin *insertAt;
};

QLinkEndCreationDataPrivate::QLinkEndCreationDataPrivate() :
    isReplaceAll(false)
{
}

QLinkEndCreationDataPrivate::~QLinkEndCreationDataPrivate()
{
}

/*!
    \class QLinkEndCreationData

    \inmodule QtUml

    \brief A link end creation data is not an action. It is an element that identifies links. It identifies one end of a link to be created by a create link action.
 */

QLinkEndCreationData::QLinkEndCreationData(QObject *parent)
    : QLinkEndData(parent), d_ptr(new QLinkEndCreationDataPrivate)
{
}

QLinkEndCreationData::~QLinkEndCreationData()
{
    delete d_ptr;
}

/*!
    Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link.
 */
bool QLinkEndCreationData::isReplaceAll() const
{
    return d_ptr->isReplaceAll;
}

void QLinkEndCreationData::setReplaceAll(bool isReplaceAll)
{
    d_ptr->isReplaceAll = isReplaceAll;
}

/*!
    Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered.
 */
QInputPin *QLinkEndCreationData::insertAt() const
{
    return d_ptr->insertAt;
}

void QLinkEndCreationData::setInsertAt(const QInputPin *insertAt)
{
    d_ptr->insertAt = const_cast<QInputPin *>(insertAt);
}

#include "moc_qlinkendcreationdata.cpp"

QT_END_NAMESPACE_QTUML

