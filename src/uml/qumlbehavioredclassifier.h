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
#ifndef QUMLBEHAVIOREDCLASSIFIER_H
#define QUMLBEHAVIOREDCLASSIFIER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlClassifier>

// Qt includes
#include <QtCore/QSet>

#include <QtWrappedObjects/QWrappedObjectPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlBehavior;
class QUmlInterfaceRealization;

class QUmlBehavioredClassifierPrivate;

class Q_UML_EXPORT QUmlBehavioredClassifier : public QUmlClassifier
{
    Q_OBJECT

    Q_PROPERTY(QSet<QUmlBehavior *> ownedBehaviors READ ownedBehaviors)
    Q_PROPERTY(QSet<QUmlInterfaceRealization *> interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(QUmlBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)

    Q_DISABLE_COPY(QUmlBehavioredClassifier)
    Q_DECLARE_PRIVATE(QUmlBehavioredClassifier)

public:
    Q_INVOKABLE explicit QUmlBehavioredClassifier(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlBehavioredClassifier();

    // Association ends from QUmlBehavioredClassifier
    Q_INVOKABLE QSet<QUmlBehavior *> ownedBehaviors() const;
    Q_INVOKABLE void addOwnedBehavior(QUmlBehavior *ownedBehavior);
    Q_INVOKABLE void removeOwnedBehavior(QUmlBehavior *ownedBehavior);
    Q_INVOKABLE QSet<QUmlInterfaceRealization *> interfaceRealizations() const;
    Q_INVOKABLE void addInterfaceRealization(QUmlInterfaceRealization *interfaceRealization);
    Q_INVOKABLE void removeInterfaceRealization(QUmlInterfaceRealization *interfaceRealization);
    Q_INVOKABLE QUmlBehavior *classifierBehavior() const;
    Q_INVOKABLE void setClassifierBehavior(QUmlBehavior *classifierBehavior);

    // Overriden methods for subsetted properties
    Q_INVOKABLE void addClientDependency(QWrappedObjectPointer<QUmlInterfaceRealization> interfaceRealization);
    Q_INVOKABLE void removeClientDependency(QWrappedObjectPointer<QUmlInterfaceRealization> interfaceRealization);

    virtual void setPropertyData();

protected:
    explicit QUmlBehavioredClassifier(QUmlBehavioredClassifierPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLBEHAVIOREDCLASSIFIER_H

