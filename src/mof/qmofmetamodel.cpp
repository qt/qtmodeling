/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofmetamodel.h"

QT_BEGIN_NAMESPACE_QTMOF

void QMofMetaModel::init(QScriptEngine *scriptEngine)
{
    qRegisterMetaType<QArgument *>("QtMof::QArgument *");
    qRegisterMetaType<QList<QArgument *>>("QList<QtMof::QArgument *>");
    qRegisterMetaType<QSet<QArgument *>>("QSet<QtMof::QArgument *>");
    qRegisterMetaType<QAssociation *>("QtMof::QAssociation *");
    qRegisterMetaType<QList<QAssociation *>>("QList<QtMof::QAssociation *>");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QtMof::QAssociation *>");
    qRegisterMetaType<QBehavioralFeature *>("QtMof::QBehavioralFeature *");
    qRegisterMetaType<QList<QBehavioralFeature *>>("QList<QtMof::QBehavioralFeature *>");
    qRegisterMetaType<QSet<QBehavioralFeature *>>("QSet<QtMof::QBehavioralFeature *>");
    qMetaTypeId<QClass *>();
    qMetaTypeId<QList<QClass *>>();
    qMetaTypeId<QSet<QClass *>>();
    qRegisterMetaType<QClass *>("QtMof::QClass *");
    qRegisterMetaType<QList<QClass *>>("QList<QtMof::QClass *>");
    qRegisterMetaType<QSet<QClass *>>("QSet<QtMof::QClass *>");
    qRegisterMetaType<QClassifier *>("QtMof::QClassifier *");
    qRegisterMetaType<QList<QClassifier *>>("QList<QtMof::QClassifier *>");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QtMof::QClassifier *>");
    qRegisterMetaType<QComment *>("QtMof::QComment *");
    qRegisterMetaType<QList<QComment *>>("QList<QtMof::QComment *>");
    qRegisterMetaType<QSet<QComment *>>("QSet<QtMof::QComment *>");
    qRegisterMetaType<QConstraint *>("QtMof::QConstraint *");
    qRegisterMetaType<QList<QConstraint *>>("QList<QtMof::QConstraint *>");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QtMof::QConstraint *>");
    qRegisterMetaType<QDataType *>("QtMof::QDataType *");
    qRegisterMetaType<QList<QDataType *>>("QList<QtMof::QDataType *>");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QtMof::QDataType *>");
    qRegisterMetaType<QDirectedRelationship *>("QtMof::QDirectedRelationship *");
    qRegisterMetaType<QList<QDirectedRelationship *>>("QList<QtMof::QDirectedRelationship *>");
    qRegisterMetaType<QSet<QDirectedRelationship *>>("QSet<QtMof::QDirectedRelationship *>");
    qRegisterMetaType<QElement *>("QtMof::QElement *");
    qRegisterMetaType<QList<QElement *>>("QList<QtMof::QElement *>");
    qRegisterMetaType<QSet<QElement *>>("QSet<QtMof::QElement *>");
    qRegisterMetaType<QElementImport *>("QtMof::QElementImport *");
    qRegisterMetaType<QList<QElementImport *>>("QList<QtMof::QElementImport *>");
    qRegisterMetaType<QSet<QElementImport *>>("QSet<QtMof::QElementImport *>");
    qRegisterMetaType<QEnumeration *>("QtMof::QEnumeration *");
    qRegisterMetaType<QList<QEnumeration *>>("QList<QtMof::QEnumeration *>");
    qRegisterMetaType<QSet<QEnumeration *>>("QSet<QtMof::QEnumeration *>");
    qRegisterMetaType<QEnumerationLiteral *>("QtMof::QEnumerationLiteral *");
    qRegisterMetaType<QList<QEnumerationLiteral *>>("QList<QtMof::QEnumerationLiteral *>");
    qRegisterMetaType<QSet<QEnumerationLiteral *>>("QSet<QtMof::QEnumerationLiteral *>");
    qRegisterMetaType<QException *>("QtMof::QException *");
    qRegisterMetaType<QList<QException *>>("QList<QtMof::QException *>");
    qRegisterMetaType<QSet<QException *>>("QSet<QtMof::QException *>");
    qRegisterMetaType<QExpression *>("QtMof::QExpression *");
    qRegisterMetaType<QList<QExpression *>>("QList<QtMof::QExpression *>");
    qRegisterMetaType<QSet<QExpression *>>("QSet<QtMof::QExpression *>");
    qRegisterMetaType<QExtent *>("QtMof::QExtent *");
    qRegisterMetaType<QList<QExtent *>>("QList<QtMof::QExtent *>");
    qRegisterMetaType<QSet<QExtent *>>("QSet<QtMof::QExtent *>");
    qRegisterMetaType<QFactory *>("QtMof::QFactory *");
    qRegisterMetaType<QList<QFactory *>>("QList<QtMof::QFactory *>");
    qRegisterMetaType<QSet<QFactory *>>("QSet<QtMof::QFactory *>");
    qRegisterMetaType<QFeature *>("QtMof::QFeature *");
    qRegisterMetaType<QList<QFeature *>>("QList<QtMof::QFeature *>");
    qRegisterMetaType<QSet<QFeature *>>("QSet<QtMof::QFeature *>");
    qRegisterMetaType<QGeneralization *>("QtMof::QGeneralization *");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QtMof::QGeneralization *>");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QtMof::QGeneralization *>");
    qRegisterMetaType<QInstanceSpecification *>("QtMof::QInstanceSpecification *");
    qRegisterMetaType<QList<QInstanceSpecification *>>("QList<QtMof::QInstanceSpecification *>");
    qRegisterMetaType<QSet<QInstanceSpecification *>>("QSet<QtMof::QInstanceSpecification *>");
    qRegisterMetaType<QInstanceValue *>("QtMof::QInstanceValue *");
    qRegisterMetaType<QList<QInstanceValue *>>("QList<QtMof::QInstanceValue *>");
    qRegisterMetaType<QSet<QInstanceValue *>>("QSet<QtMof::QInstanceValue *>");
    qRegisterMetaType<QLink *>("QtMof::QLink *");
    qRegisterMetaType<QList<QLink *>>("QList<QtMof::QLink *>");
    qRegisterMetaType<QSet<QLink *>>("QSet<QtMof::QLink *>");
    qRegisterMetaType<QLiteralBoolean *>("QtMof::QLiteralBoolean *");
    qRegisterMetaType<QList<QLiteralBoolean *>>("QList<QtMof::QLiteralBoolean *>");
    qRegisterMetaType<QSet<QLiteralBoolean *>>("QSet<QtMof::QLiteralBoolean *>");
    qRegisterMetaType<QLiteralInteger *>("QtMof::QLiteralInteger *");
    qRegisterMetaType<QList<QLiteralInteger *>>("QList<QtMof::QLiteralInteger *>");
    qRegisterMetaType<QSet<QLiteralInteger *>>("QSet<QtMof::QLiteralInteger *>");
    qRegisterMetaType<QLiteralNull *>("QtMof::QLiteralNull *");
    qRegisterMetaType<QList<QLiteralNull *>>("QList<QtMof::QLiteralNull *>");
    qRegisterMetaType<QSet<QLiteralNull *>>("QSet<QtMof::QLiteralNull *>");
    qRegisterMetaType<QLiteralReal *>("QtMof::QLiteralReal *");
    qRegisterMetaType<QList<QLiteralReal *>>("QList<QtMof::QLiteralReal *>");
    qRegisterMetaType<QSet<QLiteralReal *>>("QSet<QtMof::QLiteralReal *>");
    qRegisterMetaType<QLiteralSpecification *>("QtMof::QLiteralSpecification *");
    qRegisterMetaType<QList<QLiteralSpecification *>>("QList<QtMof::QLiteralSpecification *>");
    qRegisterMetaType<QSet<QLiteralSpecification *>>("QSet<QtMof::QLiteralSpecification *>");
    qRegisterMetaType<QLiteralString *>("QtMof::QLiteralString *");
    qRegisterMetaType<QList<QLiteralString *>>("QList<QtMof::QLiteralString *>");
    qRegisterMetaType<QSet<QLiteralString *>>("QSet<QtMof::QLiteralString *>");
    qRegisterMetaType<QLiteralUnlimitedNatural *>("QtMof::QLiteralUnlimitedNatural *");
    qRegisterMetaType<QList<QLiteralUnlimitedNatural *>>("QList<QtMof::QLiteralUnlimitedNatural *>");
    qRegisterMetaType<QSet<QLiteralUnlimitedNatural *>>("QSet<QtMof::QLiteralUnlimitedNatural *>");
    qRegisterMetaType<QMofObject *>("QtMof::QMofObject *");
    qRegisterMetaType<QList<QMofObject *>>("QList<QtMof::QMofObject *>");
    qRegisterMetaType<QSet<QMofObject *>>("QSet<QtMof::QMofObject *>");
    qRegisterMetaType<QMultiplicityElement *>("QtMof::QMultiplicityElement *");
    qRegisterMetaType<QList<QMultiplicityElement *>>("QList<QtMof::QMultiplicityElement *>");
    qRegisterMetaType<QSet<QMultiplicityElement *>>("QSet<QtMof::QMultiplicityElement *>");
    qRegisterMetaType<QNamedElement *>("QtMof::QNamedElement *");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QtMof::QNamedElement *>");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QtMof::QNamedElement *>");
    qRegisterMetaType<QNamespace *>("QtMof::QNamespace *");
    qRegisterMetaType<QList<QNamespace *>>("QList<QtMof::QNamespace *>");
    qRegisterMetaType<QSet<QNamespace *>>("QSet<QtMof::QNamespace *>");
    qRegisterMetaType<QOpaqueExpression *>("QtMof::QOpaqueExpression *");
    qRegisterMetaType<QList<QOpaqueExpression *>>("QList<QtMof::QOpaqueExpression *>");
    qRegisterMetaType<QSet<QOpaqueExpression *>>("QSet<QtMof::QOpaqueExpression *>");
    qRegisterMetaType<QOperation *>("QtMof::QOperation *");
    qRegisterMetaType<QList<QOperation *>>("QList<QtMof::QOperation *>");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QtMof::QOperation *>");
    qRegisterMetaType<QPackage *>("QtMof::QPackage *");
    qRegisterMetaType<QList<QPackage *>>("QList<QtMof::QPackage *>");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QtMof::QPackage *>");
    qRegisterMetaType<QPackageableElement *>("QtMof::QPackageableElement *");
    qRegisterMetaType<QList<QPackageableElement *>>("QList<QtMof::QPackageableElement *>");
    qRegisterMetaType<QSet<QPackageableElement *>>("QSet<QtMof::QPackageableElement *>");
    qRegisterMetaType<QPackageImport *>("QtMof::QPackageImport *");
    qRegisterMetaType<QList<QPackageImport *>>("QList<QtMof::QPackageImport *>");
    qRegisterMetaType<QSet<QPackageImport *>>("QSet<QtMof::QPackageImport *>");
    qRegisterMetaType<QPackageMerge *>("QtMof::QPackageMerge *");
    qRegisterMetaType<QList<QPackageMerge *>>("QList<QtMof::QPackageMerge *>");
    qRegisterMetaType<QSet<QPackageMerge *>>("QSet<QtMof::QPackageMerge *>");
    qRegisterMetaType<QParameter *>("QtMof::QParameter *");
    qRegisterMetaType<QList<QParameter *>>("QList<QtMof::QParameter *>");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QtMof::QParameter *>");
    qRegisterMetaType<QPrimitiveType *>("QtMof::QPrimitiveType *");
    qRegisterMetaType<QList<QPrimitiveType *>>("QList<QtMof::QPrimitiveType *>");
    qRegisterMetaType<QSet<QPrimitiveType *>>("QSet<QtMof::QPrimitiveType *>");
    qRegisterMetaType<QProperty *>("QtMof::QProperty *");
    qRegisterMetaType<QList<QProperty *>>("QList<QtMof::QProperty *>");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QtMof::QProperty *>");
    qRegisterMetaType<QRedefinableElement *>("QtMof::QRedefinableElement *");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QtMof::QRedefinableElement *>");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QtMof::QRedefinableElement *>");
    qRegisterMetaType<QReflectiveCollection *>("QtMof::QReflectiveCollection *");
    qRegisterMetaType<QList<QReflectiveCollection *>>("QList<QtMof::QReflectiveCollection *>");
    qRegisterMetaType<QSet<QReflectiveCollection *>>("QSet<QtMof::QReflectiveCollection *>");
    qRegisterMetaType<QReflectiveSequence *>("QtMof::QReflectiveSequence *");
    qRegisterMetaType<QList<QReflectiveSequence *>>("QList<QtMof::QReflectiveSequence *>");
    qRegisterMetaType<QSet<QReflectiveSequence *>>("QSet<QtMof::QReflectiveSequence *>");
    qRegisterMetaType<QRelationship *>("QtMof::QRelationship *");
    qRegisterMetaType<QList<QRelationship *>>("QList<QtMof::QRelationship *>");
    qRegisterMetaType<QSet<QRelationship *>>("QSet<QtMof::QRelationship *>");
    qRegisterMetaType<QSlot *>("QtMof::QSlot *");
    qRegisterMetaType<QList<QSlot *>>("QList<QtMof::QSlot *>");
    qRegisterMetaType<QSet<QSlot *>>("QSet<QtMof::QSlot *>");
    qRegisterMetaType<QStructuralFeature *>("QtMof::QStructuralFeature *");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QtMof::QStructuralFeature *>");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QtMof::QStructuralFeature *>");
    qRegisterMetaType<QTag *>("QtMof::QTag *");
    qRegisterMetaType<QList<QTag *>>("QList<QtMof::QTag *>");
    qRegisterMetaType<QSet<QTag *>>("QSet<QtMof::QTag *>");
    qRegisterMetaType<QType *>("QtMof::QType *");
    qRegisterMetaType<QList<QType *>>("QList<QtMof::QType *>");
    qRegisterMetaType<QSet<QType *>>("QSet<QtMof::QType *>");
    qRegisterMetaType<QTypedElement *>("QtMof::QTypedElement *");
    qRegisterMetaType<QList<QTypedElement *>>("QList<QtMof::QTypedElement *>");
    qRegisterMetaType<QSet<QTypedElement *>>("QSet<QtMof::QTypedElement *>");
    qRegisterMetaType<QURIExtent *>("QtMof::QURIExtent *");
    qRegisterMetaType<QList<QURIExtent *>>("QList<QtMof::QURIExtent *>");
    qRegisterMetaType<QSet<QURIExtent *>>("QSet<QtMof::QURIExtent *>");
    qRegisterMetaType<QValueSpecification *>("QtMof::QValueSpecification *");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QtMof::QValueSpecification *>");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QtMof::QValueSpecification *>");

    if (scriptEngine) {
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QArgument>, scriptValueToQSet<QArgument>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QArgument>, scriptValueToQList<QArgument>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QAssociation>, scriptValueToQSet<QAssociation>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QAssociation>, scriptValueToQList<QAssociation>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QBehavioralFeature>, scriptValueToQSet<QBehavioralFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QBehavioralFeature>, scriptValueToQList<QBehavioralFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QClass>, scriptValueToQSet<QClass>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QClass>, scriptValueToQList<QClass>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QClassifier>, scriptValueToQSet<QClassifier>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QClassifier>, scriptValueToQList<QClassifier>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QComment>, scriptValueToQSet<QComment>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QComment>, scriptValueToQList<QComment>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QConstraint>, scriptValueToQSet<QConstraint>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QConstraint>, scriptValueToQList<QConstraint>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QDataType>, scriptValueToQSet<QDataType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QDataType>, scriptValueToQList<QDataType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QDirectedRelationship>, scriptValueToQSet<QDirectedRelationship>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QDirectedRelationship>, scriptValueToQList<QDirectedRelationship>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QElement>, scriptValueToQSet<QElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QElement>, scriptValueToQList<QElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QElementImport>, scriptValueToQSet<QElementImport>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QElementImport>, scriptValueToQList<QElementImport>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QEnumeration>, scriptValueToQSet<QEnumeration>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QEnumeration>, scriptValueToQList<QEnumeration>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QEnumerationLiteral>, scriptValueToQSet<QEnumerationLiteral>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QEnumerationLiteral>, scriptValueToQList<QEnumerationLiteral>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QException>, scriptValueToQSet<QException>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QException>, scriptValueToQList<QException>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QExpression>, scriptValueToQSet<QExpression>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QExpression>, scriptValueToQList<QExpression>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QExtent>, scriptValueToQSet<QExtent>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QExtent>, scriptValueToQList<QExtent>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QFactory>, scriptValueToQSet<QFactory>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QFactory>, scriptValueToQList<QFactory>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QFeature>, scriptValueToQSet<QFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QFeature>, scriptValueToQList<QFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QGeneralization>, scriptValueToQSet<QGeneralization>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QGeneralization>, scriptValueToQList<QGeneralization>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QInstanceSpecification>, scriptValueToQSet<QInstanceSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QInstanceSpecification>, scriptValueToQList<QInstanceSpecification>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QInstanceValue>, scriptValueToQSet<QInstanceValue>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QInstanceValue>, scriptValueToQList<QInstanceValue>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLink>, scriptValueToQSet<QLink>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLink>, scriptValueToQList<QLink>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralBoolean>, scriptValueToQSet<QLiteralBoolean>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralBoolean>, scriptValueToQList<QLiteralBoolean>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralInteger>, scriptValueToQSet<QLiteralInteger>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralInteger>, scriptValueToQList<QLiteralInteger>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralNull>, scriptValueToQSet<QLiteralNull>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralNull>, scriptValueToQList<QLiteralNull>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralReal>, scriptValueToQSet<QLiteralReal>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralReal>, scriptValueToQList<QLiteralReal>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralSpecification>, scriptValueToQSet<QLiteralSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralSpecification>, scriptValueToQList<QLiteralSpecification>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralString>, scriptValueToQSet<QLiteralString>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralString>, scriptValueToQList<QLiteralString>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QLiteralUnlimitedNatural>, scriptValueToQSet<QLiteralUnlimitedNatural>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QLiteralUnlimitedNatural>, scriptValueToQList<QLiteralUnlimitedNatural>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofObject>, scriptValueToQSet<QMofObject>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofObject>, scriptValueToQList<QMofObject>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMultiplicityElement>, scriptValueToQSet<QMultiplicityElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMultiplicityElement>, scriptValueToQList<QMultiplicityElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QNamedElement>, scriptValueToQSet<QNamedElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QNamedElement>, scriptValueToQList<QNamedElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QNamespace>, scriptValueToQSet<QNamespace>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QNamespace>, scriptValueToQList<QNamespace>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QOpaqueExpression>, scriptValueToQSet<QOpaqueExpression>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QOpaqueExpression>, scriptValueToQList<QOpaqueExpression>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QOperation>, scriptValueToQSet<QOperation>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QOperation>, scriptValueToQList<QOperation>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QPackage>, scriptValueToQSet<QPackage>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QPackage>, scriptValueToQList<QPackage>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QPackageableElement>, scriptValueToQSet<QPackageableElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QPackageableElement>, scriptValueToQList<QPackageableElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QPackageImport>, scriptValueToQSet<QPackageImport>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QPackageImport>, scriptValueToQList<QPackageImport>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QPackageMerge>, scriptValueToQSet<QPackageMerge>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QPackageMerge>, scriptValueToQList<QPackageMerge>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QParameter>, scriptValueToQSet<QParameter>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QParameter>, scriptValueToQList<QParameter>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QPrimitiveType>, scriptValueToQSet<QPrimitiveType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QPrimitiveType>, scriptValueToQList<QPrimitiveType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QProperty>, scriptValueToQSet<QProperty>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QProperty>, scriptValueToQList<QProperty>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QRedefinableElement>, scriptValueToQSet<QRedefinableElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QRedefinableElement>, scriptValueToQList<QRedefinableElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QReflectiveCollection>, scriptValueToQSet<QReflectiveCollection>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QReflectiveCollection>, scriptValueToQList<QReflectiveCollection>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QReflectiveSequence>, scriptValueToQSet<QReflectiveSequence>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QReflectiveSequence>, scriptValueToQList<QReflectiveSequence>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QRelationship>, scriptValueToQSet<QRelationship>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QRelationship>, scriptValueToQList<QRelationship>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QSlot>, scriptValueToQSet<QSlot>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QSlot>, scriptValueToQList<QSlot>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QStructuralFeature>, scriptValueToQSet<QStructuralFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QStructuralFeature>, scriptValueToQList<QStructuralFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QTag>, scriptValueToQSet<QTag>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QTag>, scriptValueToQList<QTag>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QType>, scriptValueToQSet<QType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QType>, scriptValueToQList<QType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QTypedElement>, scriptValueToQSet<QTypedElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QTypedElement>, scriptValueToQList<QTypedElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QURIExtent>, scriptValueToQSet<QURIExtent>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QURIExtent>, scriptValueToQList<QURIExtent>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QValueSpecification>, scriptValueToQSet<QValueSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QValueSpecification>, scriptValueToQList<QValueSpecification>);
    }
}

QT_END_NAMESPACE_QTMOF

