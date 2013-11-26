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
#include "qmoffactory.h"

#include "private/qmoffactoryobject_p.h"

#include <QtMof/QMofArgument>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofDataType>
#include <QtMof/QMofLink>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

QMofFactory::QMofFactory(bool createQModelingObject) :
    _package(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QMofFactoryObject(this));
}

/*!
    Destroys the QMofFactory.
 */
QMofFactory::~QMofFactory()
{
    QModelingElement::deleteQModelingObject();
}

QModelingElement *QMofFactory::clone() const
{
    QMofFactory *c = new QMofFactory;
    return c;
}

// OWNED ATTRIBUTES

QMofPackage *QMofFactory::package() const
{
    // This is a read-write property

    return _package;
}

void QMofFactory::setPackage(QMofPackage *package)
{
    // This is a read-write property

    if (_package != package) {
        _package = package;
        if (package && package->asQModelingObject() && this->asQModelingObject())
            QObject::connect(package->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setPackage()));
    }
}

// OPERATIONS

QMofObject *QMofFactory::createFromString(QMofDataType *dataType, QString string)
{
    qWarning("QMofFactory::createFromString(): to be implemented (operation)");

    Q_UNUSED(dataType);
    Q_UNUSED(string);
    return 0;
}

QString QMofFactory::convertToString(QMofDataType *dataType, QMofObject *object)
{
    qWarning("QMofFactory::convertToString(): to be implemented (operation)");

    Q_UNUSED(dataType);
    Q_UNUSED(object);
    return QString ();
}

QMofElement *QMofFactory::create(QMofClass *metaClass)
{
    qWarning("QMofFactory::create(): to be implemented (operation)");

    Q_UNUSED(metaClass);
    return 0;
}

QMofElement *QMofFactory::createElement(QMofClass *class_, QSet<QMofArgument *> arguments)
{
    qWarning("QMofFactory::createElement(): to be implemented (operation)");

    Q_UNUSED(class_);
    Q_UNUSED(arguments);
    return 0;
}

QMofLink *QMofFactory::createLink(QMofAssociation *association, QMofElement *firstElement, QMofElement *secondElement)
{
    qWarning("QMofFactory::createLink(): to be implemented (operation)");

    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);
    return 0;
}

QT_END_NAMESPACE

