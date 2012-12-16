/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qfactory.h"
#include "qfactory_p.h"

#include <QtMof/QLink>
#include <QtMof/QArgument>
#include <QtMof/QAssociation>
#include <QtMof/QClass>
#include <QtMof/QMofObject>
#include <QtMof/QPackage>
#include <QtMof/QDataType>

QT_BEGIN_NAMESPACE_QTMOF

QFactoryPrivate::QFactoryPrivate() :
    package(0)
{
}

QFactoryPrivate::~QFactoryPrivate()
{
}


QFactory::QFactory(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QFactoryPrivate, parent, wrapper)
{
}

QFactory::QFactory(QFactoryPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
}

QFactory::~QFactory()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QFactory
// ---------------------------------------------------------------

QPackage *QFactory::package() const
{
    // This is a read-write attribute

    Q_D(const QFactory);
    return d->package;
}

void QFactory::setPackage(QPackage *package)
{
    // This is a read-write attribute

    Q_D(QFactory);
    if (d->package != package) {
        d->package = package;
    }
}

QMofObject *QFactory::createFromString(const QDataType *dataType, QString string)
{
    qWarning("QFactory::createFromString: operation to be implemented");
    Q_UNUSED(dataType);
    Q_UNUSED(string);

    return 0; // change here to your derived return
}

QString QFactory::convertToString(const QDataType *dataType, const QMofObject *object)
{
    qWarning("QFactory::convertToString: operation to be implemented");
    Q_UNUSED(dataType);
    Q_UNUSED(object);

    return QString(); // change here to your derived return
}

QElement *QFactory::create(const QClass *metaClass)
{
    qWarning("QFactory::create: operation to be implemented");
    Q_UNUSED(metaClass);

    return 0; // change here to your derived return
}

QElement *QFactory::createElement(const QClass *class_, const QSet<QArgument *> *arguments)
{
    qWarning("QFactory::createElement: operation to be implemented");
    Q_UNUSED(class_);
    Q_UNUSED(arguments);

    return 0; // change here to your derived return
}

QLink *QFactory::createLink(const QAssociation *association, const QElement *firstElement, const QElement *secondElement)
{
    qWarning("QFactory::createLink: operation to be implemented");
    Q_UNUSED(association);
    Q_UNUSED(firstElement);
    Q_UNUSED(secondElement);

    return 0; // change here to your derived return
}

void QFactory::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *>("QT_PREPEND_NAMESPACE_QTMOF(QFactory) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *");
    qRegisterMetaType<QFactory *>("QFactory *");
    qRegisterMetaType<const QSet<QFactory *> *>("const QSet<QFactory *> *");
    qRegisterMetaType<const QList<QFactory *> *>("const QList<QFactory *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QLink) *>("QT_PREPEND_NAMESPACE_QTMOF(QLink) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QLink) *> *");
    qRegisterMetaType<QLink *>("QLink *");
    qRegisterMetaType<const QSet<QLink *> *>("const QSet<QLink *> *");
    qRegisterMetaType<const QList<QLink *> *>("const QList<QLink *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *>("QT_PREPEND_NAMESPACE_QTMOF(QArgument) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *");
    qRegisterMetaType<QArgument *>("QArgument *");
    qRegisterMetaType<const QSet<QArgument *> *>("const QSet<QArgument *> *");
    qRegisterMetaType<const QList<QArgument *> *>("const QList<QArgument *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *>("QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QAssociation) *> *");
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<const QSet<QAssociation *> *>("const QSet<QAssociation *> *");
    qRegisterMetaType<const QList<QAssociation *> *>("const QList<QAssociation *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QClass) *>("QT_PREPEND_NAMESPACE_QTMOF(QClass) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QClass) *> *");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<const QSet<QClass *> *>("const QSet<QClass *> *");
    qRegisterMetaType<const QList<QClass *> *>("const QList<QClass *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *>("QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<const QSet<QMofObject *> *>("const QSet<QMofObject *> *");
    qRegisterMetaType<const QList<QMofObject *> *>("const QList<QMofObject *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QPackage) *>("QT_PREPEND_NAMESPACE_QTMOF(QPackage) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackage) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QPackage) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackage) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QPackage) *> *");
    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<const QSet<QPackage *> *>("const QSet<QPackage *> *");
    qRegisterMetaType<const QList<QPackage *> *>("const QList<QPackage *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QDataType) *>("QT_PREPEND_NAMESPACE_QTMOF(QDataType) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QDataType) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QDataType) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QDataType) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QDataType) *> *");
    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<const QSet<QDataType *> *>("const QSet<QDataType *> *");
    qRegisterMetaType<const QList<QDataType *> *>("const QList<QDataType *> *");


    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qfactory.cpp"

QT_END_NAMESPACE_QTMOF

