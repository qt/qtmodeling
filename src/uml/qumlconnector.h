/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLCONNECTOR_H
#define QUMLCONNECTOR_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlconnector_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAssociation;
class QUmlBehavior;
class QUmlConnectorEnd;

class Q_UML_EXPORT QUmlConnector : public QObject, public UmlConnector
{
    Q_OBJECT
    Q_PROPERTY(QSet<QUmlBehavior *> contract READ contract)
    Q_PROPERTY(QList<QUmlConnectorEnd *> end READ end)
    Q_PROPERTY(QtUml::ConnectorKind kind READ kind)
    Q_PROPERTY(QSet<QUmlConnector *> redefinedConnector READ redefinedConnector)
    Q_PROPERTY(QUmlAssociation * type READ type)

public:
    Q_INVOKABLE explicit QUmlConnector(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE const QSet<QUmlBehavior *> contract() const;
    Q_INVOKABLE void addContract(UmlBehavior *contract);
    Q_INVOKABLE void removeContract(UmlBehavior *contract);
    Q_INVOKABLE const QList<QUmlConnectorEnd *> end() const;
    Q_INVOKABLE void addEnd(UmlConnectorEnd *end);
    Q_INVOKABLE void removeEnd(UmlConnectorEnd *end);
    Q_INVOKABLE QtUml::ConnectorKind kind() const;
    Q_INVOKABLE const QSet<QUmlConnector *> redefinedConnector() const;
    Q_INVOKABLE void addRedefinedConnector(UmlConnector *redefinedConnector);
    Q_INVOKABLE void removeRedefinedConnector(UmlConnector *redefinedConnector);
    Q_INVOKABLE QUmlAssociation *type() const;
    Q_INVOKABLE void setType(QUmlAssociation *type);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlConnector *)
Q_DECLARE_METATYPE(QList<QUmlConnector *> *)
Q_DECLARE_METATYPE(QSet<QUmlConnector *> *)

QT_END_HEADER

#endif // QUMLCONNECTOR_H

