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

class QLinkEndCreationDataPrivate;
class QInputPin;

class Q_UML_EXPORT QLinkEndCreationData : public QLinkEndData
{
    Q_OBJECT

    // From QLinkEndCreationData
    Q_PROPERTY(bool isReplaceAll READ isReplaceAll WRITE setReplaceAll)
    Q_PROPERTY(QInputPin * insertAt READ insertAt WRITE setInsertAt)

public:
    explicit QLinkEndCreationData(QObject *parent = 0);
    virtual ~QLinkEndCreationData();

    // Attributes (except those derived && !derivedUnion)
    bool isReplaceAll() const;
    void setReplaceAll(bool isReplaceAll);

    // Association-ends (except those derived && !derivedUnion)
    QInputPin *insertAt() const;
    void setInsertAt(QInputPin *insertAt);

private:
    Q_DISABLE_COPY(QLinkEndCreationData)
    Q_DECLARE_PRIVATE(QLinkEndCreationData)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QLinkEndCreationData *>)
Q_DECLARE_METATYPE(QList<QtUml::QLinkEndCreationData *> *)

QT_END_HEADER

#endif // QTUML_QLINKENDCREATIONDATA_H

