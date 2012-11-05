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

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavior;
class QInterfaceRealization;

class QBehavioredClassifierPrivate;

class Q_UML_EXPORT QBehavioredClassifier : public QClassifier
{
    Q_OBJECT

    // From QBehavioredClassifier
    Q_PROPERTY(const QSet<QBehavior *> * ownedBehaviors READ ownedBehaviors)
    Q_PROPERTY(const QSet<QInterfaceRealization *> * interfaceRealizations READ interfaceRealizations)
    Q_PROPERTY(QBehavior * classifierBehavior READ classifierBehavior WRITE setClassifierBehavior)

    Q_DISABLE_COPY(QBehavioredClassifier)
    Q_DECLARE_PRIVATE(QBehavioredClassifier)

public:
    explicit QBehavioredClassifier(QObject *parent = 0);
    virtual ~QBehavioredClassifier();

    // Association ends from QBehavioredClassifier
    const QSet<QBehavior *> *ownedBehaviors() const;
    void addOwnedBehavior(QBehavior *ownedBehavior);
    void removeOwnedBehavior(QBehavior *ownedBehavior);
    const QSet<QInterfaceRealization *> *interfaceRealizations() const;
    void addInterfaceRealization(QInterfaceRealization *interfaceRealization);
    void removeInterfaceRealization(QInterfaceRealization *interfaceRealization);
    QBehavior *classifierBehavior() const;
    void setClassifierBehavior(QBehavior *classifierBehavior);

    // Overriden methods for subsetted properties
    void addClientDependency(QInterfaceRealization *interfaceRealization);
    void removeClientDependency(QInterfaceRealization *interfaceRealization);

protected:
    explicit QBehavioredClassifier(QBehavioredClassifierPrivate &dd, QObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *)
Q_DECLARE_METATYPE(QSet<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QBehavioredClassifier) *> *)

QT_END_HEADER

#endif // QTUML_QBEHAVIOREDCLASSIFIER_H

