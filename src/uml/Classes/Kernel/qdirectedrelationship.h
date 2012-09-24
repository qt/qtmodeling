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
#ifndef CLASSES_KERNEL_QDIRECTEDRELATIONSHIP_H
#define CLASSES_KERNEL_QDIRECTEDRELATIONSHIP_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QRelationship>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QDirectedRelationshipPrivate;

class QElement;

class Q_UML_EXPORT QDirectedRelationship : public QObject
{
    Q_OBJECT

    Q_PROPERTY(const QList<QElement *> * source READ source)
    Q_PROPERTY(const QList<QElement *> * target READ target)

public:
    explicit QDirectedRelationship(QObject *parent = 0);
    virtual ~QDirectedRelationship();

    // Association-ends (except those derived && !derivedUnion)
    const QList<QElement *> *source() const;
    const QList<QElement *> *target() const;

private:
    Q_DISABLE_COPY(QDirectedRelationship)
    Q_DECLARE_PRIVATE(QDirectedRelationship)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QDirectedRelationship) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QDirectedRelationship) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QDIRECTEDRELATIONSHIP_H

