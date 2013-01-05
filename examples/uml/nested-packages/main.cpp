#include <QtWrappedObjects>

#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>
#include <QtUml/QComponent>
#include <QtUml/QComponentRealization>

#include <QtCore/QDebug>

using namespace QtUml;
using namespace QtWrappedObjects;

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
    QWrappedObjectPointer<QModel> model = new QModel;
    model->setName("MyModel");

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

    QWrappedObjectPointer<QComponent> c1 = new QComponent;
    QWrappedObjectPointer<QComponent> c2 = new QComponent;
    QWrappedObjectPointer<QComponentRealization> cr = new QComponentRealization;
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

