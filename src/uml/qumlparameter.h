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

#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlConnectableElement>


#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlOperation;
class QUmlParameterSet;
class QUmlValueSpecification;

class Q_UML_EXPORT QUmlParameter : public QUmlMultiplicityElement, public QUmlConnectableElement
{
public:
    explicit QUmlParameter(bool createQObject = true);
    virtual ~QUmlParameter();

    QModelingObject *clone() const;

    // Owned attributes
    QString default_() const;
    void setDefault(QString default_);
    QUmlValueSpecification *defaultValue() const;
    void setDefaultValue(QUmlValueSpecification *defaultValue);
    QtUml::ParameterDirectionKind direction() const;
    void setDirection(QtUml::ParameterDirectionKind direction);
    QtUml::ParameterEffectKind effect() const;
    void setEffect(QtUml::ParameterEffectKind effect);
    bool isException() const;
    void setException(bool isException);
    bool isStream() const;
    void setStream(bool isStream);
    QUmlOperation *operation() const;
    void setOperation(QUmlOperation *operation);
    const QSet<QUmlParameterSet *> parameterSets() const;
    void addParameterSet(QUmlParameterSet *parameterSet);
    void removeParameterSet(QUmlParameterSet *parameterSet);

protected:
    QUmlValueSpecification *_defaultValue;
    QtUml::ParameterDirectionKind _direction;
    QtUml::ParameterEffectKind _effect;
    bool _isException;
    bool _isStream;
    QUmlOperation *_operation;
    QSet<QUmlParameterSet *> _parameterSets;

    virtual void setClassForProperty();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlParameter) *)

QT_END_HEADER

#endif // QUMLPARAMETER_H

