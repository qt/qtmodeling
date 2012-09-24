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

#include "qclass.h"
//#include "qclass_p.h"

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

/*!
    \class QClass

    \inmodule QtUml

    \brief A class describes a set of objects that share the same specifications of features, constraints, and semantics.
 */

QClass::QClass()
{
}

QClass::~QClass()
{
}

/*!
    If true, the Classifier does not provide a complete declaration and can typically not be instantiated. An abstract classifier is intended to be used by other classifiers e.g. as the target of general metarelationships or generalization relationships.
 */
bool QClass::isAbstract() const
{
}

void QClass::setIsAbstract(bool isAbstract)
{
}

/*!
    References all the Classifiers that are defined (nested) within the Class.
 */
QList<QClassifier *> *QClass::nestedClassifier() const
{
}

/*!
    The attributes (i.e. the properties) owned by the class.
 */
QList<QProperty *> *QClass::ownedAttribute() const
{
}

/*!
    The operations owned by the class.
 */
QList<QOperation *> *QClass::ownedOperation() const
{
}

/*!
    The inherit operation is overridden to exclude redefined properties.
 */
QList<QNamedElement *> *QClass::inherit(QList<QNamedElement *> *inhs) const
{
}

/*!
    Missing derivation for Class::/superClass : Class
 */
QList<QClass *> *QClass::superClass() const
{
}

#include "moc_qclass.cpp"

QT_END_NAMESPACE_UML_CLASSES_KERNEL

