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

typedef const QSet<QtUml::QStereotype *> QStereotypeList;
typedef const QSet<QtUml::QPackageableElement *> QPackageableElementList;

int main ()
{
    // Create a "dymmy" UML meta-model
    QtUml::QModel *umlModel = new QtUml::QModel;
    umlModel->setName("UML Meta-Model");
    QtUml::QClass *class_ = new QtUml::QClass;
    class_->setName("Class");
    umlModel->addOwnedType(class_);

    // Create a profile
    QtUml::QProfile *profile = new QtUml::QProfile;
    profile->setName("MyProfile");

    // Add a stereotype to profile
    QtUml::QStereotype *stereotype = new QtUml::QStereotype;
    stereotype->setName("MyStereotype");
    profile->addPackagedElement(stereotype);

    // Show profile's owned stereotypes
    QScopedPointer<QStereotypeList> ownedStereotypes (profile->ownedStereotypes());
    qDebug() << "Owned stereotypes:";
    foreach (QtUml::QStereotype *ownedStereotype, *ownedStereotypes)
        qDebug() << "    " << ownedStereotype->name();

    // Adding attribute to stereotype
    QtUml::QPrimitiveType *booleanPrimitiveType = new QtUml::QPrimitiveType;
    booleanPrimitiveType->setName("boolean");
    QtUml::QProperty *property = new QtUml::QProperty;
    property->setName("isTransient");
    property->setType(booleanPrimitiveType);
    stereotype->addOwnedAttribute(property);

    // Create UML meta-model element import
    QtUml::QElementImport *elementImport = new QtUml::QElementImport;
    elementImport->setImportedElement(umlModel->packagedElements()->toList().first());

    // Add meta-class reference to profile
    profile->addMetaclassReference(elementImport);

    // Show profile's data
    qDebug() << "Profile members:";
    foreach (QtUml::QNamedElement *namedElement, *profile->members())
        qDebug() << "    " << namedElement->name();
    qDebug() << "Profile owned members:";
    foreach (QtUml::QNamedElement *namedElement, *profile->ownedMembers())
        qDebug() << "    " << namedElement->name();
    QScopedPointer<QPackageableElementList> importedMembers (profile->importedMembers());
    qDebug() << "Profile imported members:";
    foreach (QtUml::QPackageableElement *importedMember, *importedMembers)
        qDebug() << "    " << importedMember->name();

    // Create extension
    QtUml::QExtension *extension = new QtUml::QExtension;
    extension->setName("class_stereotype");

    QtUml::QProperty *stereotypeProperty = new QtUml::QProperty;
    stereotypeProperty->setName("base_class");
    stereotypeProperty->setType(class_);

    QtUml::QExtensionEnd *extensionEnd = new QtUml::QExtensionEnd;
    extensionEnd->setName("extension_stereotype");
    extensionEnd->setType(stereotype);

    extension->addMemberEnd(stereotypeProperty);
    extension->addMemberEnd(extensionEnd);
    extension->setOwnedEnd(extensionEnd);

    stereotype->addOwnedAttribute(stereotypeProperty);

    delete profile; // That will delete all owned elements
}

