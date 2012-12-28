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
#ifndef QTMOF_QSLOT_H
#define QTMOF_QSLOT_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QElement>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QStructuralFeature;
class QInstanceSpecification;
class QValueSpecification;

class QSlotPrivate;

class Q_MOF_EXPORT QSlot : public QElement
{
    Q_OBJECT

    Q_PROPERTY(const QList<QValueSpecification *> * values READ values)
    Q_PROPERTY(QStructuralFeature * definingFeature READ definingFeature WRITE setDefiningFeature)
    Q_PROPERTY(QInstanceSpecification * owningInstance READ owningInstance WRITE setOwningInstance)

    Q_DISABLE_COPY(QSlot)
    Q_DECLARE_PRIVATE(QSlot)

public:
    Q_INVOKABLE explicit QSlot(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QSlot();

    // Association ends from QSlot
    Q_INVOKABLE const QList<QValueSpecification *> *values() const;
    Q_INVOKABLE void addValue(QValueSpecification *value);
    Q_INVOKABLE void removeValue(QValueSpecification *value);
    Q_INVOKABLE QStructuralFeature *definingFeature() const;
    Q_INVOKABLE void setDefiningFeature(QStructuralFeature *definingFeature);
    Q_INVOKABLE QInstanceSpecification *owningInstance() const;
    Q_INVOKABLE void setOwningInstance(QInstanceSpecification *owningInstance);
    virtual void registerMetaTypes() const;

protected:
    explicit QSlot(QSlotPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QSlot) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QSlot) *> *)

QT_END_HEADER

#endif // QTMOF_QSLOT_H
