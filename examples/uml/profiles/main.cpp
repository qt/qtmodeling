#include <QtWrappedObjects/QWrappedObjectPointer>

#include <QtUml/QUmlPrimitiveType>
#include <QtUml/QUmlProfile>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlModel>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlExtension>
#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlElementImport>

#include <QtCore/QDebug>

typedef const QSet<QUmlStereotype *> QUmlStereotypeList;
typedef const QSet<QUmlPackageableElement *> QUmlPackageableElementList;

int main ()
{
    // Create a "dymmy" UML meta-model
    QWrappedObjectPointer<QUmlModel> umlModel = new QUmlModel;
    umlModel->setName("UML Meta-Model");
    QWrappedObjectPointer<QUmlClass> class_ = new QUmlClass;
    class_->setName("Class");
    umlModel->addOwnedType(class_);

    // Create a profile
    QWrappedObjectPointer<QUmlProfile> profile = new QUmlProfile;
    profile->setName("MyProfile");

    // Add a stereotype to profile
    QWrappedObjectPointer<QUmlStereotype> stereotype = new QUmlStereotype;
    stereotype->setName("MyStereotype");
    profile->addPackagedElement(stereotype);

    // Show profile's owned stereotypes
    qDebug() << "Owned stereotypes:";
    foreach (QUmlStereotype *ownedStereotype, profile->ownedStereotypes())
        qDebug() << "    " << ownedStereotype->name();

    // Adding attribute to stereotype
    QWrappedObjectPointer<QUmlPrimitiveType> booleanPrimitiveType = new QUmlPrimitiveType;
    booleanPrimitiveType->setName("boolean");
    QWrappedObjectPointer<QUmlProperty> property = new QUmlProperty;
    property->setName("isTransient");
    property->setType(booleanPrimitiveType);
    stereotype->addOwnedAttribute(property);

    // Create UML meta-model element import
    QWrappedObjectPointer<QUmlElementImport> elementImport = new QUmlElementImport;
    elementImport->setImportedElement(umlModel->packagedElements().toList().first());

    // Add meta-class reference to profile
    profile->addMetaclassReference(elementImport);
    profile->addOwnedType(booleanPrimitiveType);

    // Show profile's data
    qDebug() << "Profile members:";
    foreach (QUmlNamedElement *namedElement, profile->members())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile owned members:";
    foreach (QUmlNamedElement *namedElement, profile->ownedMembers())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile imported members:";
    foreach (QUmlPackageableElement *importedMember, profile->importedMembers())
        qDebug() << "    " << importedMember->name();

    // Create extension
    QWrappedObjectPointer<QUmlExtension> extension = new QUmlExtension;
    extension->setName("class_stereotype");

    QWrappedObjectPointer<QUmlProperty> stereotypeProperty = new QUmlProperty;
    stereotypeProperty->setName("base_class");
    stereotypeProperty->setType(class_);

    QWrappedObjectPointer<QUmlExtensionEnd> extensionEnd = new QUmlExtensionEnd;
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

