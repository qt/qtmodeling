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
#include <QtUml/QUmlPrimitiveType>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlModel>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlElementImport>

#include <QtCore/QDebug>

typedef const QSet<QUmlStereotype *> QUmlStereotypeList;
typedef const QSet<QUmlPackageableElement *> QUmlPackageableElementList;

int main ()
{
    // Create a "dymmy" UML meta-model
    QUmlModel *umlModel = new QUmlModel;
    umlModel->setName("UML Meta-Model");
    QUmlClass *class_ = new QUmlClass;
    class_->setName("Class");
    umlModel->addOwnedType(class_);

    // Create a profile
    QUmlProfile *profile = new QUmlProfile;
    profile->setName("MyProfile");

    // Add a stereotype to profile
    QUmlStereotype *stereotype = new QUmlStereotype;
    stereotype->setName("MyStereotype");
    profile->addPackagedElement(stereotype);

    // Show profile's owned stereotypes
    qDebug() << "Owned stereotypes:";
    foreach (QUmlStereotype *ownedStereotype, profile->ownedStereotypes())
        qDebug() << "    " << ownedStereotype->name();

    // Adding attribute to stereotype
    QUmlPrimitiveType *booleanPrimitiveType = new QUmlPrimitiveType;
    booleanPrimitiveType->setName("boolean");
    QUmlProperty *property = new QUmlProperty;
    property->setName("isTransient");
    property->setType(booleanPrimitiveType);
    stereotype->addOwnedAttribute(property);

    // Create UML meta-model element import
    QUmlElementImport *elementImport = new QUmlElementImport;
    elementImport->setImportedElement(umlModel->packagedElements().toList().first());

    // Add meta-class reference to profile
    profile->addMetaclassReference(elementImport);
    profile->addOwnedType(booleanPrimitiveType);

    // Show profile's data
    qDebug() << "Profile members:";
    foreach (QUmlNamedElement *namedElement, profile->members())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile owned members:";
    foreach (QUmlNamedElement *namedElement, profile->ownedMembers())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile imported members:";
    foreach (QUmlPackageableElement *importedMember, profile->importedMembers())
        qDebug() << "    " << importedMember->name();

    // Create extension
    QUmlExtension *extension = new QUmlExtension;
    extension->setName("class_stereotype");

    QUmlProperty *stereotypeProperty = new QUmlProperty;
    stereotypeProperty->setName("base_class");
    stereotypeProperty->setType(class_);

    QUmlExtensionEnd *extensionEnd = new QUmlExtensionEnd;
    extensionEnd->setName("extension_stereotype");
    extensionEnd->setType(stereotype);

    extension->addMemberEnd(stereotypeProperty);
    extension->addMemberEnd(extensionEnd);
    extension->setOwnedEnd(extensionEnd);

    stereotype->addOwnedAttribute(stereotypeProperty);

    delete profile; // That will delete all owned elements
    delete umlModel; // That will delete all owned elements
    delete extension; // That will delete all owned elements
}

