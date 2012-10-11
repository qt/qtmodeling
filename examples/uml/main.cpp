#include <QtCore/QDebug>
#include <QtUml/QModel>
#include <QtUml/QPackage>
#include <QtUml/QPrimitiveType>
#include <QtUml/QEnumeration>
#include <QtUml/QEnumerationLiteral>
#include <QtUml/QClass>

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
    QtUml::QClass *class_ = new QtUml::QClass;
    class_->setName("Student");
    class_->setAbstract(false);
    package->addOwnedType(class_);

    qDebug() << "package->ownedElements()->size():" << package->ownedElements()->size();
    qDebug() << "package->members()->size():" << package->members()->size();
    qDebug() << "package->ownedMembers()->size():" << package->ownedMembers()->size();
    qDebug() << "package->ownedRules()->size():" << package->ownedRules()->size();
    qDebug() << "package->packagedElements()->size():" << package->packagedElements()->size();
    const QSet<QtUml::QPackage *> *nestedPackages = package->nestedPackages();
    qDebug() << "package->nestedPackages()->size():" << nestedPackages->size();
    const QSet<QtUml::QStereotype *> *ownedStereotypes = package->ownedStereotypes();
    qDebug() << "package->ownedStereotypes()->size():" << ownedStereotypes->size();
    const QSet<QtUml::QType *> *ownedTypes = package->ownedTypes();
    qDebug() << "package->ownedTypes()->size():" << ownedTypes->size();

    delete model;
    delete package;
    delete primitiveType;
    delete enumeration;
    delete directionIn;
    delete class_;
    delete nestedPackages;
    delete ownedStereotypes;
    delete ownedTypes;
}

