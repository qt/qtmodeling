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
#ifndef QUMLEXECUTIONSPECIFICATION_H
#define QUMLEXECUTIONSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInteractionFragment>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlOccurrenceSpecification;

class QUmlExecutionSpecificationPrivate;

class Q_UML_EXPORT QUmlExecutionSpecification : public QUmlInteractionFragment
{
    Q_OBJECT

    Q_PROPERTY(QUmlOccurrenceSpecification * start READ start WRITE setStart)
    Q_PROPERTY(QUmlOccurrenceSpecification * finish READ finish WRITE setFinish)

    Q_DISABLE_COPY(QUmlExecutionSpecification)
    Q_DECLARE_PRIVATE(QUmlExecutionSpecification)

public:
    Q_INVOKABLE explicit QUmlExecutionSpecification(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlExecutionSpecification();

    // Association ends from QUmlExecutionSpecification
    Q_INVOKABLE QUmlOccurrenceSpecification *start() const;
    Q_INVOKABLE void setStart(QUmlOccurrenceSpecification *start);
    Q_INVOKABLE QUmlOccurrenceSpecification *finish() const;
    Q_INVOKABLE void setFinish(QUmlOccurrenceSpecification *finish);

    virtual void setPropertyData();

protected:
    explicit QUmlExecutionSpecification(QUmlExecutionSpecificationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLEXECUTIONSPECIFICATION_H

