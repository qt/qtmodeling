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
** rights. These rights are described in the Nokia  LGPL Exception
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
#ifndef QTMOF_QFACTORY_H
#define QTMOF_QFACTORY_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QElement>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QLink;
class QArgument;
class QAssociation;
class QClass;
class QMofObject;
class QPackage;
class QDataType;

class QFactoryPrivate;

class Q_MOF_EXPORT QFactory : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QPackage * package READ package WRITE setPackage)

    Q_DISABLE_COPY(QFactory)
    Q_DECLARE_PRIVATE(QFactory)

public:
    Q_INVOKABLE explicit QFactory(QMofObject *parent = 0, QMofObject *wrapper = 0);
    virtual ~QFactory();

    // Attributes from QFactory
    Q_INVOKABLE QPackage *package() const;
    Q_INVOKABLE void setPackage(QPackage *package);

    // Operations
    Q_INVOKABLE QMofObject *createFromString(const QDataType *dataType, QString string);
    Q_INVOKABLE QString convertToString(const QDataType *dataType, const QMofObject *object);
    Q_INVOKABLE QElement *create(const QClass *metaClass);
    Q_INVOKABLE QElement *createElement(const QClass *class_, const QSet<QArgument *> *arguments);
    Q_INVOKABLE QLink *createLink(const QAssociation *association, const QElement *firstElement, const QElement *secondElement);

protected:
    explicit QFactory(QFactoryPrivate &dd, QMofObject *parent = 0, QMofObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QFactory) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QFactory) *> *)

QT_END_HEADER

#endif // QTMOF_QFACTORY_H

