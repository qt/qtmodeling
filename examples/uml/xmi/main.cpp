#include <QtWrappedObjects>

#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>
#include <QtUml/QComponent>
#include <QtUml/QComponentRealization>
#include <QtUml/QGeneralization>

#include <QtMof/QXmiWriter>
using QtMof::QXmiWriter;

#include <QtCore/QDebug>

using namespace QtUml;
using namespace QtWrappedObjects;

int main ()
{
    QWrappedObjectPointer<QModel> model = new QModel;
    model->setName("MyModel");
    model->setURI("http://liveblue.wordpress.com");

    QWrappedObjectPointer<QPackage> package = new QPackage;
    package->setName("Package1");

    QWrappedObjectPointer<QPrimitiveType> primitiveType = new QPrimitiveType;
    primitiveType->setName("String");

    QWrappedObjectPointer<QEnumeration> enumeration = new QEnumeration;
    enumeration->setName("DirectionKind");
    QWrappedObjectPointer<QEnumerationLiteral> directionIn = new QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QWrappedObjectPointer<QClass> class2_ = new QClass;
    class2_->setName("Person");
    class2_->setAbstract(true);

    QWrappedObjectPointer<QClass> class_ = new QClass;
    class_->setName("Student");
    class_->setAbstract(false);

    QWrappedObjectPointer<QGeneralization> generalization = new QGeneralization;
    generalization->setGeneral(class2_);
    class_->addGeneralization(generalization);

    package->addOwnedType(enumeration);
    package->addOwnedType(class2_);
    package->addOwnedType(class_);

    model->addNestedPackage(package);
    model->addOwnedType(primitiveType);

    QFile file("test.xmi");
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Cannot write file !";
        return 1;
    }

    model->setPropertyData();
    QXmiWriter writer(model);
    if (writer.writeFile(&file))
        qDebug() << "XMI file saved !";
    else
        qDebug() << "Error when writing XMI file !";

    delete model.data();
}

