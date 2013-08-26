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
        AggregationKindNone = 0,
        AggregationKindShared,
        AggregationKindComposite
    };
    enum CallConcurrencyKind
    {
        CallConcurrencyKindNone = 0,
        CallConcurrencyKindSequential,
        CallConcurrencyKindGuarded,
        CallConcurrencyKindConcurrent
    };
    enum ConnectorKind
    {
        ConnectorKindNone = 0,
        ConnectorKindAssembly,
        ConnectorKindDelegation
    };
    enum ExpansionKind
    {
        ExpansionKindNone = 0,
        ExpansionKindParallel,
        ExpansionKindIterative,
        ExpansionKindStream
    };
    enum InteractionOperatorKind
    {
        InteractionOperatorKindNone = 0,
        InteractionOperatorKindSeq,
        InteractionOperatorKindAlt,
        InteractionOperatorKindOpt,
        InteractionOperatorKindBreak,
        InteractionOperatorKindPar,
        InteractionOperatorKindStrict,
        InteractionOperatorKindLoop,
        InteractionOperatorKindCritical,
        InteractionOperatorKindNeg,
        InteractionOperatorKindAssert,
        InteractionOperatorKindIgnore,
        InteractionOperatorKindConsider
    };
    enum MessageKind
    {
        MessageKindNone = 0,
        MessageKindComplete,
        MessageKindLost,
        MessageKindFound,
        MessageKindUnknown
    };
    enum MessageSort
    {
        MessageSortNone = 0,
        MessageSortSynchCall,
        MessageSortAsynchCall,
        MessageSortAsynchSignal,
        MessageSortCreateMessage,
        MessageSortDeleteMessage,
        MessageSortReply
    };
    enum ObjectNodeOrderingKind
    {
        ObjectNodeOrderingKindNone = 0,
        ObjectNodeOrderingKindUnordered,
        ObjectNodeOrderingKindOrdered,
        ObjectNodeOrderingKindLIFO,
        ObjectNodeOrderingKindFIFO
    };
    enum ParameterDirectionKind
    {
        ParameterDirectionKindNone = 0,
        ParameterDirectionKindIn,
        ParameterDirectionKindInout,
        ParameterDirectionKindOut,
        ParameterDirectionKindReturn
    };
    enum ParameterEffectKind
    {
        ParameterEffectKindNone = 0,
        ParameterEffectKindCreate,
        ParameterEffectKindRead,
        ParameterEffectKindUpdate,
        ParameterEffectKindDelete
    };
    enum PseudostateKind
    {
        PseudostateKindNone = 0,
        PseudostateKindInitial,
        PseudostateKindDeepHistory,
        PseudostateKindShallowHistory,
        PseudostateKindJoin,
        PseudostateKindFork,
        PseudostateKindJunction,
        PseudostateKindChoice,
        PseudostateKindEntryPoint,
        PseudostateKindExitPoint,
        PseudostateKindTerminate
    };
    enum TransitionKind
    {
        TransitionKindNone = 0,
        TransitionKindInternal,
        TransitionKindLocal,
        TransitionKindExternal
    };
    enum VisibilityKind
    {
        VisibilityKindNone = 0,
        VisibilityKindPublic,
        VisibilityKindPrivate,
        VisibilityKindProtected,
        VisibilityKindPackage
    };
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QtUml::AggregationKind)
Q_DECLARE_METATYPE(QtUml::CallConcurrencyKind)
Q_DECLARE_METATYPE(QtUml::ConnectorKind)
Q_DECLARE_METATYPE(QtUml::ExpansionKind)
Q_DECLARE_METATYPE(QtUml::InteractionOperatorKind)
Q_DECLARE_METATYPE(QtUml::MessageKind)
Q_DECLARE_METATYPE(QtUml::MessageSort)
Q_DECLARE_METATYPE(QtUml::ObjectNodeOrderingKind)
Q_DECLARE_METATYPE(QtUml::ParameterDirectionKind)
Q_DECLARE_METATYPE(QtUml::ParameterEffectKind)
Q_DECLARE_METATYPE(QtUml::PseudostateKind)
Q_DECLARE_METATYPE(QtUml::TransitionKind)
Q_DECLARE_METATYPE(QtUml::VisibilityKind)

QT_END_HEADER

#endif // QTUMLNAMESPACE_H

