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
#include <QtWrappedObjects>

#include <QtUml/QUmlModel>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPrimitiveType>
#include <QtUml/QUmlEnumeration>
#include <QtUml/QUmlEnumerationLiteral>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlComponent>
#include <QtUml/QUmlComponentRealization>

#include <QtCore/QDebug>

void checkProperties(QWrappedObject *wrappedObject)
{
    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        qDebug() << "Property" << metaWrappedObject->property(i).metaProperty.name();
    }
}

int main ()
{
    QWrappedObjectPointer<QUmlModel> model = new QUmlModel;
    model->setName("MyModel");

    QWrappedObjectPointer<QUmlPackage> package = new QUmlPackage;
    package->setName("Package1");

    QWrappedObjectPointer<QUmlPrimitiveType> primitiveType = new QUmlPrimitiveType;
    primitiveType->setName("String");

    QWrappedObjectPointer<QUmlEnumeration> enumeration = new QUmlEnumeration;
    enumeration->setName("DirectionKind");
    QWrappedObjectPointer<QUmlEnumerationLiteral> directionIn = new QUmlEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QWrappedObjectPointer<QUmlClass> class_ = new QUmlClass;
    class_->setName("Student");
    class_->setAbstract(false);

    package->addOwnedType(enumeration);
    package->addOwnedType(class_);

    //model->addNestedPackage(package);
    model->addPackagedElement(package);
    model->addOwnedType(primitiveType);
    model->dumpObjectTree();

    qDebug() << "model->ownedElements().size():" << model->ownedElements().size();
    qDebug() << "model->members().size():" << model->members().size();
    qDebug() << "model->ownedMembers().size():" << model->ownedMembers().size();
    qDebug() << "model->ownedRules().size():" << model->ownedRules().size();
    qDebug() << "model->packagedElements().size():" << model->packagedElements().size();
    qDebug();
    qDebug() << "package->qualifiedName():" << package->qualifiedName();
    qDebug() << "package->nestingPackage() ?" << ((package->nestingPackage() == 0) ? "Nao":"Sim");

    qDebug() << "class_->qualifiedName():" << class_->qualifiedName();
    qDebug() << "enumeration->qualifiedName():" << enumeration->qualifiedName();
    qDebug() << "primitiveType->qualifiedName():" << primitiveType->qualifiedName();
    qDebug() << "directionIn->qualifiedName():" << directionIn->qualifiedName();

    model->removeNestedPackage(package);
//    model->removePackagedElement(package);
//    model->addNestedPackage(package);
//    model->addPackagedElement(package);
    qDebug() << "REMOVED";

    qDebug() << "model->ownedElements().size():" << model->ownedElements().size();
    qDebug() << "model->members().size():" << model->members().size();
    qDebug() << "model->ownedMembers().size():" << model->ownedMembers().size();
    qDebug() << "model->ownedRules().size():" << model->ownedRules().size();
    qDebug() << "model->packagedElements().size():" << model->packagedElements().size();
    qDebug();
    qDebug() << "package->qualifiedName():" << package->qualifiedName();
    qDebug() << "package->nestingPackage() ?" << ((package->nestingPackage() == 0) ? "Nao":"Sim");

    qDebug() << "class_->qualifiedName():" << class_->qualifiedName();
    qDebug() << "enumeration->qualifiedName():" << enumeration->qualifiedName();
    qDebug() << "primitiveType->qualifiedName():" << primitiveType->qualifiedName();
    qDebug() << "directionIn->qualifiedName():" << directionIn->qualifiedName();

    qDebug() << "model->nestedPackages().size():" << model->nestedPackages().size();

    qDebug() << "model->ownedStereotypes().size():" << model->ownedStereotypes().size();

    qDebug() << "model->ownedTypes().size():" << model->ownedTypes().size();

    checkProperties(model);

    QWrappedObjectPointer<QUmlComponent> c1 = new QUmlComponent;
    QWrappedObjectPointer<QUmlComponent> c2 = new QUmlComponent;
    QWrappedObjectPointer<QUmlComponentRealization> cr = new QUmlComponentRealization;
    cr->setAbstraction(c1);
    qDebug();
    qDebug() << "cr->suppliers().size():" << cr->suppliers().size();
    qDebug() << "c1->realizations().size():" << c1->realizations().size();
    qDebug() << "c2->realizations().size():" << c2->realizations().size();
    cr->setAbstraction(c2);
    qDebug();
    qDebug() << "cr->suppliers().size():" << cr->suppliers().size();
    qDebug() << "c1->realizations().size():" << c1->realizations().size();
    qDebug() << "c2->realizations().size():" << c2->realizations().size();
    cr->setAbstraction(0);
    qDebug();
    qDebug() << "cr->suppliers().size():" << cr->suppliers().size();
    qDebug() << "c1->realizations().size():" << c1->realizations().size();
    qDebug() << "c2->realizations().size():" << c2->realizations().size();
    cr->setAbstraction(c1);
    package->addOwnedType(c1);
    package->addOwnedType(c2);

    delete model.data();
    delete package.data();
}

