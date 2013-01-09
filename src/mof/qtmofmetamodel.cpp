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
    qRegisterMetaType<QAssociation *>("QAssociation *");
    qRegisterMetaType<QClass *>("QClass *");
    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QComment *>("QComment *");
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QDataType *>("QDataType *");
    qRegisterMetaType<QElement *>("QElement *");
    qRegisterMetaType<QElementImport *>("QElementImport *");
    qRegisterMetaType<QEnumeration *>("QEnumeration *");
    qRegisterMetaType<QEnumerationLiteral *>("QEnumerationLiteral *");
    qRegisterMetaType<QFeature *>("QFeature *");
    qRegisterMetaType<QGeneralization *>("QGeneralization *");
    qRegisterMetaType<QInstanceSpecification *>("QInstanceSpecification *");
    qRegisterMetaType<QLink *>("QLink *");
    qRegisterMetaType<QList<QArgument *>>("QList<QArgument *>");
    qRegisterMetaType<QList<QAssociation *>>("QList<QAssociation *>");
    qRegisterMetaType<QList<QClass *>>("QList<QClass *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");
    qRegisterMetaType<QList<QComment *>>("QList<QComment *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");
    qRegisterMetaType<QList<QDataType *>>("QList<QDataType *>");
    qRegisterMetaType<QList<QElement *>>("QList<QElement *>");
    qRegisterMetaType<QList<QElementImport *>>("QList<QElementImport *>");
    qRegisterMetaType<QList<QEnumeration *>>("QList<QEnumeration *>");
    qRegisterMetaType<QList<QEnumerationLiteral *>>("QList<QEnumerationLiteral *>");
    qRegisterMetaType<QList<QFeature *>>("QList<QFeature *>");
    qRegisterMetaType<QList<QGeneralization *>>("QList<QGeneralization *>");
    qRegisterMetaType<QList<QInstanceSpecification *>>("QList<QInstanceSpecification *>");
    qRegisterMetaType<QList<QLink *>>("QList<QLink *>");
    qRegisterMetaType<QList<QMofObject *>>("QList<QMofObject *>");
    qRegisterMetaType<QList<QNamedElement *>>("QList<QNamedElement *>");
    qRegisterMetaType<QList<QNamespace *>>("QList<QNamespace *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");
    qRegisterMetaType<QList<QPackage *>>("QList<QPackage *>");
    qRegisterMetaType<QList<QPackageImport *>>("QList<QPackageImport *>");
    qRegisterMetaType<QList<QPackageMerge *>>("QList<QPackageMerge *>");
    qRegisterMetaType<QList<QPackageableElement *>>("QList<QPackageableElement *>");
    qRegisterMetaType<QList<QParameter *>>("QList<QParameter *>");
    qRegisterMetaType<QList<QProperty *>>("QList<QProperty *>");
    qRegisterMetaType<QList<QRedefinableElement *>>("QList<QRedefinableElement *>");
    qRegisterMetaType<QList<QReflectiveSequence *>>("QList<QReflectiveSequence *>");
    qRegisterMetaType<QList<QSlot *>>("QList<QSlot *>");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QStructuralFeature *>");
    qRegisterMetaType<QList<QType *>>("QList<QType *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");
    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<QNamedElement *>("QNamedElement *");
    qRegisterMetaType<QNamespace *>("QNamespace *");
    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QPackage *>("QPackage *");
    qRegisterMetaType<QPackageImport *>("QPackageImport *");
    qRegisterMetaType<QPackageMerge *>("QPackageMerge *");
    qRegisterMetaType<QPackageableElement *>("QPackageableElement *");
    qRegisterMetaType<QParameter *>("QParameter *");
    qRegisterMetaType<QProperty *>("QProperty *");
    qRegisterMetaType<QRedefinableElement *>("QRedefinableElement *");
    qRegisterMetaType<QReflectiveSequence *>("QReflectiveSequence *");
    qRegisterMetaType<QSet<QArgument *>>("QSet<QArgument *>");
    qRegisterMetaType<QSet<QAssociation *>>("QSet<QAssociation *>");
    qRegisterMetaType<QSet<QClass *>>("QSet<QClass *>");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QSet<QComment *>>("QSet<QComment *>");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QSet<QDataType *>>("QSet<QDataType *>");
    qRegisterMetaType<QSet<QElement *>>("QSet<QElement *>");
    qRegisterMetaType<QSet<QElementImport *>>("QSet<QElementImport *>");
    qRegisterMetaType<QSet<QEnumeration *>>("QSet<QEnumeration *>");
    qRegisterMetaType<QSet<QEnumerationLiteral *>>("QSet<QEnumerationLiteral *>");
    qRegisterMetaType<QSet<QFeature *>>("QSet<QFeature *>");
    qRegisterMetaType<QSet<QGeneralization *>>("QSet<QGeneralization *>");
    qRegisterMetaType<QSet<QInstanceSpecification *>>("QSet<QInstanceSpecification *>");
    qRegisterMetaType<QSet<QLink *>>("QSet<QLink *>");
    qRegisterMetaType<QSet<QMofObject *>>("QSet<QMofObject *>");
    qRegisterMetaType<QSet<QNamedElement *>>("QSet<QNamedElement *>");
    qRegisterMetaType<QSet<QNamespace *>>("QSet<QNamespace *>");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QSet<QPackage *>>("QSet<QPackage *>");
    qRegisterMetaType<QSet<QPackageImport *>>("QSet<QPackageImport *>");
    qRegisterMetaType<QSet<QPackageMerge *>>("QSet<QPackageMerge *>");
    qRegisterMetaType<QSet<QPackageableElement *>>("QSet<QPackageableElement *>");
    qRegisterMetaType<QSet<QParameter *>>("QSet<QParameter *>");
    qRegisterMetaType<QSet<QProperty *>>("QSet<QProperty *>");
    qRegisterMetaType<QSet<QRedefinableElement *>>("QSet<QRedefinableElement *>");
    qRegisterMetaType<QSet<QReflectiveSequence *>>("QSet<QReflectiveSequence *>");
    qRegisterMetaType<QSet<QSlot *>>("QSet<QSlot *>");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QStructuralFeature *>");
    qRegisterMetaType<QSet<QType *>>("QSet<QType *>");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QSlot *>("QSlot *");
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<QType *>("QType *");
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
}

QT_END_NAMESPACE_QTMOF

