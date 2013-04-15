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
#ifndef QUMLTESTIDENTITYACTION_H
#define QUMLTESTIDENTITYACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlInputPin;
class QUmlOutputPin;

class QUmlTestIdentityActionPrivate;

class Q_UML_EXPORT QUmlTestIdentityAction : public QUmlAction
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QUmlInputPin * second READ second WRITE setSecond)
    Q_PROPERTY(QUmlOutputPin * result READ result WRITE setResult)
    Q_PROPERTY(QUmlInputPin * first READ first WRITE setFirst)

    Q_DISABLE_COPY(QUmlTestIdentityAction)
    Q_DECLARE_PRIVATE(QUmlTestIdentityAction)

public:
    Q_INVOKABLE explicit QUmlTestIdentityAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlTestIdentityAction();

    // Association ends from QUmlTestIdentityAction
    Q_INVOKABLE QUmlInputPin *second() const;
    Q_INVOKABLE void setSecond(QUmlInputPin *second);
    Q_INVOKABLE QUmlOutputPin *result() const;
    Q_INVOKABLE void setResult(QUmlOutputPin *result);
    Q_INVOKABLE QUmlInputPin *first() const;
    Q_INVOKABLE void setFirst(QUmlInputPin *first);

    virtual void setPropertyData();

protected:
    explicit QUmlTestIdentityAction(QUmlTestIdentityActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLTESTIDENTITYACTION_H

