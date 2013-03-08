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

