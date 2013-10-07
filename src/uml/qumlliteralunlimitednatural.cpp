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
#include "qumlliteralunlimitednatural.h"

#include "private/qumlliteralunlimitednaturalobject_p.h"

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
    \class QUmlLiteralUnlimitedNatural

    \inmodule QtUml

    \brief A literal unlimited natural is a specification of an unlimited natural number.
 */
QUmlLiteralUnlimitedNatural::QUmlLiteralUnlimitedNatural(bool createQObject) :
    _value(0)
{
    if (createQObject)
        _qObject = new QUmlLiteralUnlimitedNaturalObject(this);
    setPropertyData();
}

QUmlLiteralUnlimitedNatural::~QUmlLiteralUnlimitedNatural()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlLiteralUnlimitedNatural::clone() const
{
    QUmlLiteralUnlimitedNatural *c = new QUmlLiteralUnlimitedNatural;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
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
    The specified UnlimitedNatural value.
 */
int QUmlLiteralUnlimitedNatural::value() const
{
    // This is a read-write property

    return _value;
}

void QUmlLiteralUnlimitedNatural::setValue(int value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
        _modifiedResettableProperties << QStringLiteral("value");
    }
}

// OPERATIONS

/*!
    The query isComputable() is redefined to be true.
 */
bool QUmlLiteralUnlimitedNatural::isComputable() const
{
    qWarning("UmlLiteralUnlimitedNatural::isComputable(): to be implemented (operation)");

    return bool ();
}

/*!
    The query unlimitedValue() gives the value.
 */
int QUmlLiteralUnlimitedNatural::unlimitedValue() const
{
    qWarning("UmlLiteralUnlimitedNatural::unlimitedValue(): to be implemented (operation)");

    return int ();
}

void QUmlLiteralUnlimitedNatural::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlLiteralUnlimitedNatural");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::DocumentationRole] = QStringLiteral("The specified UnlimitedNatural value.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlLiteralUnlimitedNatural")][QStringLiteral("value")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

