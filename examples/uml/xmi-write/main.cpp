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

