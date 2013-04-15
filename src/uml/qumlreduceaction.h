/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLREDUCEACTION_H
#define QUMLREDUCEACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlBehavior;
class QUmlOutputPin;

class QUmlReduceActionPrivate;

class Q_UML_EXPORT QUmlReduceAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isOrdered READ isOrdered WRITE setOrdered RESET unsetOrdered)
    Q_PROPERTY(QUmlOutputPin * result READ result WRITE setResult)
    Q_PROPERTY(QUmlInputPin * collection READ collection WRITE setCollection)
    Q_PROPERTY(QUmlBehavior * reducer READ reducer WRITE setReducer)

    Q_DISABLE_COPY(QUmlReduceAction)
    Q_DECLARE_PRIVATE(QUmlReduceAction)

public:
    Q_INVOKABLE explicit QUmlReduceAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlReduceAction();

    // Attributes from QUmlReduceAction
    Q_INVOKABLE bool isOrdered() const;
    Q_INVOKABLE void setOrdered(bool isOrdered);
    Q_INVOKABLE void unsetOrdered();

    // Association ends from QUmlReduceAction
    Q_INVOKABLE QUmlOutputPin *result() const;
    Q_INVOKABLE void setResult(QUmlOutputPin *result);
    Q_INVOKABLE QUmlInputPin *collection() const;
    Q_INVOKABLE void setCollection(QUmlInputPin *collection);
    Q_INVOKABLE QUmlBehavior *reducer() const;
    Q_INVOKABLE void setReducer(QUmlBehavior *reducer);

    virtual void setPropertyData();

protected:
    explicit QUmlReduceAction(QUmlReduceActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLREDUCEACTION_H

