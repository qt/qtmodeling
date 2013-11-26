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
#include "qmoftag.h"

#include "private/qmoftagobject_p.h"

QT_BEGIN_NAMESPACE

QMofTag::QMofTag(bool createQModelingObject) :
    _tagOwner(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofTagObject(this));
}

/*!
    Destroys the QMofTag.
 */
QMofTag::~QMofTag()
{
    QModelingElement::deleteQModelingObject();
}

QModelingElement *QMofTag::clone() const
{
    QMofTag *c = new QMofTag;
    c->setName(name());
    c->setValue(value());
    return c;
}

// OWNED ATTRIBUTES

QString QMofTag::name() const
{
    // This is a read-write property

    return _name;
}

void QMofTag::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

QString QMofTag::value() const
{
    // This is a read-write property

    return _value;
}

void QMofTag::setValue(QString value)
{
    // This is a read-write property

    if (_value != value) {
        _value = value;
    }
}

const QSet<QMofElement *> QMofTag::elements() const
{
    // This is a read-write property

    return _elements;
}
void QMofTag::addElement(QMofElement *element)
{
    // This is a read-write property

    if (!_elements.contains(element)) {
        _elements.insert(element);
        if (element && element->asQModelingObject() && this->asQModelingObject())
            QObject::connect(element->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeElement(QObject *)));
    }
}
void QMofTag::removeElement(QMofElement *element)
{
    // This is a read-write property

    if (_elements.contains(element)) {
        _elements.remove(element);
    }
}

QMofElement *QMofTag::tagOwner() const
{
    // This is a read-write property

    return _tagOwner;
}

void QMofTag::setTagOwner(QMofElement *tagOwner)
{
    // This is a read-write property

    if (_tagOwner != tagOwner) {
        _tagOwner = tagOwner;
        if (tagOwner && tagOwner->asQModelingObject() && this->asQModelingObject())
            QObject::connect(tagOwner->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setTagOwner()));
    }
}

QT_END_NAMESPACE

