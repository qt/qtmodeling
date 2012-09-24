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
#ifndef CLASSES_KERNEL_QBEHAVIORALFEATURE_H
#define CLASSES_KERNEL_QBEHAVIORALFEATURE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QFeature>
#include <QtUml/QNamespace>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QBehavioralFeaturePrivate;

class QParameter;
class QType;
class QNamedElement;

class Q_UML_EXPORT QBehavioralFeature : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QList<QParameter *> * ownedParameter READ ownedParameter)
    Q_PROPERTY(QList<QType *> * raisedException READ raisedException)

public:
    explicit QBehavioralFeature(QObject *parent = 0);
    virtual ~QBehavioralFeature();

    // Association-ends (except those derived && !derivedUnion)
    QList<QParameter *> *ownedParameter() const;
    QList<QType *> *raisedException() const;

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    bool isDistinguishableFrom(QNamedElement *n, QNamespace *ns) const;

private:
    Q_DISABLE_COPY(QBehavioralFeature)
    Q_DECLARE_PRIVATE(QBehavioralFeature)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QBehavioralFeature) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QBehavioralFeature) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QBEHAVIORALFEATURE_H

