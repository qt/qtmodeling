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
#ifndef QTUML_QLINKENDDATA_H
#define QTUML_QLINKENDDATA_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QElement>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QLinkEndDataPrivate;
class QProperty;
class QQualifierValue;
class QInputPin;

class Q_UML_EXPORT QLinkEndData : public QObject, public QElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(const QSet<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(QElement * owner READ owner)
    Q_PROPERTY(const QSet<QComment *> * ownedComments READ ownedComments)

    // From QLinkEndData
    Q_PROPERTY(QInputPin * value READ value WRITE setValue)
    Q_PROPERTY(QProperty * end READ end WRITE setEnd)
    Q_PROPERTY(const QSet<QQualifierValue *> * qualifiers READ qualifiers)

    Q_DISABLE_COPY(QLinkEndData)
    Q_DECLARE_PRIVATE(QLinkEndData)

public:
    explicit QLinkEndData(QObject *parent = 0);
    virtual ~QLinkEndData();

    // Association-ends
    QInputPin *value() const;
    void setValue(const QInputPin *value);
    QProperty *end() const;
    void setEnd(const QProperty *end);
    const QSet<QQualifierValue *> *qualifiers() const;
    void addQualifier(const QQualifierValue *qualifier);
    void removeQualifier(const QQualifierValue *qualifier);

protected:
    QLinkEndDataPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndData) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndData) *> *)

QT_END_HEADER

#endif // QTUML_QLINKENDDATA_H

