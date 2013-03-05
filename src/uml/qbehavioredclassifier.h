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
#ifndef QTUML_QBEHAVIOREDCLASSIFIER_H
#define QTUML_QBEHAVIOREDCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QClassifier>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavior;
class QInterfaceRealization;

class QBehavioredClassifierPrivate;

class Q_UML_EXPORT QBehavioredClassifier : public QClassifier
{
    Q_OBJECT

    Q_PROPERTY(QSet<QtUml::QBehavior *> ownedBehaviors READ ownedBehaviors)
    Q_PROPERTY(QSet<QtUml::QInterfaceRealization *> interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(QtUml::QBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)

    Q_DISABLE_COPY(QBehavioredClassifier)
    Q_DECLARE_PRIVATE(QBehavioredClassifier)

public:
    Q_INVOKABLE explicit QBehavioredClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QBehavioredClassifier();

    // Association ends from QBehavioredClassifier
    Q_INVOKABLE QSet<QBehavior *> ownedBehaviors() const;
    Q_INVOKABLE void addOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE void removeOwnedBehavior(QBehavior *ownedBehavior);
    Q_INVOKABLE QSet<QInterfaceRealization *> interfaceRealizations() const;
    Q_INVOKABLE void addInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE void removeInterfaceRealization(QInterfaceRealization *interfaceRealization);
    Q_INVOKABLE QBehavior *classifierBehavior() const;
    Q_INVOKABLE void setClassifierBehavior(QBehavior *classifierBehavior);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClientDependency(QWrappedObjectPointer<QInterfaceRealization> interfaceRealization);
    Q_INVOKABLE void removeClientDependency(QWrappedObjectPointer<QInterfaceRealization> interfaceRealization);

    virtual void setPropertyData();

protected:
    explicit QBehavioredClassifier(QBehavioredClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QBEHAVIOREDCLASSIFIER_H

