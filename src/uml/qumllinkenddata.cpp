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
#include "qumllinkenddata.h"

#include "private/qumllinkenddataobject_p.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>
/*!
    \class QUmlLinkEndData

    \inmodule QtUml

    \brief A link end data is not an action. It is an element that identifies links. It identifies one end of a link to be read or written by the children of a link action. A link cannot be passed as a runtime value to or from an action. Instead, a link is identified by its end objects and qualifier values, if any. This requires more than one piece of data, namely, the statically-specified end in the user model, the object on the end, and the qualifier values for that end, if any. These pieces are brought together around a link end data. Each association end is identified separately with an instance of the LinkEndData class.
 */
QUmlLinkEndData::QUmlLinkEndData(bool createQObject) :
    _end(0),
    _value(0)
{
    if (createQObject)
        _qObject = new QUmlLinkEndDataObject(this);
    setPropertyData();
}

QUmlLinkEndData::~QUmlLinkEndData()
{
    if (!deletingFromQObject) {
        if (_qObject)
            _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

QModelingObject *QUmlLinkEndData::clone() const
{
    QUmlLinkEndData *c = new QUmlLinkEndData;
    foreach (QUmlComment *element, ownedComment())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    if (end())
        c->setEnd(dynamic_cast<QUmlProperty *>(end()->clone()));
    foreach (QUmlQualifierValue *element, qualifier())
        c->addQualifier(dynamic_cast<QUmlQualifierValue *>(element->clone()));
    if (value())
        c->setValue(dynamic_cast<QUmlInputPin *>(value()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    Association end for which this link-end data specifies values.
 */
QUmlProperty *QUmlLinkEndData::end() const
{
    // This is a read-write association end

    return _end;
}

void QUmlLinkEndData::setEnd(QUmlProperty *end)
{
    // This is a read-write association end

    if (_end != end) {
        _end = end;
        if (end && end->asQObject() && this->asQObject())
            QObject::connect(end->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setEnd()));
    }
}

/*!
    List of qualifier values
 */
const QSet<QUmlQualifierValue *> QUmlLinkEndData::qualifier() const
{
    // This is a read-write association end

    return _qualifier;
}

void QUmlLinkEndData::addQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (!_qualifier.contains(qualifier)) {
        _qualifier.insert(qualifier);
        if (qualifier && qualifier->asQObject() && this->asQObject())
            QObject::connect(qualifier->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeQualifier(QObject *)));
        qualifier->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(qualifier);
    }
}

void QUmlLinkEndData::removeQualifier(QUmlQualifierValue *qualifier)
{
    // This is a read-write association end

    if (_qualifier.contains(qualifier)) {
        _qualifier.remove(qualifier);
        if (qualifier->asQObject())
            qualifier->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(qualifier);
    }
}

/*!
    Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.
 */
QUmlInputPin *QUmlLinkEndData::value() const
{
    // This is a read-write association end

    return _value;
}

void QUmlLinkEndData::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    if (_value != value) {
        _value = value;
        if (value && value->asQObject() && this->asQObject())
            QObject::connect(value->asQObject(), SIGNAL(destroyed()), this->asQObject(), SLOT(setValue()));
    }
}

void QUmlLinkEndData::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::DocumentationRole] = QStringLiteral("Association end for which this link-end data specifies values.");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("end")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::DocumentationRole] = QStringLiteral("List of qualifier values");
    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("qualifier")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::DocumentationRole] = QStringLiteral("Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading.");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("value")][QtModeling::OppositeEndRole] = QStringLiteral("");

}

