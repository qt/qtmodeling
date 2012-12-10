#include <QtMof/QMofPointer>

#include <QtUml/QPrimitiveType>
#include <QtUml/QProfile>
#include <QtUml/QProperty>
#include <QtUml/QStereotype>
#include <QtUml/QModel>
#include <QtUml/QClass>
#include <QtUml/QExtension>
#include <QtUml/QExtensionEnd>
#include <QtUml/QElementImport>

#include <QtCore/QDebug>

using namespace QtUml;
using QtMof::QMofPointer;

typedef const QSet<QStereotype *> QStereotypeList;
typedef const QSet<QPackageableElement *> QPackageableElementList;

int main ()
{
    // Create a "dymmy" UML meta-model
    QMofPointer<QModel> umlModel = new QModel;
    umlModel->setName("UML Meta-Model");
    QMofPointer<QClass> class_ = new QClass;
    class_->setName("Class");
    umlModel->addOwnedType(class_);

    // Create a profile
    QMofPointer<QProfile> profile = new QProfile;
    profile->setName("MyProfile");

    // Add a stereotype to profile
    QMofPointer<QStereotype> stereotype = new QStereotype;
    stereotype->setName("MyStereotype");
    profile->addPackagedElement(stereotype);

    // Show profile's owned stereotypes
    QScopedPointer<QStereotypeList> ownedStereotypes (profile->ownedStereotypes());
    qDebug() << "Owned stereotypes:";
    foreach (QStereotype *ownedStereotype, *ownedStereotypes)
        qDebug() << "    " << ownedStereotype->name();

    // Adding attribute to stereotype
    QMofPointer<QPrimitiveType> booleanPrimitiveType = new QPrimitiveType;
    booleanPrimitiveType->setName("boolean");
    QMofPointer<QProperty> property = new QProperty;
    property->setName("isTransient");
    property->setType(booleanPrimitiveType);
    stereotype->addOwnedAttribute(property);

    // Create UML meta-model element import
    QMofPointer<QElementImport> elementImport = new QElementImport;
    elementImport->setImportedElement(umlModel->packagedElements()->toList().first());

    // Add meta-class reference to profile
    profile->addMetaclassReference(elementImport);
    profile->addOwnedType(booleanPrimitiveType);

    // Show profile's data
    qDebug() << "Profile members:";
    foreach (QNamedElement *namedElement, *profile->members())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile owned members:";
    foreach (QNamedElement *namedElement, *profile->ownedMembers())
        qDebug() << "    " << namedElement->name();
    QScopedPointer<QPackageableElementList> importedMembers (profile->importedMembers());
    qDebug() << "Profile imported members:";
    foreach (QPackageableElement *importedMember, *importedMembers)
        qDebug() << "    " << importedMember->name();

    // Create extension
    QMofPointer<QExtension> extension = new QExtension;
    extension->setName("class_stereotype");

    QMofPointer<QProperty> stereotypeProperty = new QProperty;
    stereotypeProperty->setName("base_class");
    stereotypeProperty->setType(class_);

    QMofPointer<QExtensionEnd> extensionEnd = new QExtensionEnd;
    extensionEnd->setName("extension_stereotype");
    extensionEnd->setType(stereotype);

    extension->addMemberEnd(stereotypeProperty);
    extension->addMemberEnd(extensionEnd);
    extension->setOwnedEnd(extensionEnd);

    stereotype->addOwnedAttribute(stereotypeProperty);

    delete profile.data(); // That will delete all owned elements
    delete umlModel.data(); // That will delete all owned elements
    delete extension.data(); // That will delete all owned elements
}

