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

QT_BEGIN_NAMESPACE

namespace QtUml
{

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

    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant RESET unsetLocallyReentrant)
    Q_PROPERTY(QtUml::QClassifier * context READ context STORED false)
    Q_PROPERTY(QSet<QtUml::QConstraint *> localPostconditions READ localPostconditions)
    Q_PROPERTY(QSet<QtUml::QConstraint *> localPreconditions READ localPreconditions)
    Q_PROPERTY(QList<QtUml::QInputPin *> inputs READ inputs)
    Q_PROPERTY(QList<QtUml::QOutputPin *> outputs READ outputs)

    Q_DISABLE_COPY(QAction)
    Q_DECLARE_PRIVATE(QAction)

public:
    Q_INVOKABLE explicit QAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QAction();

    // Attributes from QAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);
    Q_INVOKABLE void unsetLocallyReentrant();

    // Association ends from QAction
    Q_INVOKABLE QClassifier *context() const;
    Q_INVOKABLE QSet<QConstraint *> localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QConstraint *localPostcondition);
    Q_INVOKABLE QSet<QConstraint *> localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QConstraint *localPrecondition);
    Q_INVOKABLE QList<QInputPin *> inputs() const;
    Q_INVOKABLE QList<QOutputPin *> outputs() const;

    virtual void setPropertyData();

protected:
    explicit QAction(QActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QACTION_H

