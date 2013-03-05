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
#ifndef QTUML_QCONNECTOR_H
#define QTUML_QCONNECTOR_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QFeature>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QAssociation;
class QBehavior;
class QConnectorEnd;

class QConnectorPrivate;

class Q_UML_EXPORT QConnector : public QFeature
{
    Q_OBJECT

    Q_PROPERTY(QtUmlNS::ConnectorKind kind READ kind STORED false)
    Q_PROPERTY(QSet<QtUml::QConnector *> redefinedConnectors READ redefinedConnectors)
    Q_PROPERTY(QSet<QtUml::QBehavior *> contracts READ contracts)
    Q_PROPERTY(QtUml::QAssociation * type READ type WRITE setType)
    Q_PROPERTY(QList<QtUml::QConnectorEnd *> ends READ ends)

    Q_DISABLE_COPY(QConnector)
    Q_DECLARE_PRIVATE(QConnector)

public:
    Q_INVOKABLE explicit QConnector(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QConnector();

    // Attributes from QConnector
    Q_INVOKABLE QtUmlNS::ConnectorKind kind() const;

    // Association ends from QConnector
    Q_INVOKABLE QSet<QConnector *> redefinedConnectors() const;
    Q_INVOKABLE void addRedefinedConnector(QConnector *redefinedConnector);
    Q_INVOKABLE void removeRedefinedConnector(QConnector *redefinedConnector);
    Q_INVOKABLE QSet<QBehavior *> contracts() const;
    Q_INVOKABLE void addContract(QBehavior *contract);
    Q_INVOKABLE void removeContract(QBehavior *contract);
    Q_INVOKABLE QAssociation *type() const;
    Q_INVOKABLE void setType(QAssociation *type);
    Q_INVOKABLE QList<QConnectorEnd *> ends() const;
    Q_INVOKABLE void addEnd(QConnectorEnd *end);
    Q_INVOKABLE void removeEnd(QConnectorEnd *end);

    virtual void setPropertyData();

protected:
    explicit QConnector(QConnectorPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QCONNECTOR_H

