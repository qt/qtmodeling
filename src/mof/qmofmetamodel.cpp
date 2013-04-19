/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofmetamodel.h"

QT_BEGIN_NAMESPACE

void QMofMetaModel::init(QScriptEngine *scriptEngine)
{
    qRegisterMetaType<QMofArgument *>();
    qRegisterMetaType< QList<QMofArgument *> >();
    qRegisterMetaType< QSet<QMofArgument *> >();
    qRegisterMetaType<QMofAssociation *>();
    qRegisterMetaType< QList<QMofAssociation *> >();
    qRegisterMetaType< QSet<QMofAssociation *> >();
    qRegisterMetaType<QMofBehavioralFeature *>();
    qRegisterMetaType< QList<QMofBehavioralFeature *> >();
    qRegisterMetaType< QSet<QMofBehavioralFeature *> >();
    qRegisterMetaType<QMofClass *>();
    qRegisterMetaType< QList<QMofClass *> >();
    qRegisterMetaType< QSet<QMofClass *> >();
    qRegisterMetaType<QMofClassifier *>();
    qRegisterMetaType< QList<QMofClassifier *> >();
    qRegisterMetaType< QSet<QMofClassifier *> >();
    qRegisterMetaType<QMofComment *>();
    qRegisterMetaType< QList<QMofComment *> >();
    qRegisterMetaType< QSet<QMofComment *> >();
    qRegisterMetaType<QMofConstraint *>();
    qRegisterMetaType< QList<QMofConstraint *> >();
    qRegisterMetaType< QSet<QMofConstraint *> >();
    qRegisterMetaType<QMofDataType *>();
    qRegisterMetaType< QList<QMofDataType *> >();
    qRegisterMetaType< QSet<QMofDataType *> >();
    qRegisterMetaType<QMofDirectedRelationship *>();
    qRegisterMetaType< QList<QMofDirectedRelationship *> >();
    qRegisterMetaType< QSet<QMofDirectedRelationship *> >();
    qRegisterMetaType<QMofElement *>();
    qRegisterMetaType< QList<QMofElement *> >();
    qRegisterMetaType< QSet<QMofElement *> >();
    qRegisterMetaType<QMofElementImport *>();
    qRegisterMetaType< QList<QMofElementImport *> >();
    qRegisterMetaType< QSet<QMofElementImport *> >();
    qRegisterMetaType<QMofEnumeration *>();
    qRegisterMetaType< QList<QMofEnumeration *> >();
    qRegisterMetaType< QSet<QMofEnumeration *> >();
    qRegisterMetaType<QMofEnumerationLiteral *>();
    qRegisterMetaType< QList<QMofEnumerationLiteral *> >();
    qRegisterMetaType< QSet<QMofEnumerationLiteral *> >();
    qRegisterMetaType<QMofException *>();
    qRegisterMetaType< QList<QMofException *> >();
    qRegisterMetaType< QSet<QMofException *> >();
    qRegisterMetaType<QMofExpression *>();
    qRegisterMetaType< QList<QMofExpression *> >();
    qRegisterMetaType< QSet<QMofExpression *> >();
    qRegisterMetaType<QMofExtent *>();
    qRegisterMetaType< QList<QMofExtent *> >();
    qRegisterMetaType< QSet<QMofExtent *> >();
    qRegisterMetaType<QMofFactory *>();
    qRegisterMetaType< QList<QMofFactory *> >();
    qRegisterMetaType< QSet<QMofFactory *> >();
    qRegisterMetaType<QMofFeature *>();
    qRegisterMetaType< QList<QMofFeature *> >();
    qRegisterMetaType< QSet<QMofFeature *> >();
    qRegisterMetaType<QMofGeneralization *>();
    qRegisterMetaType< QList<QMofGeneralization *> >();
    qRegisterMetaType< QSet<QMofGeneralization *> >();
    qRegisterMetaType<QMofInstanceSpecification *>();
    qRegisterMetaType< QList<QMofInstanceSpecification *> >();
    qRegisterMetaType< QSet<QMofInstanceSpecification *> >();
    qRegisterMetaType<QMofInstanceValue *>();
    qRegisterMetaType< QList<QMofInstanceValue *> >();
    qRegisterMetaType< QSet<QMofInstanceValue *> >();
    qRegisterMetaType<QMofLink *>();
    qRegisterMetaType< QList<QMofLink *> >();
    qRegisterMetaType< QSet<QMofLink *> >();
    qRegisterMetaType<QMofLiteralBoolean *>();
    qRegisterMetaType< QList<QMofLiteralBoolean *> >();
    qRegisterMetaType< QSet<QMofLiteralBoolean *> >();
    qRegisterMetaType<QMofLiteralInteger *>();
    qRegisterMetaType< QList<QMofLiteralInteger *> >();
    qRegisterMetaType< QSet<QMofLiteralInteger *> >();
    qRegisterMetaType<QMofLiteralNull *>();
    qRegisterMetaType< QList<QMofLiteralNull *> >();
    qRegisterMetaType< QSet<QMofLiteralNull *> >();
    qRegisterMetaType<QMofLiteralReal *>();
    qRegisterMetaType< QList<QMofLiteralReal *> >();
    qRegisterMetaType< QSet<QMofLiteralReal *> >();
    qRegisterMetaType<QMofLiteralSpecification *>();
    qRegisterMetaType< QList<QMofLiteralSpecification *> >();
    qRegisterMetaType< QSet<QMofLiteralSpecification *> >();
    qRegisterMetaType<QMofLiteralString *>();
    qRegisterMetaType< QList<QMofLiteralString *> >();
    qRegisterMetaType< QSet<QMofLiteralString *> >();
    qRegisterMetaType<QMofLiteralUnlimitedNatural *>();
    qRegisterMetaType< QList<QMofLiteralUnlimitedNatural *> >();
    qRegisterMetaType< QSet<QMofLiteralUnlimitedNatural *> >();
    qRegisterMetaType<QMofObject *>();
    qRegisterMetaType< QList<QMofObject *> >();
    qRegisterMetaType< QSet<QMofObject *> >();
    qRegisterMetaType<QMofMultiplicityElement *>();
    qRegisterMetaType< QList<QMofMultiplicityElement *> >();
    qRegisterMetaType< QSet<QMofMultiplicityElement *> >();
    qRegisterMetaType<QMofNamedElement *>();
    qRegisterMetaType< QList<QMofNamedElement *> >();
    qRegisterMetaType< QSet<QMofNamedElement *> >();
    qRegisterMetaType<QMofNamespace *>();
    qRegisterMetaType< QList<QMofNamespace *> >();
    qRegisterMetaType< QSet<QMofNamespace *> >();
    qRegisterMetaType<QMofOpaqueExpression *>();
    qRegisterMetaType< QList<QMofOpaqueExpression *> >();
    qRegisterMetaType< QSet<QMofOpaqueExpression *> >();
    qRegisterMetaType<QMofOperation *>();
    qRegisterMetaType< QList<QMofOperation *> >();
    qRegisterMetaType< QSet<QMofOperation *> >();
    qRegisterMetaType<QMofPackage *>();
    qRegisterMetaType< QList<QMofPackage *> >();
    qRegisterMetaType< QSet<QMofPackage *> >();
    qRegisterMetaType<QMofPackageableElement *>();
    qRegisterMetaType< QList<QMofPackageableElement *> >();
    qRegisterMetaType< QSet<QMofPackageableElement *> >();
    qRegisterMetaType<QMofPackageImport *>();
    qRegisterMetaType< QList<QMofPackageImport *> >();
    qRegisterMetaType< QSet<QMofPackageImport *> >();
    qRegisterMetaType<QMofPackageMerge *>();
    qRegisterMetaType< QList<QMofPackageMerge *> >();
    qRegisterMetaType< QSet<QMofPackageMerge *> >();
    qRegisterMetaType<QMofParameter *>();
    qRegisterMetaType< QList<QMofParameter *> >();
    qRegisterMetaType< QSet<QMofParameter *> >();
    qRegisterMetaType<QMofPrimitiveType *>();
    qRegisterMetaType< QList<QMofPrimitiveType *> >();
    qRegisterMetaType< QSet<QMofPrimitiveType *> >();
    qRegisterMetaType<QMofProperty *>();
    qRegisterMetaType< QList<QMofProperty *> >();
    qRegisterMetaType< QSet<QMofProperty *> >();
    qRegisterMetaType<QMofRedefinableElement *>();
    qRegisterMetaType< QList<QMofRedefinableElement *> >();
    qRegisterMetaType< QSet<QMofRedefinableElement *> >();
    qRegisterMetaType<QMofReflectiveCollection *>();
    qRegisterMetaType< QList<QMofReflectiveCollection *> >();
    qRegisterMetaType< QSet<QMofReflectiveCollection *> >();
    qRegisterMetaType<QMofReflectiveSequence *>();
    qRegisterMetaType< QList<QMofReflectiveSequence *> >();
    qRegisterMetaType< QSet<QMofReflectiveSequence *> >();
    qRegisterMetaType<QMofRelationship *>();
    qRegisterMetaType< QList<QMofRelationship *> >();
    qRegisterMetaType< QSet<QMofRelationship *> >();
    qRegisterMetaType<QMofSlot *>();
    qRegisterMetaType< QList<QMofSlot *> >();
    qRegisterMetaType< QSet<QMofSlot *> >();
    qRegisterMetaType<QMofStructuralFeature *>();
    qRegisterMetaType< QList<QMofStructuralFeature *> >();
    qRegisterMetaType< QSet<QMofStructuralFeature *> >();
    qRegisterMetaType<QMofTag *>();
    qRegisterMetaType< QList<QMofTag *> >();
    qRegisterMetaType< QSet<QMofTag *> >();
    qRegisterMetaType<QMofType *>();
    qRegisterMetaType< QList<QMofType *> >();
    qRegisterMetaType< QSet<QMofType *> >();
    qRegisterMetaType<QMofTypedElement *>();
    qRegisterMetaType< QList<QMofTypedElement *> >();
    qRegisterMetaType< QSet<QMofTypedElement *> >();
    qRegisterMetaType<QMofURIExtent *>();
    qRegisterMetaType< QList<QMofURIExtent *> >();
    qRegisterMetaType< QSet<QMofURIExtent *> >();
    qRegisterMetaType<QMofValueSpecification *>();
    qRegisterMetaType< QList<QMofValueSpecification *> >();
    qRegisterMetaType< QSet<QMofValueSpecification *> >();

    if (scriptEngine) {
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofArgument>, scriptValueToQSet<QMofArgument>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofArgument>, scriptValueToQList<QMofArgument>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofAssociation>, scriptValueToQSet<QMofAssociation>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofAssociation>, scriptValueToQList<QMofAssociation>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofBehavioralFeature>, scriptValueToQSet<QMofBehavioralFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofBehavioralFeature>, scriptValueToQList<QMofBehavioralFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofClass>, scriptValueToQSet<QMofClass>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofClass>, scriptValueToQList<QMofClass>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofClassifier>, scriptValueToQSet<QMofClassifier>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofClassifier>, scriptValueToQList<QMofClassifier>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofComment>, scriptValueToQSet<QMofComment>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofComment>, scriptValueToQList<QMofComment>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofConstraint>, scriptValueToQSet<QMofConstraint>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofConstraint>, scriptValueToQList<QMofConstraint>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofDataType>, scriptValueToQSet<QMofDataType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofDataType>, scriptValueToQList<QMofDataType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofDirectedRelationship>, scriptValueToQSet<QMofDirectedRelationship>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofDirectedRelationship>, scriptValueToQList<QMofDirectedRelationship>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofElement>, scriptValueToQSet<QMofElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofElement>, scriptValueToQList<QMofElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofElementImport>, scriptValueToQSet<QMofElementImport>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofElementImport>, scriptValueToQList<QMofElementImport>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofEnumeration>, scriptValueToQSet<QMofEnumeration>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofEnumeration>, scriptValueToQList<QMofEnumeration>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofEnumerationLiteral>, scriptValueToQSet<QMofEnumerationLiteral>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofEnumerationLiteral>, scriptValueToQList<QMofEnumerationLiteral>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofException>, scriptValueToQSet<QMofException>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofException>, scriptValueToQList<QMofException>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofExpression>, scriptValueToQSet<QMofExpression>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofExpression>, scriptValueToQList<QMofExpression>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofExtent>, scriptValueToQSet<QMofExtent>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofExtent>, scriptValueToQList<QMofExtent>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofFactory>, scriptValueToQSet<QMofFactory>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofFactory>, scriptValueToQList<QMofFactory>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofFeature>, scriptValueToQSet<QMofFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofFeature>, scriptValueToQList<QMofFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofGeneralization>, scriptValueToQSet<QMofGeneralization>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofGeneralization>, scriptValueToQList<QMofGeneralization>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofInstanceSpecification>, scriptValueToQSet<QMofInstanceSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofInstanceSpecification>, scriptValueToQList<QMofInstanceSpecification>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofInstanceValue>, scriptValueToQSet<QMofInstanceValue>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofInstanceValue>, scriptValueToQList<QMofInstanceValue>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLink>, scriptValueToQSet<QMofLink>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLink>, scriptValueToQList<QMofLink>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralBoolean>, scriptValueToQSet<QMofLiteralBoolean>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralBoolean>, scriptValueToQList<QMofLiteralBoolean>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralInteger>, scriptValueToQSet<QMofLiteralInteger>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralInteger>, scriptValueToQList<QMofLiteralInteger>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralNull>, scriptValueToQSet<QMofLiteralNull>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralNull>, scriptValueToQList<QMofLiteralNull>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralReal>, scriptValueToQSet<QMofLiteralReal>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralReal>, scriptValueToQList<QMofLiteralReal>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralSpecification>, scriptValueToQSet<QMofLiteralSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralSpecification>, scriptValueToQList<QMofLiteralSpecification>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralString>, scriptValueToQSet<QMofLiteralString>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralString>, scriptValueToQList<QMofLiteralString>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofLiteralUnlimitedNatural>, scriptValueToQSet<QMofLiteralUnlimitedNatural>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofLiteralUnlimitedNatural>, scriptValueToQList<QMofLiteralUnlimitedNatural>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofObject>, scriptValueToQSet<QMofObject>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofObject>, scriptValueToQList<QMofObject>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofMultiplicityElement>, scriptValueToQSet<QMofMultiplicityElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofMultiplicityElement>, scriptValueToQList<QMofMultiplicityElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofNamedElement>, scriptValueToQSet<QMofNamedElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofNamedElement>, scriptValueToQList<QMofNamedElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofNamespace>, scriptValueToQSet<QMofNamespace>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofNamespace>, scriptValueToQList<QMofNamespace>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofOpaqueExpression>, scriptValueToQSet<QMofOpaqueExpression>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofOpaqueExpression>, scriptValueToQList<QMofOpaqueExpression>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofOperation>, scriptValueToQSet<QMofOperation>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofOperation>, scriptValueToQList<QMofOperation>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofPackage>, scriptValueToQSet<QMofPackage>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofPackage>, scriptValueToQList<QMofPackage>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofPackageableElement>, scriptValueToQSet<QMofPackageableElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofPackageableElement>, scriptValueToQList<QMofPackageableElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofPackageImport>, scriptValueToQSet<QMofPackageImport>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofPackageImport>, scriptValueToQList<QMofPackageImport>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofPackageMerge>, scriptValueToQSet<QMofPackageMerge>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofPackageMerge>, scriptValueToQList<QMofPackageMerge>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofParameter>, scriptValueToQSet<QMofParameter>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofParameter>, scriptValueToQList<QMofParameter>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofPrimitiveType>, scriptValueToQSet<QMofPrimitiveType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofPrimitiveType>, scriptValueToQList<QMofPrimitiveType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofProperty>, scriptValueToQSet<QMofProperty>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofProperty>, scriptValueToQList<QMofProperty>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofRedefinableElement>, scriptValueToQSet<QMofRedefinableElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofRedefinableElement>, scriptValueToQList<QMofRedefinableElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofReflectiveCollection>, scriptValueToQSet<QMofReflectiveCollection>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofReflectiveCollection>, scriptValueToQList<QMofReflectiveCollection>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofReflectiveSequence>, scriptValueToQSet<QMofReflectiveSequence>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofReflectiveSequence>, scriptValueToQList<QMofReflectiveSequence>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofRelationship>, scriptValueToQSet<QMofRelationship>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofRelationship>, scriptValueToQList<QMofRelationship>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofSlot>, scriptValueToQSet<QMofSlot>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofSlot>, scriptValueToQList<QMofSlot>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofStructuralFeature>, scriptValueToQSet<QMofStructuralFeature>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofStructuralFeature>, scriptValueToQList<QMofStructuralFeature>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofTag>, scriptValueToQSet<QMofTag>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofTag>, scriptValueToQList<QMofTag>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofType>, scriptValueToQSet<QMofType>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofType>, scriptValueToQList<QMofType>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofTypedElement>, scriptValueToQSet<QMofTypedElement>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofTypedElement>, scriptValueToQList<QMofTypedElement>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofURIExtent>, scriptValueToQSet<QMofURIExtent>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofURIExtent>, scriptValueToQList<QMofURIExtent>);
        qScriptRegisterMetaType(scriptEngine, qSetToScriptValue<QMofValueSpecification>, scriptValueToQSet<QMofValueSpecification>);
        qScriptRegisterMetaType(scriptEngine, qListToScriptValue<QMofValueSpecification>, scriptValueToQList<QMofValueSpecification>);
    }
}

QT_END_NAMESPACE

