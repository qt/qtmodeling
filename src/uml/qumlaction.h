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

// Base class includes
#include <QtUml/QUmlExecutableNode>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlOutputPin;
class QUmlConstraint;
class QUmlClassifier;
class QUmlInputPin;

class QUmlActionPrivate;

class Q_UML_EXPORT QUmlAction : public QUmlExecutableNode
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(bool isLocallyReentrant READ isLocallyReentrant WRITE setLocallyReentrant RESET unsetLocallyReentrant)
    Q_PROPERTY(QUmlClassifier * context READ context STORED false)
    Q_PROPERTY(QSet<QUmlConstraint *> localPostconditions READ localPostconditions)
    Q_PROPERTY(QSet<QUmlConstraint *> localPreconditions READ localPreconditions)
    Q_PROPERTY(QList<QUmlInputPin *> inputs READ inputs)
    Q_PROPERTY(QList<QUmlOutputPin *> outputs READ outputs)

    Q_DISABLE_COPY(QUmlAction)
    Q_DECLARE_PRIVATE(QUmlAction)

public:
    Q_INVOKABLE explicit QUmlAction(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlAction();

    // Attributes from QUmlAction
    Q_INVOKABLE bool isLocallyReentrant() const;
    Q_INVOKABLE void setLocallyReentrant(bool isLocallyReentrant);
    Q_INVOKABLE void unsetLocallyReentrant();

    // Association ends from QUmlAction
    Q_INVOKABLE QUmlClassifier *context() const;
    Q_INVOKABLE QSet<QUmlConstraint *> localPostconditions() const;
    Q_INVOKABLE void addLocalPostcondition(QUmlConstraint *localPostcondition);
    Q_INVOKABLE void removeLocalPostcondition(QUmlConstraint *localPostcondition);
    Q_INVOKABLE QSet<QUmlConstraint *> localPreconditions() const;
    Q_INVOKABLE void addLocalPrecondition(QUmlConstraint *localPrecondition);
    Q_INVOKABLE void removeLocalPrecondition(QUmlConstraint *localPrecondition);
    Q_INVOKABLE QList<QUmlInputPin *> inputs() const;
    Q_INVOKABLE QList<QUmlOutputPin *> outputs() const;

    virtual void setPropertyData();

protected:
    explicit QUmlAction(QUmlActionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLACTION_H

