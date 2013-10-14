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
#include "qtumlnamespace.h"

QT_BEGIN_NAMESPACE

/*!
    \enum QtUml::AggregationKind

    AggregationKind is an enumeration type that specifies the literals for defining the kind of aggregation of a property.

    \value AggregationKindNone Indicates that the property has no aggregation.
    \value AggregationKindShared Indicates that the property has a shared aggregation.
    \value AggregationKindComposite Indicates that the property is aggregated compositely, i.e., the composite object has responsibility for the existence and storage of the composed objects (parts). */

/*!
    \enum QtUml::CallConcurrencyKind

    CallConcurrencyKind is an enumeration type.

    \value CallConcurrencyKindSequential No concurrency management mechanism is associated with the operation and, therefore, concurrency conflicts may occur. Instances that invoke a behavioral feature need to coordinate so that only one invocation to a target on any behavioral feature occurs at once.
    \value CallConcurrencyKindGuarded Multiple invocations of a behavioral feature may occur simultaneously to one instance, but only one is allowed to commence. The others are blocked until the performance of the currently executing behavioral feature is complete. It is the responsibility of the system designer to ensure that deadlocks do not occur due to simultaneous blocks.
    \value CallConcurrencyKindConcurrent Multiple invocations of a behavioral feature may occur simultaneously to one instance and all of them may proceed concurrently. */

/*!
    \enum QtUml::ConnectorKind

    ConnectorKind is an enumeration type.

    \value ConnectorKindAssembly Indicates that the connector is an assembly connector.
    \value ConnectorKindDelegation Indicates that the connector is a delegation connector. */

/*!
    \enum QtUml::ExpansionKind

    ExpansionKind is an enumeration type used to specify how multiple executions of an expansion region interact.

    \value ExpansionKindParallel The executions are independent. They may be executed concurrently.
    \value ExpansionKindIterative The executions are dependent and must be executed one at a time, in order of the collection elements.
    \value ExpansionKindStream A stream of collection elements flows into a single execution, in order of the collection elements. */

/*!
    \enum QtUml::InteractionOperatorKind

    InteractionOperatorKind is an enumeration designating the different kinds of operators of combined fragments. The interaction operand defines the type of operator of a combined fragment.

    \value InteractionOperatorKindSeq The interactionOperator seq designates that the CombinedFragment represents a weak sequencing between the behaviors of the operands.
    \value InteractionOperatorKindAlt The interactionOperator alt designates that the CombinedFragment represents a choice of behavior. At most one of the operands will be chosen. The chosen operand must have an explicit or implicit guard expression that evaluates to true at this point in the interaction. An implicit true guard is implied if the operand has no guard.
    \value InteractionOperatorKindOpt The interactionOperator opt designates that the CombinedFragment represents a choice of behavior where either the (sole) operand happens or nothing happens. An option is semantically equivalent to an alternative CombinedFragment where there is one operand with non-empty content and the second operand is empty.
    \value InteractionOperatorKindBreak The interactionOperator break designates that the CombinedFragment represents a breaking scenario in the sense that the operand is a scenario that is performed instead of the remainder of the enclosing InteractionFragment. A break operator with a guard is chosen when the guard is true and the rest of the enclosing Interaction Fragment is ignored. When the guard of the break operand is false, the break operand is ignored and the rest of the enclosing InteractionFragment is chosen. The choice between a break operand without a guard and the rest of the enclosing InteractionFragment is done non-deterministically.
    \value InteractionOperatorKindPar The interactionOperator par designates that the CombinedFragment represents a parallel merge between the behaviors of the operands. The OccurrenceSpecifications of the different operands can be interleaved in any way as long as the ordering imposed by each operand as such is preserved.
    \value InteractionOperatorKindStrict The interactionOperator strict designates that the CombinedFragment represents a strict sequencing between the behaviors of the operands. The semantics of strict sequencing defines a strict ordering of the operands on the first level within the CombinedFragment with interactionOperator strict. Therefore OccurrenceSpecifications within contained CombinedFragment will not directly be compared with other OccurrenceSpecifications of the enclosing CombinedFragment.
    \value InteractionOperatorKindLoop The interactionOperator loop designates that the CombinedFragment represents a loop. The loop operand will be repeated a number of times.
    \value InteractionOperatorKindCritical The interactionOperator critical designates that the CombinedFragment represents a critical region. A critical region means that the traces of the region cannot be interleaved by other OccurrenceSpecifications (on those Lifelines covered by the region). This means that the region is treated atomically by the enclosing fragment when determining the set of valid traces. Even though enclosing CombinedFragments may imply that some OccurrenceSpecifications may interleave into the region, such as e.g. with par-operator, this is prevented by defining a region.
    \value InteractionOperatorKindNeg The interactionOperator neg designates that the CombinedFragment represents traces that are defined to be invalid.
    \value InteractionOperatorKindAssert The interactionOperator assert designates that the CombinedFragment represents an assertion. The sequences of the operand of the assertion are the only valid continuations. All other continuations result in an invalid trace.
    \value InteractionOperatorKindIgnore The interacionOperator ignore designates that there are some message types that are not shown within this combined fragment. These message types can be considered insignificant and are implicitly ignored if they appear in a corresponding execution. Alternatively, one can understand ignore to mean that the message types that are ignored can appear anywhere in the traces.
    \value InteractionOperatorKindConsider The interactionOperator consider designates which messages should be considered within this combined fragment. This is equivalent to defining every other message to be ignored. */

