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
#ifndef QUMLACTION_H
#define QUMLACTION_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>
#include "private/umlaction_p.h"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlConstraint;
class QUmlInputPin;
class QUmlOutputPin;

class Q_UML_EXPORT QUmlAction : public QObject, public UmlAction
{
    Q_OBJECT
    Q_PROPERTY(QUmlClassifier * context READ context)
    Q_PROPERTY(QList<QUmlInputPin *> input READ input)
    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant)
    Q_PROPERTY(QSet<QUmlConstraint *> localPostcondition READ localPostcondition)
    Q_PROPERTY(QSet<QUmlConstraint *> localPrecondition READ localPrecondition)
    Q_PROPERTY(QList<QUmlOutputPin *> output READ output)

public:
    Q_DECL_HIDDEN explicit QUmlAction(QObject *parent = 0);

    // Owned attributes
    Q_INVOKABLE QUmlClassifier *context() const;
    Q_INVOKABLE const QList<QUmlInputPin *> input() const;
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);
    Q_INVOKABLE const QSet<QUmlConstraint *> localPostcondition() const;
    Q_INVOKABLE void addLocalPostcondition(UmlConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(UmlConstraint *localPostcondition);
    Q_INVOKABLE const QSet<QUmlConstraint *> localPrecondition() const;
    Q_INVOKABLE void addLocalPrecondition(UmlConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(UmlConstraint *localPrecondition);
    Q_INVOKABLE const QList<QUmlOutputPin *> output() const;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QUmlAction *)
Q_DECLARE_METATYPE(QList<QUmlAction *> *)
Q_DECLARE_METATYPE(QSet<QUmlAction *> *)

QT_END_HEADER

#endif // QUMLACTION_H

