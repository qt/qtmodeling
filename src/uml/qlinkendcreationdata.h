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
#ifndef QTUML_QLINKENDCREATIONDATA_H
#define QTUML_QLINKENDCREATIONDATA_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QLinkEndData>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QInputPin;

class QLinkEndCreationDataPrivate;

class Q_UML_EXPORT QLinkEndCreationData : public QLinkEndData
{
    Q_OBJECT

    // From QLinkEndCreationData
    Q_PROPERTY(bool isReplaceAll READ isReplaceAll WRITE setReplaceAll)
    Q_PROPERTY(QInputPin * insertAt READ insertAt WRITE setInsertAt)

    Q_DISABLE_COPY(QLinkEndCreationData)
    Q_DECLARE_PRIVATE(QLinkEndCreationData)

public:
    explicit QLinkEndCreationData(QObject *parent = 0);
    virtual ~QLinkEndCreationData();

    // Attributes from QLinkEndCreationData
    bool isReplaceAll() const;
    void setReplaceAll(bool isReplaceAll);

    // Association ends from QLinkEndCreationData
    QInputPin *insertAt() const;
    void setInsertAt(QInputPin *insertAt);

protected:
    explicit QLinkEndCreationData(QLinkEndCreationDataPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *)

QT_END_HEADER

#endif // QTUML_QLINKENDCREATIONDATA_H

