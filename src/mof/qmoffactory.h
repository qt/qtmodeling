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
#ifndef QMOFFACTORY_H
#define QMOFFACTORY_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtMof)

// Forward decls for function parameters
class QMofLink;
class QMofArgument;
class QMofAssociation;
class QMofClass;
class QMofObject;
class QMofPackage;
class QMofDataType;

class QMofFactoryPrivate;

class Q_MOF_EXPORT QMofFactory : public QMofElement
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QMof")

    Q_PROPERTY(QMofPackage * package READ package WRITE setPackage)

    Q_DISABLE_COPY(QMofFactory)
    Q_DECLARE_PRIVATE(QMofFactory)

public:
    Q_INVOKABLE explicit QMofFactory(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QMofFactory();

    // Attributes from QMofFactory
    Q_INVOKABLE QMofPackage *package() const;
    Q_INVOKABLE void setPackage(QMofPackage *package);

    // Operations
    Q_INVOKABLE QMofObject *createFromString(const QMofDataType *dataType, QString string);
    Q_INVOKABLE QString convertToString(const QMofDataType *dataType, const QMofObject *object);
    Q_INVOKABLE QMofElement *create(const QMofClass *metaClass);
    Q_INVOKABLE QMofElement *createElement(const QMofClass *class_, QSet<QMofArgument *> arguments);
    Q_INVOKABLE QMofLink *createLink(const QMofAssociation *association, const QMofElement *firstElement, const QMofElement *secondElement);

    virtual void setPropertyData();

protected:
    explicit QMofFactory(QMofFactoryPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMOFFACTORY_H

