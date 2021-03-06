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

#include <QtUml/QUmlFeature>

#include <QtUml/QtUmlNamespace>

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlAssociation;
class QUmlBehavior;
class QUmlConnectorEnd;

class Q_UML_EXPORT QUmlConnector : public QUmlFeature
{
public:
    explicit QUmlConnector(bool createQModelingObject = true);
    virtual ~QUmlConnector();

    virtual QModelingElement *clone() const;

    // Owned attributes
    const QSet<QUmlBehavior *> contracts() const;
    void addContract(QUmlBehavior *contract);
    void removeContract(QUmlBehavior *contract);
    const QList<QUmlConnectorEnd *> ends() const;
    void addEnd(QUmlConnectorEnd *end);
    void removeEnd(QUmlConnectorEnd *end);
    QtUml::ConnectorKind kind() const;
    Q_DECL_HIDDEN void setKind(QtUml::ConnectorKind kind);
    const QSet<QUmlConnector *> redefinedConnectors() const;
    void addRedefinedConnector(QUmlConnector *redefinedConnector);
    void removeRedefinedConnector(QUmlConnector *redefinedConnector);
    QUmlAssociation *type() const;
    void setType(QUmlAssociation *type);

protected:
    QSet<QUmlBehavior *> _contracts;
    QList<QUmlConnectorEnd *> _ends;
    QSet<QUmlConnector *> _redefinedConnectors;
    QUmlAssociation *_type;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlConnector) *)

#endif // QUMLCONNECTOR_H

