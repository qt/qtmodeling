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
#ifndef QUMLQUALIFIERVALUE_H
#define QUMLQUALIFIERVALUE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlqualifiervalue_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlInputPin;
class QUmlProperty;

class Q_UML_EXPORT QUmlQualifierValue : public QObject, public UmlQualifierValue
{
    Q_OBJECT
    Q_PROPERTY(QUmlProperty * qualifier READ qualifier)
    Q_PROPERTY(QUmlInputPin * value READ value)

public:
    Q_INVOKABLE explicit QUmlQualifierValue(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlProperty *qualifier() const;
    Q_INVOKABLE void setQualifier(QUmlProperty *qualifier);
    Q_INVOKABLE QUmlInputPin *value() const;
    Q_INVOKABLE void setValue(QUmlInputPin *value);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlQualifierValue *)
Q_DECLARE_METATYPE(QList<QUmlQualifierValue *> *)
Q_DECLARE_METATYPE(QSet<QUmlQualifierValue *> *)

QT_END_HEADER

#endif // QUMLQUALIFIERVALUE_H

