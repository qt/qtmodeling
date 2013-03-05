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

QT_BEGIN_NAMESPACE

namespace QtMof
{

void QMofMetaModel::init(QScriptEngine *scriptEngine)
{
    qRegisterMetaType<QArgument *>();
    qRegisterMetaType<QList<QArgument *>>();
    qRegisterMetaType<QSet<QArgument *>>();
    qRegisterMetaType<QAssociation *>();
    qRegisterMetaType<QList<QAssociation *>>();
    qRegisterMetaType<QSet<QAssociation *>>();
    qRegisterMetaType<QBehavioralFeature *>();
    qRegisterMetaType<QList<QBehavioralFeature *>>();
    qRegisterMetaType<QSet<QBehavioralFeature *>>();
    qRegisterMetaType<QClass *>();
    qRegisterMetaType<QList<QClass *>>();
    qRegisterMetaType<QSet<QClass *>>();
    qRegisterMetaType<QClassifier *>();
    qRegisterMetaType<QList<QClassifier *>>();
    qRegisterMetaType<QSet<QClassifier *>>();
    qRegisterMetaType<QComment *>();
    qRegisterMetaType<QList<QComment *>>();
    qRegisterMetaType<QSet<QComment *>>();
    qRegisterMetaType<QConstraint *>();
    qRegisterMetaType<QList<QConstraint *>>();
    qRegisterMetaType<QSet<QConstraint *>>();
    qRegisterMetaType<QDataType *>();
    qRegisterMetaType<QList<QDataType *>>();
    qRegisterMetaType<QSet<QDataType *>>();
    qRegisterMetaType<QDirectedRelationship *>();
    qRegisterMetaType<QList<QDirectedRelationship *>>();
    qRegisterMetaType<QSet<QDirectedRelationship *>>();
    qRegisterMetaType<QElement *>();
    qRegisterMetaType<QList<QElement *>>();
    qRegisterMetaType<QSet<QElement *>>();
    qRegisterMetaType<QElementImport *>();
    qRegisterMetaType<QList<QElementImport *>>();
    qRegisterMetaType<QSet<QElementImport *>>();
    qRegisterMetaType<QEnumeration *>();
    qRegisterMetaType<QList<QEnumeration *>>();
    qRegisterMetaType<QSet<QEnumeration *>>();
    qRegisterMetaType<QEnumerationLiteral *>();
    qRegisterMetaType<QList<QEnumerationLiteral *>>();
    qRegisterMetaType<QSet<QEnumerationLiteral *>>();
    qRegisterMetaType<QException *>();
    qRegisterMetaType<QList<QException *>>();
    qRegisterMetaType<QSet<QException *>>();
    qRegisterMetaType<QExpression *>();
    qRegisterMetaType<QList<QExpression *>>();
    qRegisterMetaType<QSet<QExpression *>>();
    qRegisterMetaType<QExtent *>();
    qRegisterMetaType<QList<QExtent *>>();
    qRegisterMetaType<QSet<QExtent *>>();
    qRegisterMetaType<QFactory *>();
    qRegisterMetaType<QList<QFactory *>>();
    qRegisterMetaType<QSet<QFactory *>>();
    qRegisterMetaType<QFeature *>();
    qRegisterMetaType<QList<QFeature *>>();
    qRegisterMetaType<QSet<QFeature *>>();
    qRegisterMetaType<QGeneralization *>();
    qRegisterMetaType<QList<QGeneralization *>>();
    qRegisterMetaType<QSet<QGeneralization *>>();
    qRegisterMetaType<QInstanceSpecification *>();
    qRegisterMetaType<QList<QInstanceSpecification *>>();
    qRegisterMetaType<QSet<QInstanceSpecification *>>();
    qRegisterMetaType<QInstanceValue *>();
    qRegisterMetaType<QList<QInstanceValue *>>();
    qRegisterMetaType<QSet<QInstanceValue *>>();
    qRegisterMetaType<QLink *>();
    qRegisterMetaType<QList<QLink *>>();
    qRegisterMetaType<QSet<QLink *>>();
    qRegisterMetaType<QLiteralBoolean *>();
    qRegisterMetaType<QList<QLiteralBoolean *>>();
    qRegisterMetaType<QSet<QLiteralBoolean *>>();
    qRegisterMetaType<QLiteralInteger *>();
    qRegisterMetaType<QList<QLiteralInteger *>>();
    qRegisterMetaType<QSet<QLiteralInteger *>>();
    qRegisterMetaType<QLiteralNull *>();
    qRegisterMetaType<QList<QLiteralNull *>>();
    qRegisterMetaType<QSet<QLiteralNull *>>();
    qRegisterMetaType<QLiteralReal *>();
    qRegisterMetaType<QList<QLiteralReal *>>();
    qRegisterMetaType<QSet<QLiteralReal *>>();
    qRegisterMetaType<QLiteralSpecification *>();
    qRegisterMetaType<QList<QLiteralSpecification *>>();
    qRegisterMetaType<QSet<QLiteralSpecification *>>();
    qRegisterMetaType<QLiteralString *>();
    qRegisterMetaType<QList<QLiteralString *>>();
    qRegisterMetaType<QSet<QLiteralString *>>();
    qRegisterMetaType<QLiteralUnlimitedNatural *>();
    qRegisterMetaType<QList<QLiteralUnlimitedNatural *>>();
    qRegisterMetaType<QSet<QLiteralUnlimitedNatural *>>();
    qRegisterMetaType<QMofObject *>();
    qRegisterMetaType<QList<QMofObject *>>();
    qRegisterMetaType<QSet<QMofObject *>>();
    qRegisterMetaType<QMultiplicityElement *>();
    qRegisterMetaType<QList<QMultiplicityElement *>>();
    qRegisterMetaType<QSet<QMultiplicityElement *>>();
    qRegisterMetaType<QNamedElement *>();
    qRegisterMetaType<QList<QNamedElement *>>();
    qRegisterMetaType<QSet<QNamedElement *>>();
    qRegisterMetaType<QNamespace *>();
    qRegisterMetaType<QList<QNamespace *>>();
    qRegisterMetaType<QSet<QNamespace *>>();
    qRegisterMetaType<QOpaqueExpression *>();
    qRegisterMetaType<QList<QOpaqueExpression *>>();
    qRegisterMetaType<QSet<QOpaqueExpression *>>();
    qRegisterMetaType<QOperation *>();
    qRegisterMetaType<QList<QOperation *>>();
    qRegisterMetaType<QSet<QOperation *>>();
    qRegisterMetaType<QPackage *>();
    qRegisterMetaType<QList<QPackage *>>();
    qRegisterMetaType<QSet<QPackage *>>();
    qRegisterMetaType<QPackageableElement *>();
    qRegisterMetaType<QList<QPackageableElement *>>();
    qRegisterMetaType<QSet<QPackageableElement *>>();
    qRegisterMetaType<QPackageImport *>();
    qRegisterMetaType<QList<QPackageImport *>>();
    qRegisterMetaType<QSet<QPackageImport *>>();
    qRegisterMetaType<QPackageMerge *>();
    qRegisterMetaType<QList<QPackageMerge *>>();
    qRegisterMetaType<QSet<QPackageMerge *>>();
    qRegisterMetaType<QParameter *>();
    qRegisterMetaType<QList<QParameter *>>();
    qRegisterMetaType<QSet<QParameter *>>();
    qRegisterMetaType<QPrimitiveType *>();
    qRegisterMetaType<QList<QPrimitiveType *>>();
    qRegisterMetaType<QSet<QPrimitiveType *>>();
    qRegisterMetaType<QProperty *>();
    qRegisterMetaType<QList<QProperty *>>();
    qRegisterMetaType<QSet<QProperty *>>();
    qRegisterMetaType<QRedefinableElement *>();
    qRegisterMetaType<QList<QRedefinableElement *>>();
    qRegisterMetaType<QSet<QRedefinableElement *>>();
    qRegisterMetaType<QReflectiveCollection *>();
    qRegisterMetaType<QList<QReflectiveCollection *>>();
    qRegisterMetaType<QSet<QReflectiveCollection *>>();
    qRegisterMetaType<QReflectiveSequence *>();
    qRegisterMetaType<QList<QReflectiveSequence *>>();
    qRegisterMetaType<QSet<QReflectiveSequence *>>();
    qRegisterMetaType<QRelationship *>();
    qRegisterMetaType<QList<QRelationship *>>();
    qRegisterMetaType<QSet<QRelationship *>>();
    qRegisterMetaType<QSlot *>();
    qRegisterMetaType<QList<QSlot *>>();
    qRegisterMetaType<QSet<QSlot *>>();
    qRegisterMetaType<QStructuralFeature *>();
    qRegisterMetaType<QList<QStructuralFeature *>>();
    qRegisterMetaType<QSet<QStructuralFeature *>>();
    qRegisterMetaType<QTag *>();
    qRegisterMetaType<QList<QTag *>>();
    qRegisterMetaType<QSet<QTag *>>();
    qRegisterMetaType<QType *>();
    qRegisterMetaType<QList<QType *>>();
    qRegisterMetaType<QSet<QType *>>();
    qRegisterMetaType<QTypedElement *>();
    qRegisterMetaType<QList<QTypedElement *>>();
    qRegisterMetaType<QSet<QTypedElement *>>();
    qRegisterMetaType<QURIExtent *>();
    qRegisterMetaType<QList<QURIExtent *>>();
    qRegisterMetaType<QSet<QURIExtent *>>();
    qRegisterMetaType<QValueSpecification *>();
    qRegisterMetaType<QList<QValueSpecification *>>();
    qRegisterMetaType<QSet<QValueSpecification *>>();

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

}

QT_END_NAMESPACE

