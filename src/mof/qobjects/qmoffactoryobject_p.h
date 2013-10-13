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
#ifndef QMOFFACTORYOBJECT_H
#define QMOFFACTORYOBJECT_H

#include <QtMof/QtMofGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

class QMofFactory;
class QModelingObjectPrivate;
class Q_MOF_EXPORT QMofFactoryObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QMofFactoryObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [Factory]
    Q_PROPERTY(QObject * package READ package WRITE setPackage)

public:
    Q_INVOKABLE explicit QMofFactoryObject(QMofFactory *modelingElement);

    // Owned attributes [Factory]
    Q_INVOKABLE QObject *package() const;

    // Operations [Factory]
    Q_INVOKABLE QObject *createFromString(QObject *dataType, QString string);
    Q_INVOKABLE QString convertToString(QObject *dataType, QObject *object);
    Q_INVOKABLE QObject *create(QObject *metaClass);
    Q_INVOKABLE QObject *createElement(QObject *class_, QSet<QObject *> arguments);
    Q_INVOKABLE QObject *createLink(QObject *association, QObject *firstElement, QObject *secondElement);

public Q_SLOTS:

    // Slots for owned attributes [Factory]
    void setPackage(QObject *package = 0);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFFACTORYOBJECT_H

