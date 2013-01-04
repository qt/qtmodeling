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
#ifndef QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H
#define QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QExecutionSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QBehavior;

class QBehaviorExecutionSpecificationPrivate;

class Q_UML_EXPORT QBehaviorExecutionSpecification : public QExecutionSpecification
{
    Q_OBJECT

    Q_PROPERTY(QBehavior * behavior READ behavior WRITE setBehavior)

    Q_DISABLE_COPY(QBehaviorExecutionSpecification)
    Q_DECLARE_PRIVATE(QBehaviorExecutionSpecification)

public:
    Q_INVOKABLE explicit QBehaviorExecutionSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QBehaviorExecutionSpecification();

    // Association ends from QBehaviorExecutionSpecification
    Q_INVOKABLE QBehavior *behavior() const;
    Q_INVOKABLE void setBehavior(QBehavior *behavior);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QBehaviorExecutionSpecification(QBehaviorExecutionSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QBEHAVIOREXECUTIONSPECIFICATION_H

