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
#ifndef QUMLCONNECTOR_H
#define QUMLCONNECTOR_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlFeature>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlAssociation;
class QUmlConnector;
class QUmlBehavior;
class QUmlConnectorEnd;

class QUmlConnectorPrivate;

class Q_UML_EXPORT QUmlConnector : public QUmlFeature
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QtUml::ConnectorKind kind READ kind STORED false)
    Q_PROPERTY(QSet<QUmlConnector *> redefinedConnectors READ redefinedConnectors)
    Q_PROPERTY(QSet<QUmlBehavior *> contracts READ contracts)
    Q_PROPERTY(QUmlAssociation * type READ type WRITE setType)
    Q_PROPERTY(QList<QUmlConnectorEnd *> ends READ ends)

    Q_DISABLE_COPY(QUmlConnector)
    Q_DECLARE_PRIVATE(QUmlConnector)

public:
    Q_INVOKABLE explicit QUmlConnector(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlConnector();

    // Attributes from QUmlConnector
    Q_INVOKABLE QtUml::ConnectorKind kind() const;

    // Association ends from QUmlConnector
    Q_INVOKABLE QSet<QUmlConnector *> redefinedConnectors() const;
    Q_INVOKABLE void addRedefinedConnector(QUmlConnector *redefinedConnector);
    Q_INVOKABLE void removeRedefinedConnector(QUmlConnector *redefinedConnector);
    Q_INVOKABLE QSet<QUmlBehavior *> contracts() const;
    Q_INVOKABLE void addContract(QUmlBehavior *contract);
    Q_INVOKABLE void removeContract(QUmlBehavior *contract);
    Q_INVOKABLE QUmlAssociation *type() const;
    Q_INVOKABLE void setType(QUmlAssociation *type);
    Q_INVOKABLE QList<QUmlConnectorEnd *> ends() const;
    Q_INVOKABLE void addEnd(QUmlConnectorEnd *end);
    Q_INVOKABLE void removeEnd(QUmlConnectorEnd *end);

    virtual void setPropertyData();

protected:
    explicit QUmlConnector(QUmlConnectorPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCONNECTOR_H

