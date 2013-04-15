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
#ifndef QTUMLNAMESPACE_H
#define QTUMLNAMESPACE_H

#include <QtUml/QtUmlGlobal>

#include <QtCore/QObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

class Q_UML_EXPORT QtUml : public QObject
{
    Q_OBJECT

    Q_ENUMS(AggregationKind)
    Q_ENUMS(CallConcurrencyKind)
    Q_ENUMS(ConnectorKind)
    Q_ENUMS(ExpansionKind)
    Q_ENUMS(InteractionOperatorKind)
    Q_ENUMS(MessageKind)
    Q_ENUMS(MessageSort)
    Q_ENUMS(ObjectNodeOrderingKind)
    Q_ENUMS(ParameterDirectionKind)
    Q_ENUMS(ParameterEffectKind)
    Q_ENUMS(PseudostateKind)
    Q_ENUMS(TransitionKind)
    Q_ENUMS(VisibilityKind)

public:
    enum AggregationKind
    {
        AggregationNone = 0,
        AggregationShared,
        AggregationComposite
    };
    enum CallConcurrencyKind
    {
        CallConcurrencySequential = 0,
        CallConcurrencyGuarded,
        CallConcurrencyConcurrent
    };
    enum ConnectorKind
    {
        ConnectorAssembly = 0,
        ConnectorDelegation
    };
    enum ExpansionKind
    {
        ExpansionParallel = 0,
        ExpansionIterative,
        ExpansionStream
    };
    enum InteractionOperatorKind
    {
        InteractionOperatorSeq = 0,
        InteractionOperatorAlt,
        InteractionOperatorOpt,
        InteractionOperatorBreak,
        InteractionOperatorPar,
        InteractionOperatorStrict,
        InteractionOperatorLoop,
        InteractionOperatorCritical,
        InteractionOperatorNeg,
        InteractionOperatorAssert,
        InteractionOperatorIgnore,
        InteractionOperatorConsider
    };
    enum MessageKind
    {
        MessageComplete = 0,
        MessageLost,
        MessageFound,
        MessageUnknown
    };
    enum MessageSort
    {
        MessageSynchCall = 0,
        MessageAsynchCall,
        MessageAsynchSignal,
        MessageCreateMessage,
        MessageDeleteMessage,
        MessageReply
    };
    enum ObjectNodeOrderingKind
    {
        ObjectNodeOrderingUnordered = 0,
        ObjectNodeOrderingOrdered,
        ObjectNodeOrderingLIFO,
        ObjectNodeOrderingFIFO
    };
    enum ParameterDirectionKind
    {
        ParameterDirectionIn = 0,
        ParameterDirectionInout,
        ParameterDirectionOut,
        ParameterDirectionReturn
    };
    enum ParameterEffectKind
    {
        ParameterEffectCreate = 0,
        ParameterEffectRead,
        ParameterEffectUpdate,
        ParameterEffectDelete
    };
    enum PseudostateKind
    {
        PseudostateInitial = 0,
        PseudostateDeepHistory,
        PseudostateShallowHistory,
        PseudostateJoin,
        PseudostateFork,
        PseudostateJunction,
        PseudostateChoice,
        PseudostateEntryPoint,
        PseudostateExitPoint,
        PseudostateTerminate
    };
    enum TransitionKind
    {
        TransitionInternal = 0,
        TransitionLocal,
        TransitionExternal
    };
    enum VisibilityKind
    {
        VisibilityPublic = 0,
        VisibilityPrivate,
        VisibilityProtected,
        VisibilityPackage
    };

};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QTUMLNAMESPACE_H