/*!
    \enum QtUml::MessageKind

    This is an enumerated type that identifies the type of message.

    \value MessageKindComplete sendEvent and receiveEvent are present
    \value MessageKindLost sendEvent present and receiveEvent absent
    \value MessageKindFound sendEvent absent and receiveEvent present
    \value MessageKindUnknown sendEvent and receiveEvent absent (should not appear) */

/*!
    \enum QtUml::MessageSort

    This is an enumerated type that identifies the type of communication action that was used to generate the message.

    \value MessageSortSynchCall The message was generated by a synchronous call to an operation.
    \value MessageSortAsynchCall The message was generated by an asynchronous call to an operation; i.e., a CallAction with isSynchronous = false.
    \value MessageSortAsynchSignal The message was generated by an asynchronous send action.
    \value MessageSortCreateMessage The message designating the creation of another lifeline object.
    \value MessageSortDeleteMessage The message designating the termination of another lifeline.
    \value MessageSortReply The message is a reply message to an operation call. */

/*!
    \enum QtUml::ObjectNodeOrderingKind

    ObjectNodeOrderingKind is an enumeration indicating queuing order within a node.

    \value ObjectNodeOrderingKindUnordered Indicates that object node tokens are unordered.
    \value ObjectNodeOrderingKindOrdered Indicates that object node tokens are ordered.
    \value ObjectNodeOrderingKindLIFO Indicates that object node tokens are queued in a last in, first out manner.
    \value ObjectNodeOrderingKindFIFO Indicates that object node tokens are queued in a first in, first out manner. */

/*!
    \enum QtUml::ParameterDirectionKind

    Parameter direction kind is an enumeration type that defines literals used to specify direction of parameters.

    \value ParameterDirectionKindIn Indicates that parameter values are passed into the behavioral element by the caller.
    \value ParameterDirectionKindInout Indicates that parameter values are passed into a behavioral element by the caller and then back out to the caller from the behavioral element.
    \value ParameterDirectionKindOut Indicates that parameter values are passed from a behavioral element out to the caller.
    \value ParameterDirectionKindReturn Indicates that parameter values are passed as return values from a behavioral element back to the caller. */

/*!
    \enum QtUml::ParameterEffectKind

    The datatype ParameterEffectKind is an enumeration that indicates the effect of a behavior on values passed in or out of its parameters.

    \value ParameterEffectKindCreate Indicates that the behavior creates values.
    \value ParameterEffectKindRead Indicates that the behavior reads values.
    \value ParameterEffectKindUpdate Indicates that the behavior updates values.
    \value ParameterEffectKindDelete Indicates that the behavior deletes values. */

