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
#ifndef UMLACTION_H
#define UMLACTION_H

#include <QtUml/QtUmlGlobal>

#include "private/umlexecutablenode_p.h"

#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QString>

class UmlClassifier;
class UmlConstraint;
class UmlInputPin;
class UmlOutputPin;

class Q_UML_EXPORT UmlAction : public UmlExecutableNode
{
public:
    Q_DECL_HIDDEN explicit UmlAction();

    // Owned attributes
    UmlClassifier *context() const;
    Q_DECL_HIDDEN void setContext(UmlClassifier *context);
    const QList<UmlInputPin *> input() const;
    Q_DECL_HIDDEN void addInput(UmlInputPin *input);
    Q_DECL_HIDDEN void removeInput(UmlInputPin *input);
    bool isLocallyReentrant() const;
    void setLocallyReentrant(bool isLocallyReentrant);
    const QSet<UmlConstraint *> localPostcondition() const;
    void addLocalPostcondition(UmlConstraint *localPostcondition);
    void removeLocalPostcondition(UmlConstraint *localPostcondition);
    const QSet<UmlConstraint *> localPrecondition() const;
    void addLocalPrecondition(UmlConstraint *localPrecondition);
    void removeLocalPrecondition(UmlConstraint *localPrecondition);
    const QList<UmlOutputPin *> output() const;
    Q_DECL_HIDDEN void addOutput(UmlOutputPin *output);
    Q_DECL_HIDDEN void removeOutput(UmlOutputPin *output);

protected:
    QList<UmlInputPin *> _input;
    bool _isLocallyReentrant;
    QSet<UmlConstraint *> _localPostcondition;
    QSet<UmlConstraint *> _localPrecondition;
    QList<UmlOutputPin *> _output;
};

#endif // UMLACTION_H

