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
#include <QtUml/QMultiplicityElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProperty;
class QConnectableElement;

class QConnectorEndPrivate;

class Q_UML_EXPORT QConnectorEnd : public QMultiplicityElement
{
    Q_OBJECT

    Q_PROPERTY(QConnectableElement * role READ role WRITE setRole)
    Q_PROPERTY(QProperty * partWithPort READ partWithPort WRITE setPartWithPort)
    Q_PROPERTY(QProperty * definingEnd READ definingEnd STORED false)

    Q_DISABLE_COPY(QConnectorEnd)
    Q_DECLARE_PRIVATE(QConnectorEnd)

public:
    explicit QConnectorEnd(QObject *parent = 0);
    virtual ~QConnectorEnd();

    // Association ends from QConnectorEnd
    QConnectableElement *role() const;
    void setRole(QConnectableElement *role);
    QProperty *partWithPort() const;
    void setPartWithPort(QProperty *partWithPort);
    QProperty *definingEnd() const;

protected:
    explicit QConnectorEnd(QConnectorEndPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QConnectorEnd) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QConnectorEnd) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QConnectorEnd) *> *)

QT_END_HEADER

#endif // QTUML_QCONNECTOREND_H