/*!
    \enum QtUml::PseudostateKind

    PseudostateKind is an enumeration type.

    \value PseudostateKindInitial An initial pseudostate represents a default vertex that is the source for a single transition to the default state of a composite state. There can be at most one initial vertex in a region. The outgoing transition from the initial vertex may have a behavior, but not a trigger or guard.
    \value PseudostateKindDeepHistory DeepHistory represents the most recent active configuration of the composite state that directly contains this pseudostate; e.g. the state configuration that was active when the composite state was last exited. A composite state can have at most one deep history vertex. At most one transition may originate from the history connector to the default deep history state. This transition is taken in case the composite state had never been active before. Entry actions of states entered on the path to the state represented by a deep history are performed.
    \value PseudostateKindShallowHistory ShallowHistory represents the most recent active substate of its containing state (but not the substates of that substate). A composite state can have at most one shallow history vertex. A transition coming into the shallow history vertex is equivalent to a transition coming into the most recent active substate of a state. At most one transition may originate from the history connector to the default shallow history state. This transition is taken in case the composite state had never been active before. Entry actions of states entered on the path to the state represented by a shallow history are performed.
    \value PseudostateKindJoin Join vertices serve to merge several transitions emanating from source vertices in different orthogonal regions. The transitions entering a join vertex cannot have guards or triggers.
    \value PseudostateKindFork Fork vertices serve to split an incoming transition into two or more transitions terminating on orthogonal target vertices (i.e. vertices in different regions of a composite state). The segments outgoing from a fork vertex must not have guards or triggers.
    \value PseudostateKindJunction Junction vertices are semantic-free vertices that are used to chain together multiple transitions. They are used to construct compound transition paths between states. For example, a junction can be used to converge multiple incoming transitions into a single outgoing transition representing a shared transition path (this is known as an merge). Conversely, they can be used to split an incoming transition into multiple outgoing transition segments with different guard conditions. This realizes a static conditional branch. (In the latter case, outgoing transitions whose guard conditions evaluate to false are disabled. A predefined guard denoted 'else' may be defined for at most one outgoing transition. This transition is enabled if all the guards labeling the other transitions are false.) Static conditional branches are distinct from dynamic conditional branches that are realized by choice vertices (described below).
    \value PseudostateKindChoice Choice vertices which, when reached, result in the dynamic evaluation of the guards of the triggers of its outgoing transitions. This realizes a dynamic conditional branch. It allows splitting of transitions into multiple outgoing paths such that the decision on which path to take may be a function of the results of prior actions performed in the same run-tocompletion step. If more than one of the guards evaluates to true, an arbitrary one is selected. If none of the guards evaluates to true, then the model is considered ill-formed. (To avoid this, it is recommended to define one outgoing transition with the predefined else guard for every choice vertex.) Choice vertices should be distinguished from static branch points that are based on junction points (described above).
    \value PseudostateKindEntryPoint An entry point pseudostate is an entry point of a state machine or composite state. In each region of the state machine or composite state it has a single transition to a vertex within the same region.
    \value PseudostateKindExitPoint An exit point pseudostate is an exit point of a state machine or composite state. Entering an exit point within any region of the composite state or state machine referenced by a submachine state implies the exit of this composite state or submachine state and the triggering of the transition that has this exit point as source in the state machine enclosing the submachine or composite state.
    \value PseudostateKindTerminate Entering a terminate pseudostate implies that the execution of this state machine by means of its context object is terminated. The state machine does not exit any states nor does it perform any exit actions other than those associated with the transition leading to the terminate pseudostate. Entering a terminate pseudostate is equivalent to invoking a DestroyObjectAction. */

/*!
    \enum QtUml::TransitionKind

    TransitionKind is an enumeration type.

    \value TransitionKindInternal Implies that the transition, if triggered, occurs without exiting or entering the source state. Thus, it does not cause a state change. This means that the entry or exit condition of the source state will not be invoked. An internal transition can be taken even if the state machine is in one or more regions nested within this state.
    \value TransitionKindLocal Implies that the transition, if triggered, will not exit the composite (source) state, but it will apply to any state within the composite state, and these will be exited and entered.
    \value TransitionKindExternal Implies that the transition, if triggered, will exit the composite (source) state. */

/*!
    \enum QtUml::VisibilityKind

    VisibilityKind is an enumeration type that defines literals to determine the visibility of elements in a model.

    \value VisibilityKindPublic A public element is visible to all elements that can access the contents of the namespace that owns it.
    \value VisibilityKindPrivate A private element is only visible inside the namespace that owns it.
    \value VisibilityKindProtected A protected element is visible to elements that have a generalization relationship to the namespace that owns it.
    \value VisibilityKindPackage A package element is owned by a namespace that is not a package, and is visible to elements that are in the same package as its owning namespace. Only named elements that are not owned by packages can be marked as having package visibility. Any element marked as having package visibility is visible to all elements within the nearest enclosing package (given that other owning elements have proper visibility). Outside the nearest enclosing package, an element marked as having package visibility is not visible. */
QT_END_NAMESPACE

