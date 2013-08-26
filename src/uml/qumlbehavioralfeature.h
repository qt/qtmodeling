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

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlFeature>
#include <QtUml/QtUmlNamespace>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlBehavior;
class QUmlNamedElement;
class QUmlParameter;
class QUmlParameterSet;
class QUmlType;

class Q_UML_EXPORT QUmlBehavioralFeature : public QUmlNamespace, public QUmlFeature
{
public:
    Q_DECL_HIDDEN QUmlBehavioralFeature();

    // Owned attributes
    QtUml::CallConcurrencyKind concurrency() const;
    void setConcurrency(QtUml::CallConcurrencyKind concurrency);
    bool isAbstract() const;
    void setAbstract(bool isAbstract);
    QSet<QUmlBehavior *> method() const;
    void addMethod(QUmlBehavior *method);
    void removeMethod(QUmlBehavior *method);
    QList<QUmlParameter *> ownedParameter() const;
    void addOwnedParameter(QUmlParameter *ownedParameter);
    void removeOwnedParameter(QUmlParameter *ownedParameter);
    QSet<QUmlParameterSet *> ownedParameterSet() const;
    void addOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    void removeOwnedParameterSet(QUmlParameterSet *ownedParameterSet);
    QSet<QUmlType *> raisedException() const;
    void addRaisedException(QUmlType *raisedException);
    void removeRaisedException(QUmlType *raisedException);

    // Operations
    bool isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const;

protected:
    QtUml::CallConcurrencyKind _concurrency;
    bool _isAbstract;
    QSet<QUmlBehavior *> _method;
    QList<QUmlParameter *> _ownedParameter;
    QSet<QUmlParameterSet *> _ownedParameterSet;
    QSet<QUmlType *> _raisedException;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlBehavioralFeature *)
Q_DECLARE_METATYPE(QList<QUmlBehavioralFeature *> *)
Q_DECLARE_METATYPE(QSet<QUmlBehavioralFeature *> *)

QT_END_HEADER

#endif // QUMLBEHAVIORALFEATURE_H

