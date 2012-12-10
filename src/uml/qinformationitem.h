/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#ifndef QTUML_QINFORMATIONITEM_H
#define QTUML_QINFORMATIONITEM_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QInformationItemPrivate;

class Q_UML_EXPORT QInformationItem : public QClassifier
{
    Q_OBJECT

    Q_PROPERTY(const QSet<QClassifier *> * represented READ represented)

    Q_DISABLE_COPY(QInformationItem)
    Q_DECLARE_PRIVATE(QInformationItem)

public:
    Q_INVOKABLE explicit QInformationItem(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QInformationItem();

    // Association ends from QInformationItem
    Q_INVOKABLE const QSet<QClassifier *> *represented() const;
    Q_INVOKABLE void addRepresented(QClassifier *represented);
    Q_INVOKABLE void removeRepresented(QClassifier *represented);

protected:
    explicit QInformationItem(QInformationItemPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QInformationItem) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QInformationItem) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QInformationItem) *> *)

QT_END_HEADER

#endif // QTUML_QINFORMATIONITEM_H

