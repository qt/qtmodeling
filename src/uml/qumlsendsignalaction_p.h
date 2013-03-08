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
#ifndef QUMLSENDSIGNALACTION_P_H
#define QUMLSENDSIGNALACTION_P_H

// Base class includes
#include "private/qumlinvocationaction_p.h"

#include "QtUml/QUmlSendSignalAction"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlSignal;
class QUmlInputPin;
class QUmlSendSignalAction;

class Q_UML_EXPORT QUmlSendSignalActionPrivate : public QUmlInvocationActionPrivate
{
    Q_DECLARE_PUBLIC(QUmlSendSignalAction)

public:
    explicit QUmlSendSignalActionPrivate();
    virtual ~QUmlSendSignalActionPrivate();

    QUmlInputPin *target;
    QUmlSignal *signal;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSENDSIGNALACTION_P_H

