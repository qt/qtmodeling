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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

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
    setPropertyData();
}

QFactory::QFactory(QFactoryPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
    setPropertyData();
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

QElement *QFactory::createElement(const QClass *class_, QSet<QArgument *> arguments)
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
    qRegisterMetaType<QLink *>("QLink *");
    qRegisterMetaType<QSet<QLink *>>("QSet<QLink *>");
    qRegisterMetaType<QList<QLink *>>("QList<QLink *>");

    qRegisterMetaType<QArgument *>("QArgument *");
    qRegisterMetaType<QSet<QArgument *>>("QSet<QArgument *>");
    qRegisterMetaType<QList<QArgument *>>("QList<QArgument *>");

    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");

    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");

    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<QSet<QMofObject *>>("QSet<QMofObject *>");
    qRegisterMetaType<QList<QMofObject *>>("QList<QMofObject *>");

    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QPackage *>");
    qRegisterMetaType<QList<QPackage *>>("QList<QPackage *>");

    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QFactory::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QFactory")][QString::fromLatin1("package")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QFactory")][QString::fromLatin1("package")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");

    QElement::setPropertyData();
}

#include "moc_qfactory.cpp"

QT_END_NAMESPACE_QTMOF

