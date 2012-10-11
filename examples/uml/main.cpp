#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>

#include <QtCore/QDebug>
#include <QtCore/QScopedPointer>
#include <QtCore/QMetaProperty>

typedef const QSet<QtUml::QPackage *> QPackageList;
typedef const QSet<QtUml::QStereotype *> QStereotypeList;
typedef const QSet<QtUml::QType *> QTypeList;

void checkProperties(QObject *object)
{
    const QMetaObject *metaObject = object->metaObject();
    int propertyCount = metaObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        qDebug() << "Property" << metaObject->property(i).name();
    }
}

int main ()
{
    QtUml::QModel *model= new QtUml::QModel;
    model->setName("MyModel");

    QtUml::QPackage *package = new QtUml::QPackage;
    package->setName("Package1");

    QtUml::QPrimitiveType *primitiveType = new QtUml::QPrimitiveType;
    primitiveType->setName("String");

    QtUml::QEnumeration *enumeration = new QtUml::QEnumeration;
    enumeration->setName("DirectionKind");
    QtUml::QEnumerationLiteral *directionIn = new QtUml::QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);

    QtUml::QClass *class_ = new QtUml::QClass;
    class_->setName("Student");
    class_->setAbstract(false);

    model->addOwnedType(primitiveType);
    model->addOwnedType(enumeration);
    model->addNestedPackage(package);
    package->addOwnedType(class_);

    qDebug() << "package->ownedElements()->size():" << model->ownedElements()->size();
    qDebug() << "package->members()->size():" << model->members()->size();
    qDebug() << "package->ownedMembers()->size():" << model->ownedMembers()->size();
    qDebug() << "package->ownedRules()->size():" << model->ownedRules()->size();
    qDebug() << "package->packagedElements()->size():" << model->packagedElements()->size();
    model->removePackagedElement(model->packagedElements()->values().last());
    qDebug() << "package->ownedMembers()->size():" << model->ownedMembers()->size();
    qDebug() << "package->packagedElements()->size():" << model->packagedElements()->size();

    QScopedPointer<QPackageList> nestedPackages (model->nestedPackages());
    qDebug() << "package->nestedPackages()->size():" << nestedPackages->size();

    QScopedPointer<QStereotypeList> ownedStereotypes (model->ownedStereotypes());
    qDebug() << "package->ownedStereotypes()->size():" << ownedStereotypes->size();

    QScopedPointer<QTypeList> ownedTypes (model->ownedTypes());
    qDebug() << "package->ownedTypes()->size():" << ownedTypes->size();

    qDebug() << "class_->qualifiedName:" << class_->qualifiedName();

    checkProperties(model);

    delete model; // That will delete all owned elements

    // All containers created by nestedPackages(), ownedStereotypes(), and ownedTypes()
    // are destroyed by QScopedPointer
}
