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

#include "qtmofmetamodel.h"

QT_BEGIN_NAMESPACE_QTMOF

void QtMofMetaModel::init()
{
    qRegisterMetaType<QArgument *>("QArgument *");
    qRegisterMetaType<QList<QArgument *>>("QList<QArgument *>");
    qRegisterMetaType<QSet<QArgument *>>("QSet<QArgument *>");
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QBehavioralFeature *>("QBehavioralFeature *");
    qRegisterMetaType<QList<QBehavioralFeature *>>("QList<QBehavioralFeature *>");
    qRegisterMetaType<QSet<QBehavioralFeature *>>("QSet<QBehavioralFeature *>");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QComment *>("QComment *");
    qRegisterMetaType<QList<QComment *>>("QList<QComment *>");
    qRegisterMetaType<QSet<QComment *>>("QSet<QComment *>");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QDirectedRelationship *>("QDirectedRelationship *");
    qRegisterMetaType<QList<QDirectedRelationship *>>("QList<QDirectedRelationship *>");
    qRegisterMetaType<QSet<QDirectedRelationship *>>("QSet<QDirectedRelationship *>");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<QList<QElement *>>("QList<QElement *>");
    qRegisterMetaType<QSet<QElement *>>("QSet<QElement *>");
    qRegisterMetaType<QElementImport *>("QElementImport *");
    qRegisterMetaType<QList<QElementImport *>>("QList<QElementImport *>");
    qRegisterMetaType<QSet<QElementImport *>>("QSet<QElementImport *>");
    qRegisterMetaType<QEnumeration *>("QEnumeration *");
    qRegisterMetaType<QList<QEnumeration *>>("QList<QEnumeration *>");
    qRegisterMetaType<QSet<QEnumeration *>>("QSet<QEnumeration *>");
    qRegisterMetaType<QEnumerationLiteral *>("QEnumerationLiteral *");
    qRegisterMetaType<QList<QEnumerationLiteral *>>("QList<QEnumerationLiteral *>");
    qRegisterMetaType<QSet<QEnumerationLiteral *>>("QSet<QEnumerationLiteral *>");
    qRegisterMetaType<QException *>("QException *");
    qRegisterMetaType<QList<QException *>>("QList<QException *>");
    qRegisterMetaType<QSet<QException *>>("QSet<QException *>");
    qRegisterMetaType<QExpression *>("QExpression *");
    qRegisterMetaType<QList<QExpression *>>("QList<QExpression *>");
    qRegisterMetaType<QSet<QExpression *>>("QSet<QExpression *>");
    qRegisterMetaType<QExtent *>("QExtent *");
    qRegisterMetaType<QList<QExtent *>>("QList<QExtent *>");
    qRegisterMetaType<QSet<QExtent *>>("QSet<QExtent *>");
    qRegisterMetaType<QFactory *>("QFactory *");
    qRegisterMetaType<QList<QFactory *>>("QList<QFactory *>");
    qRegisterMetaType<QSet<QFactory *>>("QSet<QFactory *>");
    qRegisterMetaType<QFeature *>("QFeature *");
    qRegisterMetaType<QList<QFeature *>>("QList<QFeature *>");
    qRegisterMetaType<QSet<QFeature *>>("QSet<QFeature *>");
    qRegisterMetaType<QGeneralization *>("QGeneralization *");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QGeneralization *>");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QGeneralization *>");
    qRegisterMetaType<QInstanceSpecification *>("QInstanceSpecification *");
    qRegisterMetaType<QList<QInstanceSpecification *>>("QList<QInstanceSpecification *>");
    qRegisterMetaType<QSet<QInstanceSpecification *>>("QSet<QInstanceSpecification *>");
    qRegisterMetaType<QInstanceValue *>("QInstanceValue *");
    qRegisterMetaType<QList<QInstanceValue *>>("QList<QInstanceValue *>");
    qRegisterMetaType<QSet<QInstanceValue *>>("QSet<QInstanceValue *>");
    qRegisterMetaType<QLink *>("QLink *");
    qRegisterMetaType<QList<QLink *>>("QList<QLink *>");
    qRegisterMetaType<QSet<QLink *>>("QSet<QLink *>");
    qRegisterMetaType<QLiteralBoolean *>("QLiteralBoolean *");
    qRegisterMetaType<QList<QLiteralBoolean *>>("QList<QLiteralBoolean *>");
    qRegisterMetaType<QSet<QLiteralBoolean *>>("QSet<QLiteralBoolean *>");
    qRegisterMetaType<QLiteralInteger *>("QLiteralInteger *");
    qRegisterMetaType<QList<QLiteralInteger *>>("QList<QLiteralInteger *>");
    qRegisterMetaType<QSet<QLiteralInteger *>>("QSet<QLiteralInteger *>");
    qRegisterMetaType<QLiteralNull *>("QLiteralNull *");
    qRegisterMetaType<QList<QLiteralNull *>>("QList<QLiteralNull *>");
    qRegisterMetaType<QSet<QLiteralNull *>>("QSet<QLiteralNull *>");
    qRegisterMetaType<QLiteralReal *>("QLiteralReal *");
    qRegisterMetaType<QList<QLiteralReal *>>("QList<QLiteralReal *>");
    qRegisterMetaType<QSet<QLiteralReal *>>("QSet<QLiteralReal *>");
    qRegisterMetaType<QLiteralSpecification *>("QLiteralSpecification *");
    qRegisterMetaType<QList<QLiteralSpecification *>>("QList<QLiteralSpecification *>");
    qRegisterMetaType<QSet<QLiteralSpecification *>>("QSet<QLiteralSpecification *>");
    qRegisterMetaType<QLiteralString *>("QLiteralString *");
    qRegisterMetaType<QList<QLiteralString *>>("QList<QLiteralString *>");
    qRegisterMetaType<QSet<QLiteralString *>>("QSet<QLiteralString *>");
    qRegisterMetaType<QLiteralUnlimitedNatural *>("QLiteralUnlimitedNatural *");
    qRegisterMetaType<QList<QLiteralUnlimitedNatural *>>("QList<QLiteralUnlimitedNatural *>");
    qRegisterMetaType<QSet<QLiteralUnlimitedNatural *>>("QSet<QLiteralUnlimitedNatural *>");
    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<QList<QMofObject *>>("QList<QMofObject *>");
    qRegisterMetaType<QSet<QMofObject *>>("QSet<QMofObject *>");
    qRegisterMetaType<QMultiplicityElement *>("QMultiplicityElement *");
    qRegisterMetaType<QList<QMultiplicityElement *>>("QList<QMultiplicityElement *>");
    qRegisterMetaType<QSet<QMultiplicityElement *>>("QSet<QMultiplicityElement *>");
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<QList<QNamespace *>>("QList<QNamespace *>");
    qRegisterMetaType<QSet<QNamespace *>>("QSet<QNamespace *>");
    qRegisterMetaType<QOpaqueExpression *>("QOpaqueExpression *");
    qRegisterMetaType<QList<QOpaqueExpression *>>("QList<QOpaqueExpression *>");
    qRegisterMetaType<QSet<QOpaqueExpression *>>("QSet<QOpaqueExpression *>");
    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<QList<QPackage *>>("QList<QPackage *>");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QPackage *>");
    qRegisterMetaType<QPackageImport *>("QPackageImport *");
    qRegisterMetaType<QList<QPackageImport *>>("QList<QPackageImport *>");
    qRegisterMetaType<QSet<QPackageImport *>>("QSet<QPackageImport *>");
    qRegisterMetaType<QPackageMerge *>("QPackageMerge *");
    qRegisterMetaType<QList<QPackageMerge *>>("QList<QPackageMerge *>");
    qRegisterMetaType<QSet<QPackageMerge *>>("QSet<QPackageMerge *>");
    qRegisterMetaType<QPackageableElement *>("QPackageableElement *");
    qRegisterMetaType<QList<QPackageableElement *>>("QList<QPackageableElement *>");
    qRegisterMetaType<QSet<QPackageableElement *>>("QSet<QPackageableElement *>");
    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QPrimitiveType *>("QPrimitiveType *");
    qRegisterMetaType<QList<QPrimitiveType *>>("QList<QPrimitiveType *>");
    qRegisterMetaType<QSet<QPrimitiveType *>>("QSet<QPrimitiveType *>");
    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QRedefinableElement *>("QRedefinableElement *");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QRedefinableElement *>");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QRedefinableElement *>");
    qRegisterMetaType<QReflectiveCollection *>("QReflectiveCollection *");
    qRegisterMetaType<QList<QReflectiveCollection *>>("QList<QReflectiveCollection *>");
    qRegisterMetaType<QSet<QReflectiveCollection *>>("QSet<QReflectiveCollection *>");
    qRegisterMetaType<QReflectiveSequence *>("QReflectiveSequence *");
    qRegisterMetaType<QList<QReflectiveSequence *>>("QList<QReflectiveSequence *>");
    qRegisterMetaType<QSet<QReflectiveSequence *>>("QSet<QReflectiveSequence *>");
    qRegisterMetaType<QRelationship *>("QRelationship *");
    qRegisterMetaType<QList<QRelationship *>>("QList<QRelationship *>");
    qRegisterMetaType<QSet<QRelationship *>>("QSet<QRelationship *>");
    qRegisterMetaType<QSlot *>("QSlot *");
    qRegisterMetaType<QList<QSlot *>>("QList<QSlot *>");
    qRegisterMetaType<QSet<QSlot *>>("QSet<QSlot *>");
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QStructuralFeature *>");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QStructuralFeature *>");
    qRegisterMetaType<QTag *>("QTag *");
    qRegisterMetaType<QList<QTag *>>("QList<QTag *>");
    qRegisterMetaType<QSet<QTag *>>("QSet<QTag *>");
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QTypedElement *>("QTypedElement *");
    qRegisterMetaType<QList<QTypedElement *>>("QList<QTypedElement *>");
    qRegisterMetaType<QSet<QTypedElement *>>("QSet<QTypedElement *>");
    qRegisterMetaType<QURIExtent *>("QURIExtent *");
    qRegisterMetaType<QList<QURIExtent *>>("QList<QURIExtent *>");
    qRegisterMetaType<QSet<QURIExtent *>>("QSet<QURIExtent *>");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QXmiReader *>("QXmiReader *");
    qRegisterMetaType<QList<QXmiReader *>>("QList<QXmiReader *>");
    qRegisterMetaType<QSet<QXmiReader *>>("QSet<QXmiReader *>");
    qRegisterMetaType<QXmiWriter *>("QXmiWriter *");
    qRegisterMetaType<QList<QXmiWriter *>>("QList<QXmiWriter *>");
    qRegisterMetaType<QSet<QXmiWriter *>>("QSet<QXmiWriter *>");
}

QT_END_NAMESPACE_QTMOF

