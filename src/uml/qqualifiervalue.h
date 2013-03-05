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
#ifndef QTUML_QQUALIFIERVALUE_H
#define QTUML_QQUALIFIERVALUE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QElement>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

namespace QtUml
{

QT_MODULE(QtUml)

// Forward decls for function parameters
class QProperty;
class QInputPin;

class QQualifierValuePrivate;

class Q_UML_EXPORT QQualifierValue : public QElement
{
    Q_OBJECT

    Q_PROPERTY(QtUml::QInputPin * value READ value WRITE setValue)
    Q_PROPERTY(QtUml::QProperty * qualifier READ qualifier WRITE setQualifier)

    Q_DISABLE_COPY(QQualifierValue)
    Q_DECLARE_PRIVATE(QQualifierValue)

public:
    Q_INVOKABLE explicit QQualifierValue(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QQualifierValue();

    // Association ends from QQualifierValue
    Q_INVOKABLE QInputPin *value() const;
    Q_INVOKABLE void setValue(QInputPin *value);
    Q_INVOKABLE QProperty *qualifier() const;
    Q_INVOKABLE void setQualifier(QProperty *qualifier);

    virtual void setPropertyData();

protected:
    explicit QQualifierValue(QQualifierValuePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUML_QQUALIFIERVALUE_H

