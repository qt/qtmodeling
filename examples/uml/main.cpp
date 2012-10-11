#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>

#include <QtCore/QDebug>
#include <QtCore/QScopedPointer>

int main ()
{
    QtUml::QModel *model= new QtUml::QModel;
    model->setName("MyModel");
    QtUml::QPackage *package = new QtUml::QPackage;
    package->setName("Package1");
    model->addNestedPackage(package);
    QtUml::QPrimitiveType *primitiveType = new QtUml::QPrimitiveType;
    primitiveType->setName("String");
    model->addOwnedType(primitiveType);
    QtUml::QEnumeration *enumeration = new QtUml::QEnumeration;
    enumeration->setName("DirectionKind");
    QtUml::QEnumerationLiteral *directionIn = new QtUml::QEnumerationLiteral;
    directionIn->setName("DirectionIn");
    enumeration->addOwnedLiteral(directionIn);
    model->addOwnedType(enumeration);
    QtUml::QClass *class_ = new QtUml::QClass;
    class_->setName("Student");
    class_->setAbstract(false);
    package->addOwnedType(class_);

    qDebug() << "package->ownedElements()->size():" << package->ownedElements()->size();
    qDebug() << "package->members()->size():" << package->members()->size();
    qDebug() << "package->ownedMembers()->size():" << package->ownedMembers()->size();
    qDebug() << "package->ownedRules()->size():" << package->ownedRules()->size();
    qDebug() << "package->packagedElements()->size():" << package->packagedElements()->size();

    typedef const QSet<QtUml::QPackage *> QPackageList;
    QScopedPointer<QPackageList> nestedPackages (model->nestedPackages());
    qDebug() << "package->nestedPackages()->size():" << nestedPackages->size();

    typedef const QSet<QtUml::QStereotype *> QStereotypeList;
    QScopedPointer<QStereotypeList> ownedStereotypes (package->ownedStereotypes());
    qDebug() << "package->ownedStereotypes()->size():" << ownedStereotypes->size();

    typedef const QSet<QtUml::QType *> QTypeList;
    QScopedPointer<QTypeList> ownedTypes (package->ownedTypes());
    qDebug() << "package->ownedTypes()->size():" << ownedTypes->size();

    delete model; // That will delete all owned elements

    // All containers created by nestedPackages(), ownedStereotypes(), and ownedTypes()
    // are destroyed by QScopedPointer
}
