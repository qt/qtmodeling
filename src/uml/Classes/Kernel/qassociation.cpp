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

#include "qassociation.h"
//#include "qassociation_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QAssociation

    \inmodule QtUml

    \brief An association describes a set of tuples whose values refer to typed instances. An instance of an association is called a link. A link is a tuple with one value for each end of the association, where each value is an instance of the type of the end.
 */

QAssociation::QAssociation()
{
}

QAssociation::~QAssociation()
{
}

/*!
    Specifies whether the association is derived from other model elements such as other associations or constraints.
 */
bool QAssociation::isDerived() const
{
}

void QAssociation::setIsDerived(bool isDerived)
{
}

/*!
    Each end represents participation of instances of the classifier connected to the end in links of the association.
 */
QList<QProperty *> *QAssociation::memberEnd() const
{
}

/*!
    The navigable ends that are owned by the association itself.
 */
QList<QProperty *> *QAssociation::navigableOwnedEnd() const
{
}

/*!
    The ends that are owned by the association itself.
 */
QList<QProperty *> *QAssociation::ownedEnd() const
{
}

/*!
    endType is derived from the types of the member ends.
 */
QList<QType *> *QAssociation::endType() const
{
}

#include "moc_qassociation.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

