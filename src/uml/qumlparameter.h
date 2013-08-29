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
#ifndef QUMLPARAMETER_H
#define QUMLPARAMETER_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlparameter_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlOperation;
class QUmlParameterSet;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlParameter : public QObject, public UmlParameter
{
    Q_OBJECT
    Q_PROPERTY(QString default_ READ default_)
    Q_PROPERTY(QUmlValueSpecification * defaultValue READ defaultValue)
    Q_PROPERTY(QtUml::ParameterDirectionKind direction READ direction)
    Q_PROPERTY(QtUml::ParameterEffectKind effect READ effect)
    Q_PROPERTY(bool isException READ isException)
    Q_PROPERTY(bool isStream READ isStream)
    Q_PROPERTY(QUmlOperation * operation READ operation)
    Q_PROPERTY(QSet<QUmlParameterSet *> parameterSet READ parameterSet)

public:
    Q_INVOKABLE explicit QUmlParameter(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QString default_() const;
    Q_INVOKABLE void setDefault(QString default_);
    Q_INVOKABLE QUmlValueSpecification *defaultValue() const;
    Q_INVOKABLE void setDefaultValue(QUmlValueSpecification *defaultValue);
    Q_INVOKABLE QtUml::ParameterDirectionKind direction() const;
    Q_INVOKABLE void setDirection(QtUml::ParameterDirectionKind direction);
    Q_INVOKABLE QtUml::ParameterEffectKind effect() const;
    Q_INVOKABLE void setEffect(QtUml::ParameterEffectKind effect);
    Q_INVOKABLE bool isException() const;
    Q_INVOKABLE void setException(bool isException);
    Q_INVOKABLE bool isStream() const;
    Q_INVOKABLE void setStream(bool isStream);
    Q_INVOKABLE QUmlOperation *operation() const;
    Q_INVOKABLE void setOperation(QUmlOperation *operation);
    Q_INVOKABLE const QSet<QUmlParameterSet *> parameterSet() const;
    Q_INVOKABLE void addParameterSet(UmlParameterSet *parameterSet);
    Q_INVOKABLE void removeParameterSet(UmlParameterSet *parameterSet);
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlParameter *)
Q_DECLARE_METATYPE(QList<QUmlParameter *> *)
Q_DECLARE_METATYPE(QSet<QUmlParameter *> *)

QT_END_HEADER

#endif // QUMLPARAMETER_H

