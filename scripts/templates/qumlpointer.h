/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** :LGPL
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
** 
**
****************************************************************************/
#ifndef QTUML_QUMLPOINTER_H
#define QTUML_QUMLPOINTER_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QPointer>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

template <class T>
class Q_CORE_EXPORT QUmlPointer : public QPointer<T>
{
public:
    QUmlPointer(T *p = 0) : QPointer<T>(p) { }
    virtual ~QUmlPointer() { }

    template <class U> inline operator U *()
    {
        return qtuml_object_cast<U *>(QPointer<T>::data());
    }
};

QT_END_NAMESPACE_QTUML

QT_END_HEADER

#endif // QTUML_QUMLPOINTER_H

