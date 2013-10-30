/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModeling module of the Qt Toolkit.
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
#ifndef QTMODELING_QMODELINGELEMENT_H
#define QTMODELING_QMODELINGELEMENT_H

#include <QtModeling/QtModelingGlobal>

#include <QtModeling/QModelingObject>

#include <QtCore/QPointer>
#include <QtCore/QStringList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtModeling)

class Q_MODELING_EXPORT QModelingElement
{
public:
    virtual ~QModelingElement()
    {
        if (!deletingFromQModelingObject) {
            if (_qModelingObject)
                _qModelingObject->setProperty("deletingFromModelingObject", true);
            delete _qModelingObject;
        }
    }

    inline QModelingObject *asQModelingObject() { return _qModelingObject; }

    bool deletingFromQModelingObject;

    virtual QModelingElement *clone() const = 0;

protected:
    QModelingElement() : deletingFromQModelingObject(false), _qModelingObject(0) {}
    QPointer<QModelingObject> _qModelingObject;
};

inline QModelingElement *qModelingElement(const QObject * const object)
{
    return object ? object->property("modelingElement").value<QModelingElement *>():0;
}

template<class T>
inline T qmodelingelementproperty_cast(const QObject * const modelingObject)
{
    return modelingObject ? dynamic_cast<T>(qModelingElement(modelingObject)):T();
}

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QModelingElement) *)

QT_END_HEADER

#endif // QTMODELING_QMODELINGELEMENT_H