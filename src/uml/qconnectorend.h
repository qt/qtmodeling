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
#ifndef QTUML_QCONNECTOREND_H
#define QTUML_QCONNECTOREND_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QMultiplicityElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QConnectorEndPrivate;
class QProperty;
class QConnectableElement;

class Q_UML_EXPORT QConnectorEnd : public QObject, public QMultiplicityElement
{
    Q_OBJECT

    // From QElement
    Q_PROPERTY(QList<QComment *> * ownedComments READ ownedComments)
    Q_PROPERTY(const QList<QElement *> * ownedElements READ ownedElements)
    Q_PROPERTY(const QElement * owner READ owner)

    // From QMultiplicityElement
    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered)
    Q_PROPERTY(bool isUnique READ isUnique WRITE setUnique)
    Q_PROPERTY(qint32 lower READ lower)
    Q_PROPERTY(qint32 upper READ upper)
    Q_PROPERTY(QValueSpecification * lowerValue READ lowerValue WRITE setLowerValue)
    Q_PROPERTY(QValueSpecification * upperValue READ upperValue WRITE setUpperValue)

    // From QConnectorEnd
    Q_PROPERTY(const QProperty * definingEnd READ definingEnd)
    Q_PROPERTY(QProperty * partWithPort READ partWithPort WRITE setPartWithPort)
    Q_PROPERTY(QConnectableElement * role READ role WRITE setRole)

public:
    explicit QConnectorEnd(QObject *parent = 0);
    virtual ~QConnectorEnd();

    // Association-ends (except those derived && !derivedUnion)
    QProperty *partWithPort() const;
    void setPartWithPort(QProperty *partWithPort);
    QConnectableElement *role() const;
    void setRole(QConnectableElement *role);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QProperty *definingEnd() const;

private:
    Q_DISABLE_COPY(QConnectorEnd)
    Q_DECLARE_PRIVATE(QConnectorEnd)
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QtUml::QConnectorEnd *>)
Q_DECLARE_METATYPE(QList<QtUml::QConnectorEnd *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTOREND_H

