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

#include <QtUml/QUmlExecutableNode>


QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class QUmlClassifier;
class QUmlConstraint;
class QUmlInputPin;
class QUmlOutputPin;

class Q_UML_EXPORT QUmlAction : public QUmlExecutableNode
{
public:
    virtual ~QUmlAction();

    // Owned attributes
    QUmlClassifier *context() const;
    Q_DECL_HIDDEN void setContext(QUmlClassifier *context);
    const QList<QUmlInputPin *> input() const;
    Q_DECL_HIDDEN void addInput(QUmlInputPin *input);
    Q_DECL_HIDDEN void removeInput(QUmlInputPin *input);
    bool isLocallyReentrant() const;
    void setLocallyReentrant(bool isLocallyReentrant);
    const QSet<QUmlConstraint *> localPostcondition() const;
    void addLocalPostcondition(QUmlConstraint *localPostcondition);
    void removeLocalPostcondition(QUmlConstraint *localPostcondition);
    const QSet<QUmlConstraint *> localPrecondition() const;
    void addLocalPrecondition(QUmlConstraint *localPrecondition);
    void removeLocalPrecondition(QUmlConstraint *localPrecondition);
    const QList<QUmlOutputPin *> output() const;
    Q_DECL_HIDDEN void addOutput(QUmlOutputPin *output);
    Q_DECL_HIDDEN void removeOutput(QUmlOutputPin *output);

protected:
    explicit QUmlAction();

    QList<QUmlInputPin *> _input;
    bool _isLocallyReentrant;
    QSet<QUmlConstraint *> _localPostcondition;
    QSet<QUmlConstraint *> _localPrecondition;
    QList<QUmlOutputPin *> _output;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QUmlAction) *)

QT_END_HEADER

#endif // QUMLACTION_H

