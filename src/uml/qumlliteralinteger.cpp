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
#include "qumlliteralinteger.h"

#include "private/qumlliteralintegerobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
/*!
    \class QUmlLiteralInteger

    \inmodule QtUml

    \brief A literal integer is a specification of an integer value.
 */
QUmlLiteralInteger::QUmlLiteralInteger(bool createQObject) :
    _value(0)
{
    if (createQObject)
        _qObject = new QUmlLiteralIntegerObject(this);
    setPropertyData();
}

QUmlLiteralInteger::~QUmlLiteralInteger()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlLiteralInteger::clone() const
{
    QUmlLiteralInteger *c = new QUmlLiteralInteger;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependency())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    if (type())
        c->setType(dynamic_cast<QUmlType *>(type()->clone()));
    if (owningTemplateParameter())
        c->setOwningTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(owningTemplateParameter()->clone()));
    if (templateParameter())
        c->setTemplateParameter(dynamic_cast<QUmlTemplateParameter *>(templateParameter()->clone()));
    c->setVisibility(visibility());
    c->setValue(value());
    return c;
}

// OWNED ATTRIBUTES

/*!
    The specified Integer value.
 */
int QUmlLiteralInteger::value() const
{
    // This is a read-write property

    return _value;
}

void QUmlLiteralInteger::setValue(int value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
    }
}

// OPERATIONS

/*!
    The query integerValue() gives the value.
 */
int QUmlLiteralInteger::integerValue() const
{
    qWarning("UmlLiteralInteger::integerValue(): to be implemented (operation)");

    return int ();
}

/*!
    The query isComputable() is redefined to be true.
 */
bool QUmlLiteralInteger::isComputable() const
{
    qWarning("UmlLiteralInteger::isComputable(): to be implemented (operation)");

    return bool ();
}

void QUmlLiteralInteger::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::AggregationRole] = QStringLiteral("none");    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::DocumentationRole] = QStringLiteral("The specified Integer value.");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

