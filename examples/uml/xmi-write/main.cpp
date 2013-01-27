#include <QtWrappedObjects/QtWrappedObjects>

#include <QtUml/QtUml>

#include <QtMof/QXmiWriter>

using namespace QtUml;

using QtMof::QXmiWriter;

int main ()
{
    QWrappedObjectPointer<QPackage> model = new QPackage;
    model->setName("MyRootPackage");

    QWrappedObjectPointer<QPackage> package = new QPackage;
    package->setName("Package1");

    QWrappedObjectPointer<QPrimitiveType> primitiveType = new QPrimitiveType;
    primitiveType->setName("String");

    QWrappedObjectPointer<QEnumeration> enumeration = new QEnumeration;
    enumeration->setName("DirectionKind");
    QWrappedObjectPointer<QEnumerationLiteral> directionIn = new QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QWrappedObjectPointer<QClass> class_ = new QClass;
    class_->setName("Student");
    class_->setAbstract(false);
    class_->setVisibility(QtUml::QtUml::VisibilityPackage);

    QWrappedObjectPointer<QProperty> property = new QProperty;
    property->setName("name");
    property->setType(primitiveType);
    class_->addOwnedAttribute(property);

    QWrappedObjectPointer<QClass> class2_ = new QClass;
    class2_->setName("InterStudent");

    QWrappedObjectPointer<QGeneralization> generalization = new QGeneralization;
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

