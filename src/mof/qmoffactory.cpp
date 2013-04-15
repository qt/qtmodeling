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
#include "qmoffactory_p.h"

#include <QtMof/QMofLink>
#include <QtMof/QMofArgument>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>
#include <QtMof/QMofDataType>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofFactoryPrivate::QMofFactoryPrivate() :
    package(0)
{
}

QMofFactoryPrivate::~QMofFactoryPrivate()
{
}


QMofFactory::QMofFactory(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofFactoryPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofFactory::QMofFactory(QMofFactoryPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofFactory::~QMofFactory()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofFactory
// ---------------------------------------------------------------

QMofPackage *QMofFactory::package() const
{
    // This is a read-write attribute

    Q_D(const QMofFactory);
    return d->package;
}

void QMofFactory::setPackage(QMofPackage *package)
{
    // This is a read-write attribute

    Q_D(QMofFactory);
    if (d->package != package) {
        d->package = package;
    }
}

QMofObject *QMofFactory::createFromString(const QMofDataType *dataType, QString string)
{
    qWarning("QMofFactory::createFromString: operation to be implemented");
    Q_UNUSED(dataType);
    Q_UNUSED(string);

    return 0; // change here to your derived return
}

QString QMofFactory::convertToString(const QMofDataType *dataType, const QMofObject *object)
{
    qWarning("QMofFactory::convertToString: operation to be implemented");
    Q_UNUSED(dataType);
    Q_UNUSED(object);

    return QString(); // change here to your derived return
}

QMofElement *QMofFactory::create(const QMofClass *metaClass)
{
    qWarning("QMofFactory::create: operation to be implemented");
    Q_UNUSED(metaClass);

    return 0; // change here to your derived return
}

QMofElement *QMofFactory::createElement(const QMofClass *class_, QSet<QMofArgument *> arguments)
{
    qWarning("QMofFactory::createElement: operation to be implemented");
    Q_UNUSED(class_);
    Q_UNUSED(arguments);

    return 0; // change here to your derived return
}

QMofLink *QMofFactory::createLink(const QMofAssociation *association, const QMofElement *firstElement, const QMofElement *secondElement)
{
    qWarning("QMofFactory::createLink: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);

    return 0; // change here to your derived return
}

void QMofFactory::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofFactory")][QString::fromLatin1("package")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmoffactory.cpp"

