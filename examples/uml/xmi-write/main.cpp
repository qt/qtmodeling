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
#include <QtWrappedObjects/QXmiWriter>
#include <QtWrappedObjects/QtWrappedObjects>

#include <QtUml/QtUml>

int main ()
{
    QUmlMetaModel::init();

    QWrappedObjectPointer<QUmlPackage> model = new QUmlPackage;
    model->setName("MyRootPackage");

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
    class_->setVisibility(QtUml::QtUml::VisibilityPackage);

    QWrappedObjectPointer<QUmlProperty> property = new QUmlProperty;
    property->setName("name");
    property->setType(primitiveType);
    class_->addOwnedAttribute(property);

    QWrappedObjectPointer<QUmlClass> class2_ = new QUmlClass;
    class2_->setName("InterStudent");

    QWrappedObjectPointer<QUmlGeneralization> generalization = new QUmlGeneralization;
    generalization->setObjectName("generalization");
    generalization->setGeneral(class_);
    class2_->addGeneralization(generalization);

    package->addOwnedType(enumeration);
    package->addOwnedType(class_);
    package->addOwnedType(class2_);

    model->addNestedPackage(package);
    model->addOwnedType(primitiveType);

    QFile file("test.xmi");

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Cannot write file !";
        return 1;
    }

    QXmiWriter writer(model);
    if (writer.writeFile(&file))
        qDebug() << "XMI file saved !";
    else
        qDebug() << "Error when writing XMI file !";
    file.close();

    delete package.data();
}

