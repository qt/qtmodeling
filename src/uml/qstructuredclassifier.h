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
#ifndef QTUML_QSTRUCTUREDCLASSIFIER_H
#define QTUML_QSTRUCTUREDCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProperty;
class QConnector;
class QConnectableElement;

class QStructuredClassifierPrivate;

class Q_UML_EXPORT QStructuredClassifier : public QClassifier
{
    Q_OBJECT

    Q_PROPERTY(QSet<QConnectableElement *> roles READ roles)
    Q_PROPERTY(QList<QProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QProperty *> parts READ parts STORED false)
    Q_PROPERTY(QSet<QConnector *> ownedConnectors READ ownedConnectors)

    Q_DISABLE_COPY(QStructuredClassifier)
    Q_DECLARE_PRIVATE(QStructuredClassifier)

public:
    Q_INVOKABLE explicit QStructuredClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QStructuredClassifier();

    // Association ends from QStructuredClassifier
    Q_INVOKABLE QSet<QConnectableElement *> roles() const;
    Q_INVOKABLE QList<QProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QProperty *ownedAttribute);
    Q_INVOKABLE QSet<QProperty *> parts() const;
    Q_INVOKABLE QSet<QConnector *> ownedConnectors() const;
    Q_INVOKABLE void addOwnedConnector(QConnector *ownedConnector);
    Q_INVOKABLE void removeOwnedConnector(QConnector *ownedConnector);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QStructuredClassifier(QStructuredClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QSTRUCTUREDCLASSIFIER_H

