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
#include "qumlmetamodelplugin.h"

#include <QtModeling/QModelingElement>

#include <QtUml/QtUml>

QUmlMetaModelPlugin::QUmlMetaModelPlugin(QObject *parent)
    : QMetaModelPlugin(parent)
{
}

QModelingElement *QUmlMetaModelPlugin::createModelingElement(QString type)
{
    if (type == "QUmlAbstraction") return new QUmlAbstraction;
    if (type == "QUmlAcceptCallAction") return new QUmlAcceptCallAction;
    if (type == "QUmlAcceptEventAction") return new QUmlAcceptEventAction;
    if (type == "QUmlActionExecutionSpecification") return new QUmlActionExecutionSpecification;
    if (type == "QUmlActionInputPin") return new QUmlActionInputPin;
    if (type == "QUmlActivityFinalNode") return new QUmlActivityFinalNode;
    if (type == "QUmlActivity") return new QUmlActivity;
    if (type == "QUmlActivityParameterNode") return new QUmlActivityParameterNode;
    if (type == "QUmlActivityPartition") return new QUmlActivityPartition;
    if (type == "QUmlActor") return new QUmlActor;
    if (type == "QUmlAddStructuralFeatureValueAction") return new QUmlAddStructuralFeatureValueAction;
    if (type == "QUmlAddVariableValueAction") return new QUmlAddVariableValueAction;
    if (type == "QUmlAnyReceiveEvent") return new QUmlAnyReceiveEvent;
    if (type == "QUmlArtifact") return new QUmlArtifact;
    if (type == "QUmlAssociationClass") return new QUmlAssociationClass;
    if (type == "QUmlAssociation") return new QUmlAssociation;
    if (type == "QUmlBehaviorExecutionSpecification") return new QUmlBehaviorExecutionSpecification;
    if (type == "QUmlBroadcastSignalAction") return new QUmlBroadcastSignalAction;
    if (type == "QUmlCallBehaviorAction") return new QUmlCallBehaviorAction;
    if (type == "QUmlCallEvent") return new QUmlCallEvent;
    if (type == "QUmlCallOperationAction") return new QUmlCallOperationAction;
    if (type == "QUmlCentralBufferNode") return new QUmlCentralBufferNode;
    if (type == "QUmlChangeEvent") return new QUmlChangeEvent;
    if (type == "QUmlClass") return new QUmlClass;
    if (type == "QUmlClassifierTemplateParameter") return new QUmlClassifierTemplateParameter;
    if (type == "QUmlClause") return new QUmlClause;
    if (type == "QUmlClearAssociationAction") return new QUmlClearAssociationAction;
    if (type == "QUmlClearStructuralFeatureAction") return new QUmlClearStructuralFeatureAction;
    if (type == "QUmlClearVariableAction") return new QUmlClearVariableAction;
    if (type == "QUmlCollaboration") return new QUmlCollaboration;
    if (type == "QUmlCollaborationUse") return new QUmlCollaborationUse;
    if (type == "QUmlCombinedFragment") return new QUmlCombinedFragment;
    if (type == "QUmlComment") return new QUmlComment;
    if (type == "QUmlCommunicationPath") return new QUmlCommunicationPath;
    if (type == "QUmlComponent") return new QUmlComponent;
    if (type == "QUmlComponentRealization") return new QUmlComponentRealization;
    if (type == "QUmlConditionalNode") return new QUmlConditionalNode;
    if (type == "QUmlConnectableElementTemplateParameter") return new QUmlConnectableElementTemplateParameter;
    if (type == "QUmlConnectionPointReference") return new QUmlConnectionPointReference;
    if (type == "QUmlConnectorEnd") return new QUmlConnectorEnd;
    if (type == "QUmlConnector") return new QUmlConnector;
    if (type == "QUmlConsiderIgnoreFragment") return new QUmlConsiderIgnoreFragment;
    if (type == "QUmlConstraint") return new QUmlConstraint;
    if (type == "QUmlContinuation") return new QUmlContinuation;
    if (type == "QUmlControlFlow") return new QUmlControlFlow;
    if (type == "QUmlCreateLinkAction") return new QUmlCreateLinkAction;
    if (type == "QUmlCreateLinkObjectAction") return new QUmlCreateLinkObjectAction;
    if (type == "QUmlCreateObjectAction") return new QUmlCreateObjectAction;
    if (type == "QUmlDataStoreNode") return new QUmlDataStoreNode;
    if (type == "QUmlDataType") return new QUmlDataType;
    if (type == "QUmlDecisionNode") return new QUmlDecisionNode;
    if (type == "QUmlDependency") return new QUmlDependency;
    if (type == "QUmlDeployment") return new QUmlDeployment;
    if (type == "QUmlDeploymentSpecification") return new QUmlDeploymentSpecification;
    if (type == "QUmlDestroyLinkAction") return new QUmlDestroyLinkAction;
    if (type == "QUmlDestroyObjectAction") return new QUmlDestroyObjectAction;
    if (type == "QUmlDestructionOccurrenceSpecification") return new QUmlDestructionOccurrenceSpecification;
    if (type == "QUmlDevice") return new QUmlDevice;
    if (type == "QUmlDurationConstraint") return new QUmlDurationConstraint;
    if (type == "QUmlDuration") return new QUmlDuration;
    if (type == "QUmlDurationInterval") return new QUmlDurationInterval;
    if (type == "QUmlDurationObservation") return new QUmlDurationObservation;
    if (type == "QUmlElementImport") return new QUmlElementImport;
    if (type == "QUmlEnumeration") return new QUmlEnumeration;
    if (type == "QUmlEnumerationLiteral") return new QUmlEnumerationLiteral;
    if (type == "QUmlExceptionHandler") return new QUmlExceptionHandler;
    if (type == "QUmlExecutionEnvironment") return new QUmlExecutionEnvironment;
    if (type == "QUmlExecutionOccurrenceSpecification") return new QUmlExecutionOccurrenceSpecification;
    if (type == "QUmlExpansionNode") return new QUmlExpansionNode;
    if (type == "QUmlExpansionRegion") return new QUmlExpansionRegion;
    if (type == "QUmlExpression") return new QUmlExpression;
    if (type == "QUmlExtend") return new QUmlExtend;
    if (type == "QUmlExtensionEnd") return new QUmlExtensionEnd;
    if (type == "QUmlExtension") return new QUmlExtension;
    if (type == "QUmlExtensionPoint") return new QUmlExtensionPoint;
    if (type == "QUmlFinalState") return new QUmlFinalState;
    if (type == "QUmlFlowFinalNode") return new QUmlFlowFinalNode;
    if (type == "QUmlForkNode") return new QUmlForkNode;
    if (type == "QUmlFunctionBehavior") return new QUmlFunctionBehavior;
    if (type == "QUmlGate") return new QUmlGate;
    if (type == "QUmlGeneralization") return new QUmlGeneralization;
    if (type == "QUmlGeneralizationSet") return new QUmlGeneralizationSet;
    if (type == "QUmlGeneralOrdering") return new QUmlGeneralOrdering;
    if (type == "QUmlImage") return new QUmlImage;
    if (type == "QUmlInclude") return new QUmlInclude;
    if (type == "QUmlInformationFlow") return new QUmlInformationFlow;
    if (type == "QUmlInformationItem") return new QUmlInformationItem;
    if (type == "QUmlInitialNode") return new QUmlInitialNode;
    if (type == "QUmlInputPin") return new QUmlInputPin;
    if (type == "QUmlInstanceSpecification") return new QUmlInstanceSpecification;
    if (type == "QUmlInstanceValue") return new QUmlInstanceValue;
    if (type == "QUmlInteractionConstraint") return new QUmlInteractionConstraint;
    if (type == "QUmlInteraction") return new QUmlInteraction;
    if (type == "QUmlInteractionOperand") return new QUmlInteractionOperand;
    if (type == "QUmlInteractionUse") return new QUmlInteractionUse;
    if (type == "QUmlInterface") return new QUmlInterface;
    if (type == "QUmlInterfaceRealization") return new QUmlInterfaceRealization;
    if (type == "QUmlInterruptibleActivityRegion") return new QUmlInterruptibleActivityRegion;
    if (type == "QUmlIntervalConstraint") return new QUmlIntervalConstraint;
    if (type == "QUmlInterval") return new QUmlInterval;
    if (type == "QUmlJoinNode") return new QUmlJoinNode;
    if (type == "QUmlLifeline") return new QUmlLifeline;
    if (type == "QUmlLinkEndCreationData") return new QUmlLinkEndCreationData;
    if (type == "QUmlLinkEndData") return new QUmlLinkEndData;
    if (type == "QUmlLinkEndDestructionData") return new QUmlLinkEndDestructionData;
    if (type == "QUmlLiteralBoolean") return new QUmlLiteralBoolean;
    if (type == "QUmlLiteralInteger") return new QUmlLiteralInteger;
    if (type == "QUmlLiteralNull") return new QUmlLiteralNull;
    if (type == "QUmlLiteralReal") return new QUmlLiteralReal;
    if (type == "QUmlLiteralString") return new QUmlLiteralString;
    if (type == "QUmlLiteralUnlimitedNatural") return new QUmlLiteralUnlimitedNatural;
    if (type == "QUmlLoopNode") return new QUmlLoopNode;
    if (type == "QUmlManifestation") return new QUmlManifestation;
    if (type == "QUmlMergeNode") return new QUmlMergeNode;
    if (type == "QUmlMessage") return new QUmlMessage;
    if (type == "QUmlMessageOccurrenceSpecification") return new QUmlMessageOccurrenceSpecification;
    if (type == "QUmlModel") return new QUmlModel;
    if (type == "QUmlNode") return new QUmlNode;
    if (type == "QUmlObjectFlow") return new QUmlObjectFlow;
    if (type == "QUmlOccurrenceSpecification") return new QUmlOccurrenceSpecification;
    if (type == "QUmlOpaqueAction") return new QUmlOpaqueAction;
    if (type == "QUmlOpaqueBehavior") return new QUmlOpaqueBehavior;
    if (type == "QUmlOpaqueExpression") return new QUmlOpaqueExpression;
    if (type == "QUmlOperation") return new QUmlOperation;
    if (type == "QUmlOperationTemplateParameter") return new QUmlOperationTemplateParameter;
    if (type == "QUmlOutputPin") return new QUmlOutputPin;
    if (type == "QUmlPackage") return new QUmlPackage;
    if (type == "QUmlPackageImport") return new QUmlPackageImport;
    if (type == "QUmlPackageMerge") return new QUmlPackageMerge;
    if (type == "QUmlParameter") return new QUmlParameter;
    if (type == "QUmlParameterSet") return new QUmlParameterSet;
    if (type == "QUmlPartDecomposition") return new QUmlPartDecomposition;
    if (type == "QUmlPort") return new QUmlPort;
    if (type == "QUmlPrimitiveType") return new QUmlPrimitiveType;
    if (type == "QUmlProfileApplication") return new QUmlProfileApplication;
    if (type == "QUmlProfile") return new QUmlProfile;
    if (type == "QUmlProperty") return new QUmlProperty;
    if (type == "QUmlProtocolConformance") return new QUmlProtocolConformance;
    if (type == "QUmlProtocolStateMachine") return new QUmlProtocolStateMachine;
    if (type == "QUmlProtocolTransition") return new QUmlProtocolTransition;
    if (type == "QUmlPseudostate") return new QUmlPseudostate;
    if (type == "QUmlQualifierValue") return new QUmlQualifierValue;
    if (type == "QUmlRaiseExceptionAction") return new QUmlRaiseExceptionAction;
    if (type == "QUmlReadExtentAction") return new QUmlReadExtentAction;
    if (type == "QUmlReadIsClassifiedObjectAction") return new QUmlReadIsClassifiedObjectAction;
    if (type == "QUmlReadLinkAction") return new QUmlReadLinkAction;
    if (type == "QUmlReadLinkObjectEndAction") return new QUmlReadLinkObjectEndAction;
    if (type == "QUmlReadLinkObjectEndQualifierAction") return new QUmlReadLinkObjectEndQualifierAction;
    if (type == "QUmlReadSelfAction") return new QUmlReadSelfAction;
    if (type == "QUmlReadStructuralFeatureAction") return new QUmlReadStructuralFeatureAction;
    if (type == "QUmlReadVariableAction") return new QUmlReadVariableAction;
    if (type == "QUmlRealization") return new QUmlRealization;
    if (type == "QUmlReception") return new QUmlReception;
    if (type == "QUmlReclassifyObjectAction") return new QUmlReclassifyObjectAction;
    if (type == "QUmlRedefinableTemplateSignature") return new QUmlRedefinableTemplateSignature;
    if (type == "QUmlReduceAction") return new QUmlReduceAction;
    if (type == "QUmlRegion") return new QUmlRegion;
    if (type == "QUmlRemoveStructuralFeatureValueAction") return new QUmlRemoveStructuralFeatureValueAction;
    if (type == "QUmlRemoveVariableValueAction") return new QUmlRemoveVariableValueAction;
    if (type == "QUmlReplyAction") return new QUmlReplyAction;
    if (type == "QUmlSendObjectAction") return new QUmlSendObjectAction;
    if (type == "QUmlSendSignalAction") return new QUmlSendSignalAction;
    if (type == "QUmlSequenceNode") return new QUmlSequenceNode;
    if (type == "QUmlSignalEvent") return new QUmlSignalEvent;
    if (type == "QUmlSignal") return new QUmlSignal;
    if (type == "QUmlSlot") return new QUmlSlot;
    if (type == "QUmlStartClassifierBehaviorAction") return new QUmlStartClassifierBehaviorAction;
    if (type == "QUmlStartObjectBehaviorAction") return new QUmlStartObjectBehaviorAction;
    if (type == "QUmlState") return new QUmlState;
    if (type == "QUmlStateInvariant") return new QUmlStateInvariant;
    if (type == "QUmlStateMachine") return new QUmlStateMachine;
    if (type == "QUmlStereotype") return new QUmlStereotype;
    if (type == "QUmlStringExpression") return new QUmlStringExpression;
    if (type == "QUmlStructuredActivityNode") return new QUmlStructuredActivityNode;
    if (type == "QUmlSubstitution") return new QUmlSubstitution;
    if (type == "QUmlTemplateBinding") return new QUmlTemplateBinding;
    if (type == "QUmlTemplateParameter") return new QUmlTemplateParameter;
    if (type == "QUmlTemplateParameterSubstitution") return new QUmlTemplateParameterSubstitution;
    if (type == "QUmlTemplateSignature") return new QUmlTemplateSignature;
    if (type == "QUmlTestIdentityAction") return new QUmlTestIdentityAction;
    if (type == "QUmlTimeConstraint") return new QUmlTimeConstraint;
    if (type == "QUmlTimeEvent") return new QUmlTimeEvent;
    if (type == "QUmlTimeExpression") return new QUmlTimeExpression;
    if (type == "QUmlTimeInterval") return new QUmlTimeInterval;
    if (type == "QUmlTimeObservation") return new QUmlTimeObservation;
    if (type == "QUmlTransition") return new QUmlTransition;
    if (type == "QUmlTrigger") return new QUmlTrigger;
    if (type == "QUmlUnmarshallAction") return new QUmlUnmarshallAction;
    if (type == "QUmlUsage") return new QUmlUsage;
    if (type == "QUmlUseCase") return new QUmlUseCase;
    if (type == "QUmlValuePin") return new QUmlValuePin;
    if (type == "QUmlValueSpecificationAction") return new QUmlValueSpecificationAction;
    if (type == "QUmlVariable") return new QUmlVariable;
    Q_ASSERT_X(true,
               "QUmlMetaModelPlugin::createModelingElement",
               QStringLiteral("QUmlMetaModelPlugin does not know how to create instances of '%1' type !").arg(type).toLatin1());
    return 0;
}

