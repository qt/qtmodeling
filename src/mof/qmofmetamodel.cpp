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

void QMofMetaModel::init()
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
    qRegisterMetaType<QPackageImport *>();
    qRegisterMetaType<QList<QPackageImport *>>();
    qRegisterMetaType<QSet<QPackageImport *>>();
    qRegisterMetaType<QPackageMerge *>();
    qRegisterMetaType<QList<QPackageMerge *>>();
    qRegisterMetaType<QSet<QPackageMerge *>>();
    qRegisterMetaType<QPackageableElement *>();
    qRegisterMetaType<QList<QPackageableElement *>>();
    qRegisterMetaType<QSet<QPackageableElement *>>();
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
    qRegisterMetaType<QXmiReader *>();
    qRegisterMetaType<QList<QXmiReader *>>();
    qRegisterMetaType<QSet<QXmiReader *>>();
    qRegisterMetaType<QXmiWriter *>();
    qRegisterMetaType<QList<QXmiWriter *>>();
    qRegisterMetaType<QSet<QXmiWriter *>>();
}

QT_END_NAMESPACE_QTMOF

