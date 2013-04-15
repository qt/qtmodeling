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
#ifndef QUMLCOMBINEDFRAGMENT_H
#define QUMLCOMBINEDFRAGMENT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QUmlInteractionFragment>

// QtUml includes
#include <QtUml/QtUmlNamespace>

// Qt includes
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlGate;
class QUmlInteractionOperand;

class QUmlCombinedFragmentPrivate;

class Q_UML_EXPORT QUmlCombinedFragment : public QUmlInteractionFragment
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QtUml::InteractionOperatorKind interactionOperator READ interactionOperator WRITE setInteractionOperator RESET unsetInteractionOperator)
    Q_PROPERTY(QSet<QUmlGate *> cfragmentGates READ cfragmentGates)
    Q_PROPERTY(QList<QUmlInteractionOperand *> operands READ operands)

    Q_DISABLE_COPY(QUmlCombinedFragment)
    Q_DECLARE_PRIVATE(QUmlCombinedFragment)

public:
    Q_INVOKABLE explicit QUmlCombinedFragment(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlCombinedFragment();

    // Attributes from QUmlCombinedFragment
    Q_INVOKABLE QtUml::InteractionOperatorKind interactionOperator() const;
    Q_INVOKABLE void setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator);
    Q_INVOKABLE void unsetInteractionOperator();

    // Association ends from QUmlCombinedFragment
    Q_INVOKABLE QSet<QUmlGate *> cfragmentGates() const;
    Q_INVOKABLE void addCfragmentGate(QUmlGate *cfragmentGate);
    Q_INVOKABLE void removeCfragmentGate(QUmlGate *cfragmentGate);
    Q_INVOKABLE QList<QUmlInteractionOperand *> operands() const;
    Q_INVOKABLE void addOperand(QUmlInteractionOperand *operand);
    Q_INVOKABLE void removeOperand(QUmlInteractionOperand *operand);

    virtual void setPropertyData();

protected:
    explicit QUmlCombinedFragment(QUmlCombinedFragmentPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLCOMBINEDFRAGMENT_H

