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
#ifndef QTUML_QACTION_H
#define QTUML_QACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QExecutableNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;
class QConstraint;
class QClassifier;
class QInputPin;

class QActionPrivate;

class Q_UML_EXPORT QAction : public QExecutableNode
{
    Q_OBJECT

    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant)
    Q_PROPERTY(QClassifier * context READ context STORED false)
    Q_PROPERTY(const QSet<QConstraint *> * localPostconditions READ localPostconditions)
    Q_PROPERTY(const QSet<QConstraint *> * localPreconditions READ localPreconditions)
    Q_PROPERTY(const QList<QInputPin *> * inputs READ inputs)
    Q_PROPERTY(const QList<QOutputPin *> * outputs READ outputs)

    Q_DISABLE_COPY(QAction)
    Q_DECLARE_PRIVATE(QAction)

public:
    Q_INVOKABLE explicit QAction(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QAction();

    // Attributes from QAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);

    // Association ends from QAction
    Q_INVOKABLE QClassifier *context() const;
    Q_INVOKABLE const QSet<QConstraint *> *localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE const QSet<QConstraint *> *localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE const QList<QInputPin *> *inputs() const;
    Q_INVOKABLE const QList<QOutputPin *> *outputs() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QAction(QActionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTUML(QAction) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTUML(QAction) *> *)

QT_END_HEADER

#endif // QTUML_QACTION_H

