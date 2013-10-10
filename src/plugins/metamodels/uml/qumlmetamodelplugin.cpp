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

#include "qumlmetamodel.h"

#include <QtUml/QtUml>

QUmlMetaModelPlugin::QUmlMetaModelPlugin(QObject *parent)
    : QMetaModelPlugin(parent)
{
}

void QUmlMetaModelPlugin::initMetaModel(QScriptEngine *scriptEngine)
{
    QUmlMetaModel::init(scriptEngine);
}

QModelingElement *QUmlMetaModelPlugin::createModelingElement(QString type)
{
    if (type == "QUmlAbstraction") return new QUmlAbstraction;
    else if (type == "QUmlAcceptCallAction") return new QUmlAcceptCallAction;
    else if (type == "QUmlAcceptEventAction") return new QUmlAcceptEventAction;
    else if (type == "QUmlActionExecutionSpecification") return new QUmlActionExecutionSpecification;
    else if (type == "QUmlActionInputPin") return new QUmlActionInputPin;
    else if (type == "QUmlActivityFinalNode") return new QUmlActivityFinalNode;
    else if (type == "QUmlActivity") return new QUmlActivity;
    else if (type == "QUmlActivityParameterNode") return new QUmlActivityParameterNode;
    else if (type == "QUmlActivityPartition") return new QUmlActivityPartition;
    else if (type == "QUmlActor") return new QUmlActor;
    else if (type == "QUmlAddStructuralFeatureValueAction") return new QUmlAddStructuralFeatureValueAction;
    else if (type == "QUmlAddVariableValueAction") return new QUmlAddVariableValueAction;
    else if (type == "QUmlAnyReceiveEvent") return new QUmlAnyReceiveEvent;
    else if (type == "QUmlArtifact") return new QUmlArtifact;
    else if (type == "QUmlAssociationClass") return new QUmlAssociationClass;
    else if (type == "QUmlAssociation") return new QUmlAssociation;
    else if (type == "QUmlBehaviorExecutionSpecification") return new QUmlBehaviorExecutionSpecification;
    else if (type == "QUmlBroadcastSignalAction") return new QUmlBroadcastSignalAction;
    else if (type == "QUmlCallBehaviorAction") return new QUmlCallBehaviorAction;
    else if (type == "QUmlCallEvent") return new QUmlCallEvent;
    else if (type == "QUmlCallOperationAction") return new QUmlCallOperationAction;
    else if (type == "QUmlCentralBufferNode") return new QUmlCentralBufferNode;
    else if (type == "QUmlChangeEvent") return new QUmlChangeEvent;
    else if (type == "QUmlClass") return new QUmlClass;
    else if (type == "QUmlClassifierTemplateParameter") return new QUmlClassifierTemplateParameter;
    else if (type == "QUmlClause") return new QUmlClause;
    else if (type == "QUmlClearAssociationAction") return new QUmlClearAssociationAction;
    else if (type == "QUmlClearStructuralFeatureAction") return new QUmlClearStructuralFeatureAction;
    else if (type == "QUmlClearVariableAction") return new QUmlClearVariableAction;
    else if (type == "QUmlCollaboration") return new QUmlCollaboration;
    else if (type == "QUmlCollaborationUse") return new QUmlCollaborationUse;
    else if (type == "QUmlCombinedFragment") return new QUmlCombinedFragment;
    else if (type == "QUmlComment") return new QUmlComment;
    else if (type == "QUmlCommunicationPath") return new QUmlCommunicationPath;
    else if (type == "QUmlComponent") return new QUmlComponent;
    else if (type == "QUmlComponentRealization") return new QUmlComponentRealization;
    else if (type == "QUmlConditionalNode") return new QUmlConditionalNode;
    else if (type == "QUmlConnectableElementTemplateParameter") return new QUmlConnectableElementTemplateParameter;
    else if (type == "QUmlConnectionPointReference") return new QUmlConnectionPointReference;
    else if (type == "QUmlConnectorEnd") return new QUmlConnectorEnd;
    else if (type == "QUmlConnector") return new QUmlConnector;
    else if (type == "QUmlConsiderIgnoreFragment") return new QUmlConsiderIgnoreFragment;
    else if (type == "QUmlConstraint") return new QUmlConstraint;
    else if (type == "QUmlContinuation") return new QUmlContinuation;
    else if (type == "QUmlControlFlow") return new QUmlControlFlow;
    else if (type == "QUmlCreateLinkAction") return new QUmlCreateLinkAction;
    else if (type == "QUmlCreateLinkObjectAction") return new QUmlCreateLinkObjectAction;
    else if (type == "QUmlCreateObjectAction") return new QUmlCreateObjectAction;
    else if (type == "QUmlDataStoreNode") return new QUmlDataStoreNode;
    else if (type == "QUmlDataType") return new QUmlDataType;
    else if (type == "QUmlDecisionNode") return new QUmlDecisionNode;
    else if (type == "QUmlDependency") return new QUmlDependency;
    else if (type == "QUmlDeployment") return new QUmlDeployment;
    else if (type == "QUmlDeploymentSpecification") return new QUmlDeploymentSpecification;
    else if (type == "QUmlDestroyLinkAction") return new QUmlDestroyLinkAction;
    else if (type == "QUmlDestroyObjectAction") return new QUmlDestroyObjectAction;
    else if (type == "QUmlDestructionOccurrenceSpecification") return new QUmlDestructionOccurrenceSpecification;
    else if (type == "QUmlDevice") return new QUmlDevice;
    else if (type == "QUmlDurationConstraint") return new QUmlDurationConstraint;
    else if (type == "QUmlDuration") return new QUmlDuration;
    else if (type == "QUmlDurationInterval") return new QUmlDurationInterval;
    else if (type == "QUmlDurationObservation") return new QUmlDurationObservation;
    else if (type == "QUmlElementImport") return new QUmlElementImport;
    else if (type == "QUmlEnumeration") return new QUmlEnumeration;
    else if (type == "QUmlEnumerationLiteral") return new QUmlEnumerationLiteral;
    else if (type == "QUmlExceptionHandler") return new QUmlExceptionHandler;
    else if (type == "QUmlExecutionEnvironment") return new QUmlExecutionEnvironment;
    else if (type == "QUmlExecutionOccurrenceSpecification") return new QUmlExecutionOccurrenceSpecification;
    else if (type == "QUmlExpansionNode") return new QUmlExpansionNode;
    else if (type == "QUmlExpansionRegion") return new QUmlExpansionRegion;
    else if (type == "QUmlExpression") return new QUmlExpression;
    else if (type == "QUmlExtend") return new QUmlExtend;
    else if (type == "QUmlExtensionEnd") return new QUmlExtensionEnd;
    else if (type == "QUmlExtension") return new QUmlExtension;
    else if (type == "QUmlExtensionPoint") return new QUmlExtensionPoint;
    else if (type == "QUmlFinalState") return new QUmlFinalState;
    else if (type == "QUmlFlowFinalNode") return new QUmlFlowFinalNode;
    else if (type == "QUmlForkNode") return new QUmlForkNode;
    else if (type == "QUmlFunctionBehavior") return new QUmlFunctionBehavior;
    else if (type == "QUmlGate") return new QUmlGate;
    else if (type == "QUmlGeneralization") return new QUmlGeneralization;
    else if (type == "QUmlGeneralizationSet") return new QUmlGeneralizationSet;
    else if (type == "QUmlGeneralOrdering") return new QUmlGeneralOrdering;
    else if (type == "QUmlImage") return new QUmlImage;
    else if (type == "QUmlInclude") return new QUmlInclude;
    else if (type == "QUmlInformationFlow") return new QUmlInformationFlow;
    else if (type == "QUmlInformationItem") return new QUmlInformationItem;
    else if (type == "QUmlInitialNode") return new QUmlInitialNode;
    else if (type == "QUmlInputPin") return new QUmlInputPin;
    else if (type == "QUmlInstanceSpecification") return new QUmlInstanceSpecification;
    else if (type == "QUmlInstanceValue") return new QUmlInstanceValue;
    else if (type == "QUmlInteractionConstraint") return new QUmlInteractionConstraint;
    else if (type == "QUmlInteraction") return new QUmlInteraction;
    else if (type == "QUmlInteractionOperand") return new QUmlInteractionOperand;
    else if (type == "QUmlInteractionUse") return new QUmlInteractionUse;
    else if (type == "QUmlInterface") return new QUmlInterface;
    else if (type == "QUmlInterfaceRealization") return new QUmlInterfaceRealization;
    else if (type == "QUmlInterruptibleActivityRegion") return new QUmlInterruptibleActivityRegion;
    else if (type == "QUmlIntervalConstraint") return new QUmlIntervalConstraint;
    else if (type == "QUmlInterval") return new QUmlInterval;
    else if (type == "QUmlJoinNode") return new QUmlJoinNode;
    else if (type == "QUmlLifeline") return new QUmlLifeline;
    else if (type == "QUmlLinkEndCreationData") return new QUmlLinkEndCreationData;
    else if (type == "QUmlLinkEndData") return new QUmlLinkEndData;
    else if (type == "QUmlLinkEndDestructionData") return new QUmlLinkEndDestructionData;
    else if (type == "QUmlLiteralBoolean") return new QUmlLiteralBoolean;
    else if (type == "QUmlLiteralInteger") return new QUmlLiteralInteger;
    else if (type == "QUmlLiteralNull") return new QUmlLiteralNull;
    else if (type == "QUmlLiteralReal") return new QUmlLiteralReal;
    else if (type == "QUmlLiteralString") return new QUmlLiteralString;
    else if (type == "QUmlLiteralUnlimitedNatural") return new QUmlLiteralUnlimitedNatural;
    else if (type == "QUmlLoopNode") return new QUmlLoopNode;
    else if (type == "QUmlManifestation") return new QUmlManifestation;
    else if (type == "QUmlMergeNode") return new QUmlMergeNode;
    else if (type == "QUmlMessage") return new QUmlMessage;
    else if (type == "QUmlMessageOccurrenceSpecification") return new QUmlMessageOccurrenceSpecification;
    else if (type == "QUmlModel") return new QUmlModel;
    else if (type == "QUmlNode") return new QUmlNode;
    else if (type == "QUmlObjectFlow") return new QUmlObjectFlow;
    else if (type == "QUmlOccurrenceSpecification") return new QUmlOccurrenceSpecification;
    else if (type == "QUmlOpaqueAction") return new QUmlOpaqueAction;
    else if (type == "QUmlOpaqueBehavior") return new QUmlOpaqueBehavior;
    else if (type == "QUmlOpaqueExpression") return new QUmlOpaqueExpression;
    else if (type == "QUmlOperation") return new QUmlOperation;
    else if (type == "QUmlOperationTemplateParameter") return new QUmlOperationTemplateParameter;
    else if (type == "QUmlOutputPin") return new QUmlOutputPin;
    else if (type == "QUmlPackage") return new QUmlPackage;
    else if (type == "QUmlPackageImport") return new QUmlPackageImport;
    else if (type == "QUmlPackageMerge") return new QUmlPackageMerge;
    else if (type == "QUmlParameter") return new QUmlParameter;
    else if (type == "QUmlParameterSet") return new QUmlParameterSet;
    else if (type == "QUmlPartDecomposition") return new QUmlPartDecomposition;
    else if (type == "QUmlPort") return new QUmlPort;
    else if (type == "QUmlPrimitiveType") return new QUmlPrimitiveType;
    else if (type == "QUmlProfileApplication") return new QUmlProfileApplication;
    else if (type == "QUmlProfile") return new QUmlProfile;
    else if (type == "QUmlProperty") return new QUmlProperty;
    else if (type == "QUmlProtocolConformance") return new QUmlProtocolConformance;
    else if (type == "QUmlProtocolStateMachine") return new QUmlProtocolStateMachine;
    else if (type == "QUmlProtocolTransition") return new QUmlProtocolTransition;
    else if (type == "QUmlPseudostate") return new QUmlPseudostate;
    else if (type == "QUmlQualifierValue") return new QUmlQualifierValue;
    else if (type == "QUmlRaiseExceptionAction") return new QUmlRaiseExceptionAction;
    else if (type == "QUmlReadExtentAction") return new QUmlReadExtentAction;
    else if (type == "QUmlReadIsClassifiedObjectAction") return new QUmlReadIsClassifiedObjectAction;
    else if (type == "QUmlReadLinkAction") return new QUmlReadLinkAction;
    else if (type == "QUmlReadLinkObjectEndAction") return new QUmlReadLinkObjectEndAction;
    else if (type == "QUmlReadLinkObjectEndQualifierAction") return new QUmlReadLinkObjectEndQualifierAction;
    else if (type == "QUmlReadSelfAction") return new QUmlReadSelfAction;
    else if (type == "QUmlReadStructuralFeatureAction") return new QUmlReadStructuralFeatureAction;
    else if (type == "QUmlReadVariableAction") return new QUmlReadVariableAction;
    else if (type == "QUmlRealization") return new QUmlRealization;
    else if (type == "QUmlReception") return new QUmlReception;
    else if (type == "QUmlReclassifyObjectAction") return new QUmlReclassifyObjectAction;
    else if (type == "QUmlRedefinableTemplateSignature") return new QUmlRedefinableTemplateSignature;
    else if (type == "QUmlReduceAction") return new QUmlReduceAction;
    else if (type == "QUmlRegion") return new QUmlRegion;
    else if (type == "QUmlRemoveStructuralFeatureValueAction") return new QUmlRemoveStructuralFeatureValueAction;
    else if (type == "QUmlRemoveVariableValueAction") return new QUmlRemoveVariableValueAction;
    else if (type == "QUmlReplyAction") return new QUmlReplyAction;
    else if (type == "QUmlSendObjectAction") return new QUmlSendObjectAction;
    else if (type == "QUmlSendSignalAction") return new QUmlSendSignalAction;
    else if (type == "QUmlSequenceNode") return new QUmlSequenceNode;
    else if (type == "QUmlSignalEvent") return new QUmlSignalEvent;
    else if (type == "QUmlSignal") return new QUmlSignal;
    else if (type == "QUmlSlot") return new QUmlSlot;
    else if (type == "QUmlStartClassifierBehaviorAction") return new QUmlStartClassifierBehaviorAction;
    else if (type == "QUmlStartObjectBehaviorAction") return new QUmlStartObjectBehaviorAction;
    else if (type == "QUmlState") return new QUmlState;
    else if (type == "QUmlStateInvariant") return new QUmlStateInvariant;
    else if (type == "QUmlStateMachine") return new QUmlStateMachine;
    else if (type == "QUmlStereotype") return new QUmlStereotype;
    else if (type == "QUmlStringExpression") return new QUmlStringExpression;
    else if (type == "QUmlStructuredActivityNode") return new QUmlStructuredActivityNode;
    else if (type == "QUmlSubstitution") return new QUmlSubstitution;
    else if (type == "QUmlTemplateBinding") return new QUmlTemplateBinding;
    else if (type == "QUmlTemplateParameter") return new QUmlTemplateParameter;
    else if (type == "QUmlTemplateParameterSubstitution") return new QUmlTemplateParameterSubstitution;
    else if (type == "QUmlTemplateSignature") return new QUmlTemplateSignature;
    else if (type == "QUmlTestIdentityAction") return new QUmlTestIdentityAction;
    else if (type == "QUmlTimeConstraint") return new QUmlTimeConstraint;
    else if (type == "QUmlTimeEvent") return new QUmlTimeEvent;
    else if (type == "QUmlTimeExpression") return new QUmlTimeExpression;
    else if (type == "QUmlTimeInterval") return new QUmlTimeInterval;
    else if (type == "QUmlTimeObservation") return new QUmlTimeObservation;
    else if (type == "QUmlTransition") return new QUmlTransition;
    else if (type == "QUmlTrigger") return new QUmlTrigger;
    else if (type == "QUmlUnmarshallAction") return new QUmlUnmarshallAction;
    else if (type == "QUmlUsage") return new QUmlUsage;
    else if (type == "QUmlUseCase") return new QUmlUseCase;
    else if (type == "QUmlValuePin") return new QUmlValuePin;
    else if (type == "QUmlValueSpecificationAction") return new QUmlValueSpecificationAction;
    else if (type == "QUmlVariable") return new QUmlVariable;
    Q_ASSERT_X(true,
               "QUmlMetaModelPlugin::createModelingElement",
               QStringLiteral("QUmlMetaModelPlugin does not know how to create instances of '%1' type !").arg(type).toLatin1());
    return 0;
}

