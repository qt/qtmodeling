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
#ifndef QTUML_QACCEPTCALLACTION_H
#define QTUML_QACCEPTCALLACTION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QAcceptEventAction>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

// Forward decls for function parameters
class QOutputPin;

class QAcceptCallActionPrivate;

class Q_UML_EXPORT QAcceptCallAction : public QAcceptEventAction
{
    Q_OBJECT

    Q_PROPERTY(QOutputPin * returnInformation READ returnInformation WRITE setReturnInformation)

    Q_DISABLE_COPY(QAcceptCallAction)
    Q_DECLARE_PRIVATE(QAcceptCallAction)

public:
    Q_INVOKABLE explicit QAcceptCallAction(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QAcceptCallAction();

    // Association ends from QAcceptCallAction
    Q_INVOKABLE QOutputPin *returnInformation() const;
    Q_INVOKABLE void setReturnInformation(QOutputPin *returnInformation);
    virtual void registerMetaTypes() const;

protected:
    explicit QAcceptCallAction(QAcceptCallActionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QACCEPTCALLACTION_H

