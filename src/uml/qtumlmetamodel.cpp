/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qtumlmetamodel.h"

QT_BEGIN_NAMESPACE_QTUML

void QtUmlMetaModel::init()
{
    qRegisterMetaType<QAction *>("QAction *");
    qRegisterMetaType<QActivity *>("QActivity *");
    qRegisterMetaType<QActivityEdge *>("QActivityEdge *");
    qRegisterMetaType<QActivityGroup *>("QActivityGroup *");
    qRegisterMetaType<QActivityNode *>("QActivityNode *");
    qRegisterMetaType<QActivityPartition *>("QActivityPartition *");
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QBehavioralFeature *>("QBehavioralFeature *");
    qRegisterMetaType<QBehavioredClassifier *>("QBehavioredClassifier *");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QClassifierTemplateParameter *>("QClassifierTemplateParameter *");
    qRegisterMetaType<QClause *>("QClause *");
    qRegisterMetaType<QCollaboration *>("QCollaboration *");
    qRegisterMetaType<QCollaborationUse *>("QCollaborationUse *");
    qRegisterMetaType<QComment *>("QComment *");
    qRegisterMetaType<QComponent *>("QComponent *");
    qRegisterMetaType<QComponentRealization *>("QComponentRealization *");
    qRegisterMetaType<QConnectableElement *>("QConnectableElement *");
    qRegisterMetaType<QConnectableElementTemplateParameter *>("QConnectableElementTemplateParameter *");
    qRegisterMetaType<QConnectionPointReference *>("QConnectionPointReference *");
    qRegisterMetaType<QConnector *>("QConnector *");
    qRegisterMetaType<QConnectorEnd *>("QConnectorEnd *");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QDependency *>("QDependency *");
    qRegisterMetaType<QDeployedArtifact *>("QDeployedArtifact *");
    qRegisterMetaType<QDeployment *>("QDeployment *");
    qRegisterMetaType<QDeploymentSpecification *>("QDeploymentSpecification *");
    qRegisterMetaType<QDeploymentTarget *>("QDeploymentTarget *");
    qRegisterMetaType<QDuration *>("QDuration *");
    qRegisterMetaType<QDurationInterval *>("QDurationInterval *");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<QElementImport *>("QElementImport *");
    qRegisterMetaType<QEnumeration *>("QEnumeration *");
    qRegisterMetaType<QEnumerationLiteral *>("QEnumerationLiteral *");
    qRegisterMetaType<QEvent *>("QEvent *");
    qRegisterMetaType<QExceptionHandler *>("QExceptionHandler *");
    qRegisterMetaType<QExecutableNode *>("QExecutableNode *");
    qRegisterMetaType<QExecutionSpecification *>("QExecutionSpecification *");
    qRegisterMetaType<QExpansionNode *>("QExpansionNode *");
    qRegisterMetaType<QExpansionRegion *>("QExpansionRegion *");
    qRegisterMetaType<QExtend *>("QExtend *");
    qRegisterMetaType<QExtension *>("QExtension *");
    qRegisterMetaType<QExtensionEnd *>("QExtensionEnd *");
    qRegisterMetaType<QExtensionPoint *>("QExtensionPoint *");
    qRegisterMetaType<QFeature *>("QFeature *");
    qRegisterMetaType<QGate *>("QGate *");
    qRegisterMetaType<QGeneralOrdering *>("QGeneralOrdering *");
    qRegisterMetaType<QGeneralization *>("QGeneralization *");
    qRegisterMetaType<QGeneralizationSet *>("QGeneralizationSet *");
    qRegisterMetaType<QImage *>("QImage *");
    qRegisterMetaType<QInclude *>("QInclude *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QInstanceSpecification *>("QInstanceSpecification *");
    qRegisterMetaType<QInteraction *>("QInteraction *");
    qRegisterMetaType<QInteractionConstraint *>("QInteractionConstraint *");
    qRegisterMetaType<QInteractionFragment *>("QInteractionFragment *");
    qRegisterMetaType<QInteractionOperand *>("QInteractionOperand *");
    qRegisterMetaType<QInterface *>("QInterface *");
    qRegisterMetaType<QInterfaceRealization *>("QInterfaceRealization *");
    qRegisterMetaType<QInterruptibleActivityRegion *>("QInterruptibleActivityRegion *");
    qRegisterMetaType<QInterval *>("QInterval *");
    qRegisterMetaType<QLifeline *>("QLifeline *");
    qRegisterMetaType<QLinkEndCreationData *>("QLinkEndCreationData *");
    qRegisterMetaType<QLinkEndData *>("QLinkEndData *");
    qRegisterMetaType<QLinkEndDestructionData *>("QLinkEndDestructionData *");
    qRegisterMetaType<QList<QAction *>>("QList<QAction *>");
    qRegisterMetaType<QList<QActivity *>>("QList<QActivity *>");
    qRegisterMetaType<QList<QActivityEdge *>>("QList<QActivityEdge *>");
    qRegisterMetaType<QList<QActivityGroup *>>("QList<QActivityGroup *>");
    qRegisterMetaType<QList<QActivityNode *>>("QList<QActivityNode *>");
    qRegisterMetaType<QList<QActivityPartition *>>("QList<QActivityPartition *>");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");
    qRegisterMetaType<QList<QBehavioralFeature *>>("QList<QBehavioralFeature *>");
    qRegisterMetaType<QList<QBehavioredClassifier *>>("QList<QBehavioredClassifier *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");
    qRegisterMetaType<QList<QClassifierTemplateParameter *>>("QList<QClassifierTemplateParameter *>");
    qRegisterMetaType<QList<QClause *>>("QList<QClause *>");
    qRegisterMetaType<QList<QCollaboration *>>("QList<QCollaboration *>");
    qRegisterMetaType<QList<QCollaborationUse *>>("QList<QCollaborationUse *>");
    qRegisterMetaType<QList<QComment *>>("QList<QComment *>");
    qRegisterMetaType<QList<QComponent *>>("QList<QComponent *>");
    qRegisterMetaType<QList<QComponentRealization *>>("QList<QComponentRealization *>");
    qRegisterMetaType<QList<QConnectableElement *>>("QList<QConnectableElement *>");
    qRegisterMetaType<QList<QConnectableElementTemplateParameter *>>("QList<QConnectableElementTemplateParameter *>");
    qRegisterMetaType<QList<QConnectionPointReference *>>("QList<QConnectionPointReference *>");
    qRegisterMetaType<QList<QConnector *>>("QList<QConnector *>");
    qRegisterMetaType<QList<QConnectorEnd *>>("QList<QConnectorEnd *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");
    qRegisterMetaType<QList<QDependency *>>("QList<QDependency *>");
    qRegisterMetaType<QList<QDeployedArtifact *>>("QList<QDeployedArtifact *>");
    qRegisterMetaType<QList<QDeployment *>>("QList<QDeployment *>");
    qRegisterMetaType<QList<QDeploymentSpecification *>>("QList<QDeploymentSpecification *>");
    qRegisterMetaType<QList<QDeploymentTarget *>>("QList<QDeploymentTarget *>");
    qRegisterMetaType<QList<QDuration *>>("QList<QDuration *>");
    qRegisterMetaType<QList<QDurationInterval *>>("QList<QDurationInterval *>");
    qRegisterMetaType<QList<QElement *>>("QList<QElement *>");
    qRegisterMetaType<QList<QElementImport *>>("QList<QElementImport *>");
    qRegisterMetaType<QList<QEnumeration *>>("QList<QEnumeration *>");
    qRegisterMetaType<QList<QEnumerationLiteral *>>("QList<QEnumerationLiteral *>");
    qRegisterMetaType<QList<QEvent *>>("QList<QEvent *>");
    qRegisterMetaType<QList<QExceptionHandler *>>("QList<QExceptionHandler *>");
    qRegisterMetaType<QList<QExecutableNode *>>("QList<QExecutableNode *>");
    qRegisterMetaType<QList<QExecutionSpecification *>>("QList<QExecutionSpecification *>");
    qRegisterMetaType<QList<QExpansionNode *>>("QList<QExpansionNode *>");
    qRegisterMetaType<QList<QExpansionRegion *>>("QList<QExpansionRegion *>");
    qRegisterMetaType<QList<QExtend *>>("QList<QExtend *>");
    qRegisterMetaType<QList<QExtension *>>("QList<QExtension *>");
    qRegisterMetaType<QList<QExtensionEnd *>>("QList<QExtensionEnd *>");
    qRegisterMetaType<QList<QExtensionPoint *>>("QList<QExtensionPoint *>");
    qRegisterMetaType<QList<QFeature *>>("QList<QFeature *>");
    qRegisterMetaType<QList<QGate *>>("QList<QGate *>");
    qRegisterMetaType<QList<QGeneralOrdering *>>("QList<QGeneralOrdering *>");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QGeneralization *>");
    qRegisterMetaType<QList<QGeneralizationSet *>>("QList<QGeneralizationSet *>");
    qRegisterMetaType<QList<QImage *>>("QList<QImage *>");
    qRegisterMetaType<QList<QInclude *>>("QList<QInclude *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");
    qRegisterMetaType<QList<QInstanceSpecification *>>("QList<QInstanceSpecification *>");
    qRegisterMetaType<QList<QInteraction *>>("QList<QInteraction *>");
    qRegisterMetaType<QList<QInteractionConstraint *>>("QList<QInteractionConstraint *>");
    qRegisterMetaType<QList<QInteractionFragment *>>("QList<QInteractionFragment *>");
    qRegisterMetaType<QList<QInteractionOperand *>>("QList<QInteractionOperand *>");
    qRegisterMetaType<QList<QInterface *>>("QList<QInterface *>");
    qRegisterMetaType<QList<QInterfaceRealization *>>("QList<QInterfaceRealization *>");
    qRegisterMetaType<QList<QInterruptibleActivityRegion *>>("QList<QInterruptibleActivityRegion *>");
    qRegisterMetaType<QList<QInterval *>>("QList<QInterval *>");
    qRegisterMetaType<QList<QLifeline *>>("QList<QLifeline *>");
    qRegisterMetaType<QList<QLinkEndCreationData *>>("QList<QLinkEndCreationData *>");
    qRegisterMetaType<QList<QLinkEndData *>>("QList<QLinkEndData *>");
    qRegisterMetaType<QList<QLinkEndDestructionData *>>("QList<QLinkEndDestructionData *>");
    qRegisterMetaType<QList<QManifestation *>>("QList<QManifestation *>");
    qRegisterMetaType<QList<QMessage *>>("QList<QMessage *>");
    qRegisterMetaType<QList<QMessageEnd *>>("QList<QMessageEnd *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");
    qRegisterMetaType<QList<QNamespace *>>("QList<QNamespace *>");
    qRegisterMetaType<QList<QObjectFlow *>>("QList<QObjectFlow *>");
    qRegisterMetaType<QList<QObjectNode *>>("QList<QObjectNode *>");
    qRegisterMetaType<QList<QObservation *>>("QList<QObservation *>");
    qRegisterMetaType<QList<QOccurrenceSpecification *>>("QList<QOccurrenceSpecification *>");
    qRegisterMetaType<QList<QOpaqueExpression *>>("QList<QOpaqueExpression *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");
    qRegisterMetaType<QList<QOperationTemplateParameter *>>("QList<QOperationTemplateParameter *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");
    qRegisterMetaType<QList<QPackage *>>("QList<QPackage *>");
    qRegisterMetaType<QList<QPackageImport *>>("QList<QPackageImport *>");
    qRegisterMetaType<QList<QPackageMerge *>>("QList<QPackageMerge *>");
    qRegisterMetaType<QList<QPackageableElement *>>("QList<QPackageableElement *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");
    qRegisterMetaType<QList<QParameterSet *>>("QList<QParameterSet *>");
    qRegisterMetaType<QList<QParameterableElement *>>("QList<QParameterableElement *>");
    qRegisterMetaType<QList<QPartDecomposition *>>("QList<QPartDecomposition *>");
    qRegisterMetaType<QList<QPort *>>("QList<QPort *>");
    qRegisterMetaType<QList<QProfile *>>("QList<QProfile *>");
    qRegisterMetaType<QList<QProfileApplication *>>("QList<QProfileApplication *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");
    qRegisterMetaType<QList<QProtocolConformance *>>("QList<QProtocolConformance *>");
    qRegisterMetaType<QList<QProtocolStateMachine *>>("QList<QProtocolStateMachine *>");
    qRegisterMetaType<QList<QPseudostate *>>("QList<QPseudostate *>");
    qRegisterMetaType<QList<QQualifierValue *>>("QList<QQualifierValue *>");
    qRegisterMetaType<QList<QReception *>>("QList<QReception *>");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QRedefinableElement *>");
    qRegisterMetaType<QList<QRedefinableTemplateSignature *>>("QList<QRedefinableTemplateSignature *>");
    qRegisterMetaType<QList<QRegion *>>("QList<QRegion *>");
    qRegisterMetaType<QList<QRelationship *>>("QList<QRelationship *>");
    qRegisterMetaType<QList<QSignal *>>("QList<QSignal *>");
    qRegisterMetaType<QList<QSlot *>>("QList<QSlot *>");
    qRegisterMetaType<QList<QState *>>("QList<QState *>");
    qRegisterMetaType<QList<QStateMachine *>>("QList<QStateMachine *>");
    qRegisterMetaType<QList<QStereotype *>>("QList<QStereotype *>");
    qRegisterMetaType<QList<QStringExpression *>>("QList<QStringExpression *>");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QStructuralFeature *>");
    qRegisterMetaType<QList<QStructuredActivityNode *>>("QList<QStructuredActivityNode *>");
    qRegisterMetaType<QList<QSubstitution *>>("QList<QSubstitution *>");
    qRegisterMetaType<QList<QTemplateBinding *>>("QList<QTemplateBinding *>");
    qRegisterMetaType<QList<QTemplateParameter *>>("QList<QTemplateParameter *>");
    qRegisterMetaType<QList<QTemplateParameterSubstitution *>>("QList<QTemplateParameterSubstitution *>");
    qRegisterMetaType<QList<QTemplateSignature *>>("QList<QTemplateSignature *>");
    qRegisterMetaType<QList<QTemplateableElement *>>("QList<QTemplateableElement *>");
    qRegisterMetaType<QList<QTimeExpression *>>("QList<QTimeExpression *>");
    qRegisterMetaType<QList<QTimeInterval *>>("QList<QTimeInterval *>");
    qRegisterMetaType<QList<QTransition *>>("QList<QTransition *>");
    qRegisterMetaType<QList<QTrigger *>>("QList<QTrigger *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");
    qRegisterMetaType<QList<QUseCase *>>("QList<QUseCase *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");
    qRegisterMetaType<QList<QVariable *>>("QList<QVariable *>");
    qRegisterMetaType<QList<QVertex *>>("QList<QVertex *>");
    qRegisterMetaType<QManifestation *>("QManifestation *");
    qRegisterMetaType<QMessage *>("QMessage *");
    qRegisterMetaType<QMessageEnd *>("QMessageEnd *");
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<QObjectFlow *>("QObjectFlow *");
    qRegisterMetaType<QObjectNode *>("QObjectNode *");
    qRegisterMetaType<QObservation *>("QObservation *");
    qRegisterMetaType<QOccurrenceSpecification *>("QOccurrenceSpecification *");
    qRegisterMetaType<QOpaqueExpression *>("QOpaqueExpression *");
    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QOperationTemplateParameter *>("QOperationTemplateParameter *");
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<QPackageImport *>("QPackageImport *");
    qRegisterMetaType<QPackageMerge *>("QPackageMerge *");
    qRegisterMetaType<QPackageableElement *>("QPackageableElement *");
    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QParameterSet *>("QParameterSet *");
    qRegisterMetaType<QParameterableElement *>("QParameterableElement *");
    qRegisterMetaType<QPartDecomposition *>("QPartDecomposition *");
    qRegisterMetaType<QPort *>("QPort *");
    qRegisterMetaType<QProfile *>("QProfile *");
    qRegisterMetaType<QProfileApplication *>("QProfileApplication *");
    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QProtocolConformance *>("QProtocolConformance *");
    qRegisterMetaType<QProtocolStateMachine *>("QProtocolStateMachine *");
    qRegisterMetaType<QPseudostate *>("QPseudostate *");
    qRegisterMetaType<QQualifierValue *>("QQualifierValue *");
    qRegisterMetaType<QReception *>("QReception *");
    qRegisterMetaType<QRedefinableElement *>("QRedefinableElement *");
    qRegisterMetaType<QRedefinableTemplateSignature *>("QRedefinableTemplateSignature *");
    qRegisterMetaType<QRegion *>("QRegion *");
    qRegisterMetaType<QRelationship *>("QRelationship *");
    qRegisterMetaType<QSet<QAction *>>("QSet<QAction *>");
    qRegisterMetaType<QSet<QActivity *>>("QSet<QActivity *>");
    qRegisterMetaType<QSet<QActivityEdge *>>("QSet<QActivityEdge *>");
    qRegisterMetaType<QSet<QActivityGroup *>>("QSet<QActivityGroup *>");
    qRegisterMetaType<QSet<QActivityNode *>>("QSet<QActivityNode *>");
    qRegisterMetaType<QSet<QActivityPartition *>>("QSet<QActivityPartition *>");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QSet<QBehavioralFeature *>>("QSet<QBehavioralFeature *>");
    qRegisterMetaType<QSet<QBehavioredClassifier *>>("QSet<QBehavioredClassifier *>");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QSet<QClassifierTemplateParameter *>>("QSet<QClassifierTemplateParameter *>");
    qRegisterMetaType<QSet<QClause *>>("QSet<QClause *>");
    qRegisterMetaType<QSet<QCollaboration *>>("QSet<QCollaboration *>");
    qRegisterMetaType<QSet<QCollaborationUse *>>("QSet<QCollaborationUse *>");
    qRegisterMetaType<QSet<QComment *>>("QSet<QComment *>");
    qRegisterMetaType<QSet<QComponent *>>("QSet<QComponent *>");
    qRegisterMetaType<QSet<QComponentRealization *>>("QSet<QComponentRealization *>");
    qRegisterMetaType<QSet<QConnectableElement *>>("QSet<QConnectableElement *>");
    qRegisterMetaType<QSet<QConnectableElementTemplateParameter *>>("QSet<QConnectableElementTemplateParameter *>");
    qRegisterMetaType<QSet<QConnectionPointReference *>>("QSet<QConnectionPointReference *>");
    qRegisterMetaType<QSet<QConnector *>>("QSet<QConnector *>");
    qRegisterMetaType<QSet<QConnectorEnd *>>("QSet<QConnectorEnd *>");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QSet<QDependency *>>("QSet<QDependency *>");
    qRegisterMetaType<QSet<QDeployedArtifact *>>("QSet<QDeployedArtifact *>");
    qRegisterMetaType<QSet<QDeployment *>>("QSet<QDeployment *>");
    qRegisterMetaType<QSet<QDeploymentSpecification *>>("QSet<QDeploymentSpecification *>");
    qRegisterMetaType<QSet<QDeploymentTarget *>>("QSet<QDeploymentTarget *>");
    qRegisterMetaType<QSet<QDuration *>>("QSet<QDuration *>");
    qRegisterMetaType<QSet<QDurationInterval *>>("QSet<QDurationInterval *>");
    qRegisterMetaType<QSet<QElement *>>("QSet<QElement *>");
    qRegisterMetaType<QSet<QElementImport *>>("QSet<QElementImport *>");
    qRegisterMetaType<QSet<QEnumeration *>>("QSet<QEnumeration *>");
    qRegisterMetaType<QSet<QEnumerationLiteral *>>("QSet<QEnumerationLiteral *>");
    qRegisterMetaType<QSet<QEvent *>>("QSet<QEvent *>");
    qRegisterMetaType<QSet<QExceptionHandler *>>("QSet<QExceptionHandler *>");
    qRegisterMetaType<QSet<QExecutableNode *>>("QSet<QExecutableNode *>");
    qRegisterMetaType<QSet<QExecutionSpecification *>>("QSet<QExecutionSpecification *>");
    qRegisterMetaType<QSet<QExpansionNode *>>("QSet<QExpansionNode *>");
    qRegisterMetaType<QSet<QExpansionRegion *>>("QSet<QExpansionRegion *>");
    qRegisterMetaType<QSet<QExtend *>>("QSet<QExtend *>");
    qRegisterMetaType<QSet<QExtension *>>("QSet<QExtension *>");
    qRegisterMetaType<QSet<QExtensionEnd *>>("QSet<QExtensionEnd *>");
    qRegisterMetaType<QSet<QExtensionPoint *>>("QSet<QExtensionPoint *>");
    qRegisterMetaType<QSet<QFeature *>>("QSet<QFeature *>");
    qRegisterMetaType<QSet<QGate *>>("QSet<QGate *>");
    qRegisterMetaType<QSet<QGeneralOrdering *>>("QSet<QGeneralOrdering *>");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QGeneralization *>");
    qRegisterMetaType<QSet<QGeneralizationSet *>>("QSet<QGeneralizationSet *>");
    qRegisterMetaType<QSet<QImage *>>("QSet<QImage *>");
    qRegisterMetaType<QSet<QInclude *>>("QSet<QInclude *>");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QSet<QInstanceSpecification *>>("QSet<QInstanceSpecification *>");
    qRegisterMetaType<QSet<QInteraction *>>("QSet<QInteraction *>");
    qRegisterMetaType<QSet<QInteractionConstraint *>>("QSet<QInteractionConstraint *>");
    qRegisterMetaType<QSet<QInteractionFragment *>>("QSet<QInteractionFragment *>");
    qRegisterMetaType<QSet<QInteractionOperand *>>("QSet<QInteractionOperand *>");
    qRegisterMetaType<QSet<QInterface *>>("QSet<QInterface *>");
    qRegisterMetaType<QSet<QInterfaceRealization *>>("QSet<QInterfaceRealization *>");
    qRegisterMetaType<QSet<QInterruptibleActivityRegion *>>("QSet<QInterruptibleActivityRegion *>");
    qRegisterMetaType<QSet<QInterval *>>("QSet<QInterval *>");
    qRegisterMetaType<QSet<QLifeline *>>("QSet<QLifeline *>");
    qRegisterMetaType<QSet<QLinkEndCreationData *>>("QSet<QLinkEndCreationData *>");
    qRegisterMetaType<QSet<QLinkEndData *>>("QSet<QLinkEndData *>");
    qRegisterMetaType<QSet<QLinkEndDestructionData *>>("QSet<QLinkEndDestructionData *>");
    qRegisterMetaType<QSet<QManifestation *>>("QSet<QManifestation *>");
    qRegisterMetaType<QSet<QMessage *>>("QSet<QMessage *>");
    qRegisterMetaType<QSet<QMessageEnd *>>("QSet<QMessageEnd *>");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QSet<QNamespace *>>("QSet<QNamespace *>");
    qRegisterMetaType<QSet<QObjectFlow *>>("QSet<QObjectFlow *>");
    qRegisterMetaType<QSet<QObjectNode *>>("QSet<QObjectNode *>");
    qRegisterMetaType<QSet<QObservation *>>("QSet<QObservation *>");
    qRegisterMetaType<QSet<QOccurrenceSpecification *>>("QSet<QOccurrenceSpecification *>");
    qRegisterMetaType<QSet<QOpaqueExpression *>>("QSet<QOpaqueExpression *>");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QSet<QOperationTemplateParameter *>>("QSet<QOperationTemplateParameter *>");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QPackage *>");
    qRegisterMetaType<QSet<QPackageImport *>>("QSet<QPackageImport *>");
    qRegisterMetaType<QSet<QPackageMerge *>>("QSet<QPackageMerge *>");
    qRegisterMetaType<QSet<QPackageableElement *>>("QSet<QPackageableElement *>");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QSet<QParameterSet *>>("QSet<QParameterSet *>");
    qRegisterMetaType<QSet<QParameterableElement *>>("QSet<QParameterableElement *>");
    qRegisterMetaType<QSet<QPartDecomposition *>>("QSet<QPartDecomposition *>");
    qRegisterMetaType<QSet<QPort *>>("QSet<QPort *>");
    qRegisterMetaType<QSet<QProfile *>>("QSet<QProfile *>");
    qRegisterMetaType<QSet<QProfileApplication *>>("QSet<QProfileApplication *>");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QSet<QProtocolConformance *>>("QSet<QProtocolConformance *>");
    qRegisterMetaType<QSet<QProtocolStateMachine *>>("QSet<QProtocolStateMachine *>");
    qRegisterMetaType<QSet<QPseudostate *>>("QSet<QPseudostate *>");
    qRegisterMetaType<QSet<QQualifierValue *>>("QSet<QQualifierValue *>");
    qRegisterMetaType<QSet<QReception *>>("QSet<QReception *>");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QRedefinableElement *>");
    qRegisterMetaType<QSet<QRedefinableTemplateSignature *>>("QSet<QRedefinableTemplateSignature *>");
    qRegisterMetaType<QSet<QRegion *>>("QSet<QRegion *>");
    qRegisterMetaType<QSet<QRelationship *>>("QSet<QRelationship *>");
    qRegisterMetaType<QSet<QSignal *>>("QSet<QSignal *>");
    qRegisterMetaType<QSet<QSlot *>>("QSet<QSlot *>");
    qRegisterMetaType<QSet<QState *>>("QSet<QState *>");
    qRegisterMetaType<QSet<QStateMachine *>>("QSet<QStateMachine *>");
    qRegisterMetaType<QSet<QStereotype *>>("QSet<QStereotype *>");
    qRegisterMetaType<QSet<QStringExpression *>>("QSet<QStringExpression *>");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QStructuralFeature *>");
    qRegisterMetaType<QSet<QStructuredActivityNode *>>("QSet<QStructuredActivityNode *>");
    qRegisterMetaType<QSet<QSubstitution *>>("QSet<QSubstitution *>");
    qRegisterMetaType<QSet<QTemplateBinding *>>("QSet<QTemplateBinding *>");
    qRegisterMetaType<QSet<QTemplateParameter *>>("QSet<QTemplateParameter *>");
    qRegisterMetaType<QSet<QTemplateParameterSubstitution *>>("QSet<QTemplateParameterSubstitution *>");
    qRegisterMetaType<QSet<QTemplateSignature *>>("QSet<QTemplateSignature *>");
    qRegisterMetaType<QSet<QTemplateableElement *>>("QSet<QTemplateableElement *>");
    qRegisterMetaType<QSet<QTimeExpression *>>("QSet<QTimeExpression *>");
    qRegisterMetaType<QSet<QTimeInterval *>>("QSet<QTimeInterval *>");
    qRegisterMetaType<QSet<QTransition *>>("QSet<QTransition *>");
    qRegisterMetaType<QSet<QTrigger *>>("QSet<QTrigger *>");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QSet<QUseCase *>>("QSet<QUseCase *>");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QSet<QVariable *>>("QSet<QVariable *>");
    qRegisterMetaType<QSet<QVertex *>>("QSet<QVertex *>");
    qRegisterMetaType<QSignal *>("QSignal *");
    qRegisterMetaType<QSlot *>("QSlot *");
    qRegisterMetaType<QState *>("QState *");
    qRegisterMetaType<QStateMachine *>("QStateMachine *");
    qRegisterMetaType<QStereotype *>("QStereotype *");
    qRegisterMetaType<QStringExpression *>("QStringExpression *");
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<QStructuredActivityNode *>("QStructuredActivityNode *");
    qRegisterMetaType<QSubstitution *>("QSubstitution *");
    qRegisterMetaType<QTemplateBinding *>("QTemplateBinding *");
    qRegisterMetaType<QTemplateParameter *>("QTemplateParameter *");
    qRegisterMetaType<QTemplateParameterSubstitution *>("QTemplateParameterSubstitution *");
    qRegisterMetaType<QTemplateSignature *>("QTemplateSignature *");
    qRegisterMetaType<QTemplateableElement *>("QTemplateableElement *");
    qRegisterMetaType<QTimeExpression *>("QTimeExpression *");
    qRegisterMetaType<QTimeInterval *>("QTimeInterval *");
    qRegisterMetaType<QTransition *>("QTransition *");
    qRegisterMetaType<QTrigger *>("QTrigger *");
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QUseCase *>("QUseCase *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QVariable *>("QVariable *");
    qRegisterMetaType<QVertex *>("QVertex *");
}

QT_END_NAMESPACE_QTUML

