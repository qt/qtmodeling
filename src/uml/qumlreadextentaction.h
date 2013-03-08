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
#ifndef QUMLREADEXTENTACTION_H
#define QUMLREADEXTENTACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlClassifier;
class QUmlOutputPin;

class QUmlReadExtentActionPrivate;

class Q_UML_EXPORT QUmlReadExtentAction : public QUmlAction
{
    Q_OBJECT

    Q_PROPERTY(QUmlClassifier * classifier READ classifier WRITE setClassifier)
    Q_PROPERTY(QUmlOutputPin * result READ result WRITE setResult)

    Q_DISABLE_COPY(QUmlReadExtentAction)
    Q_DECLARE_PRIVATE(QUmlReadExtentAction)

public:
    Q_INVOKABLE explicit QUmlReadExtentAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlReadExtentAction();

    // Association ends from QUmlReadExtentAction
    Q_INVOKABLE QUmlClassifier *classifier() const;
    Q_INVOKABLE void setClassifier(QUmlClassifier *classifier);
    Q_INVOKABLE QUmlOutputPin *result() const;
    Q_INVOKABLE void setResult(QUmlOutputPin *result);

    virtual void setPropertyData();

protected:
    explicit QUmlReadExtentAction(QUmlReadExtentActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLREADEXTENTACTION_H

