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
#ifndef QUMLSTRUCTUREDCLASSIFIER_H
#define QUMLSTRUCTUREDCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlClassifier>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlProperty;
class QUmlConnector;
class QUmlConnectableElement;

class QUmlStructuredClassifierPrivate;

class Q_UML_EXPORT QUmlStructuredClassifier : public QUmlClassifier
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlConnectableElement *> roles READ roles)
    Q_PROPERTY(QList<QUmlProperty *> ownedAttributes READ ownedAttributes)
    Q_PROPERTY(QSet<QUmlProperty *> parts READ parts STORED false)
    Q_PROPERTY(QSet<QUmlConnector *> ownedConnectors READ ownedConnectors)

    Q_DISABLE_COPY(QUmlStructuredClassifier)
    Q_DECLARE_PRIVATE(QUmlStructuredClassifier)

public:
    Q_INVOKABLE explicit QUmlStructuredClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlStructuredClassifier();

    // Association ends from QUmlStructuredClassifier
    Q_INVOKABLE QSet<QUmlConnectableElement *> roles() const;
    Q_INVOKABLE QList<QUmlProperty *> ownedAttributes() const;
    Q_INVOKABLE void addOwnedAttribute(QUmlProperty *ownedAttribute);
    Q_INVOKABLE void removeOwnedAttribute(QUmlProperty *ownedAttribute);
    Q_INVOKABLE QSet<QUmlProperty *> parts() const;
    Q_INVOKABLE QSet<QUmlConnector *> ownedConnectors() const;
    Q_INVOKABLE void addOwnedConnector(QUmlConnector *ownedConnector);
    Q_INVOKABLE void removeOwnedConnector(QUmlConnector *ownedConnector);

    virtual void setPropertyData();

protected:
    explicit QUmlStructuredClassifier(QUmlStructuredClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTRUCTUREDCLASSIFIER_H

