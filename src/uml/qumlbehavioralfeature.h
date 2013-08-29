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
#ifndef QUMLBEHAVIORALFEATURE_H
#define QUMLBEHAVIORALFEATURE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlbehavioralfeature_p.h"
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlNamedElement;
class QUmlNamespace;
class QUmlParameter;
class QUmlParameterSet;
class QUmlType;

class Q_UML_EXPORT QUmlBehavioralFeature : public QObject, public UmlBehavioralFeature
{
    Q_OBJECT
    Q_PROPERTY(QtUml::CallConcurrencyKind concurrency READ concurrency)
    Q_PROPERTY(bool isAbstract READ isAbstract)
    Q_PROPERTY(QSet<QUmlBehavior *> method READ method)
    Q_PROPERTY(QList<QUmlParameter *> ownedParameter READ ownedParameter)
    Q_PROPERTY(QSet<QUmlParameterSet *> ownedParameterSet READ ownedParameterSet)
    Q_PROPERTY(QSet<QUmlType *> raisedException READ raisedException)

public:
    Q_DECL_HIDDEN explicit QUmlBehavioralFeature(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QtUml::CallConcurrencyKind concurrency() const;
    Q_INVOKABLE void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    Q_INVOKABLE bool isAbstract() const;
    Q_INVOKABLE void setAbstract(bool isAbstract);
    Q_INVOKABLE const QSet<QUmlBehavior *> method() const;
    Q_INVOKABLE void addMethod(UmlBehavior *method);
    Q_INVOKABLE void removeMethod(UmlBehavior *method);
    Q_INVOKABLE const QList<QUmlParameter *> ownedParameter() const;
    Q_INVOKABLE void addOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE void removeOwnedParameter(UmlParameter *ownedParameter);
    Q_INVOKABLE const QSet<QUmlParameterSet *> ownedParameterSet() const;
    Q_INVOKABLE void addOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    Q_INVOKABLE void removeOwnedParameterSet(UmlParameterSet *ownedParameterSet);
    Q_INVOKABLE const QSet<QUmlType *> raisedException() const;
    Q_INVOKABLE void addRaisedException(UmlType *raisedException);
    Q_INVOKABLE void removeRaisedException(UmlType *raisedException);

    // Operations
    Q_INVOKABLE bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlBehavioralFeature *)
Q_DECLARE_METATYPE(QList<QUmlBehavioralFeature *> *)
Q_DECLARE_METATYPE(QSet<QUmlBehavioralFeature *> *)

QT_END_HEADER

#endif // QUMLBEHAVIORALFEATURE_H

