/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofvaluespecification.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

/*!
    \class QMofValueSpecification

    \inmodule QtMof

    \brief A value specification is the specification of a (possibly empty) set of instances, including both objects and data values.

    \b {QMofValueSpecification is an abstract class.}
 */

/*!
    Creates a new QMofValueSpecification.
*/
QMofValueSpecification::QMofValueSpecification()
{
}

/*!
    Returns a deep-copied clone of the QMofValueSpecification.
*/
QModelingElement *QMofValueSpecification::clone() const
{
    QMofValueSpecification *c = new QMofValueSpecification;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    if (type())
        c->setType(dynamic_cast<QMofType *>(type()->clone()));
    return c;
}

// OPERATIONS

/*!
    The query booleanValue() gives a single Boolean value when one can be computed.
 */
bool QMofValueSpecification::booleanValue() const
{
    qWarning("QMofValueSpecification::booleanValue(): to be implemented (operation)");

    return bool ();
}

/*!
    The query integerValue() gives a single Integer value when one can be computed.
 */
int QMofValueSpecification::integerValue() const
{
    qWarning("QMofValueSpecification::integerValue(): to be implemented (operation)");

    return int ();
}

/*!
    The query isComputable() determines whether a value specification can be computed in a model. This operation cannot be fully defined in OCL. A conforming implementation is expected to deliver true for this operation for all value specifications that it can compute, and to compute all of those for which the operation is true. A conforming implementation is expected to be able to compute the value of all literals.
 */
bool QMofValueSpecification::isComputable() const
{
    qWarning("QMofValueSpecification::isComputable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query isNull() returns true when it can be computed that the value is null.
 */
bool QMofValueSpecification::isNull() const
{
    qWarning("QMofValueSpecification::isNull(): to be implemented (operation)");

    return bool ();
}

/*!
    The query realValue() gives a single Real value when one can be computed.
 */
double QMofValueSpecification::realValue()
{
    qWarning("QMofValueSpecification::realValue(): to be implemented (operation)");

    return double ();
}

/*!
    The query stringValue() gives a single String value when one can be computed.
 */
QString QMofValueSpecification::stringValue() const
{
    qWarning("QMofValueSpecification::stringValue(): to be implemented (operation)");

    return QString ();
}

/*!
    The query unlimitedValue() gives a single UnlimitedNatural value when one can be computed.
 */
QString QMofValueSpecification::unlimitedValue() const
{
    qWarning("QMofValueSpecification::unlimitedValue(): to be implemented (operation)");

    return QString ();
}

QT_END_NAMESPACE

