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
#ifndef QTMOF_QEXCEPTION_H
#define QTMOF_QEXCEPTION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
using QtWrappedObjects::QWrappedObject;

// Qt includes
#include <QtCore/QString>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QElement;

class QExceptionPrivate;

class Q_MOF_EXPORT QException : public QWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QString description READ description WRITE setDescription)
    Q_PROPERTY(QElement * elementInError READ elementInError WRITE setElementInError)
    Q_PROPERTY(QElement * objectInError READ objectInError WRITE setObjectInError)

    Q_DISABLE_COPY(QException)
    Q_DECLARE_PRIVATE(QException)

public:
    Q_INVOKABLE explicit QException(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QException();

    // Attributes from QException
    Q_INVOKABLE QString description() const;
    Q_INVOKABLE void setDescription(QString description);
    Q_INVOKABLE QElement *elementInError() const;
    Q_INVOKABLE void setElementInError(QElement *elementInError);
    Q_INVOKABLE QElement *objectInError() const;
    Q_INVOKABLE void setObjectInError(QElement *objectInError);

protected:
    explicit QException(QExceptionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QException) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QException) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QException) *> *)

QT_END_HEADER

#endif // QTMOF_QEXCEPTION_H

