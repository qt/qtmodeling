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

#include "qremovestructuralfeaturevalueaction.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

class QRemoveStructuralFeatureValueActionPrivate
{
public:
    explicit QRemoveStructuralFeatureValueActionPrivate();
    virtual ~QRemoveStructuralFeatureValueActionPrivate();

    bool isRemoveDuplicates;
    QInputPin *removeAt;
};

QRemoveStructuralFeatureValueActionPrivate::QRemoveStructuralFeatureValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QRemoveStructuralFeatureValueActionPrivate::~QRemoveStructuralFeatureValueActionPrivate()
{
}

/*!
    \class QRemoveStructuralFeatureValueAction

    \inmodule QtUml

    \brief A remove structural feature value action is a write structural feature action that removes values from structural features.
 */

QRemoveStructuralFeatureValueAction::QRemoveStructuralFeatureValueAction(QObject *parent)
    : QObject(parent), d_ptr(new QRemoveStructuralFeatureValueActionPrivate)
{
}

QRemoveStructuralFeatureValueAction::~QRemoveStructuralFeatureValueAction()
{
    delete d_ptr;
}

/*!
    Specifies whether to remove duplicates of the value in nonunique structural features.
 */
bool QRemoveStructuralFeatureValueAction::isRemoveDuplicates() const
{
    return d_ptr->isRemoveDuplicates;
}

void QRemoveStructuralFeatureValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    d_ptr->isRemoveDuplicates = isRemoveDuplicates;
}

/*!
    Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QRemoveStructuralFeatureValueAction::removeAt() const
{
    return d_ptr->removeAt;
}

void QRemoveStructuralFeatureValueAction::setRemoveAt(const QInputPin *removeAt)
{
    d_ptr->removeAt = const_cast<QInputPin *>(removeAt);
}

#include "moc_qremovestructuralfeaturevalueaction.cpp"

QT_END_NAMESPACE_QTUML

