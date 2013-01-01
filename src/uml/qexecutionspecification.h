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
#ifndef QTUML_QEXECUTIONSPECIFICATION_H
#define QTUML_QEXECUTIONSPECIFICATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QInteractionFragment>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOccurrenceSpecification;

class QExecutionSpecificationPrivate;

class Q_UML_EXPORT QExecutionSpecification : public QInteractionFragment
{
    Q_OBJECT

    Q_PROPERTY(QOccurrenceSpecification * start READ start WRITE setStart)
    Q_PROPERTY(QOccurrenceSpecification * finish READ finish WRITE setFinish)

    Q_DISABLE_COPY(QExecutionSpecification)
    Q_DECLARE_PRIVATE(QExecutionSpecification)

public:
    Q_INVOKABLE explicit QExecutionSpecification(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QExecutionSpecification();

    // Association ends from QExecutionSpecification
    Q_INVOKABLE QOccurrenceSpecification *start() const;
    Q_INVOKABLE void setStart(QOccurrenceSpecification *start);
    Q_INVOKABLE QOccurrenceSpecification *finish() const;
    Q_INVOKABLE void setFinish(QOccurrenceSpecification *finish);
    virtual void registerMetaTypes() const;
    virtual void setPropertyData();

protected:
    explicit QExecutionSpecification(QExecutionSpecificationPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QEXECUTIONSPECIFICATION_H

