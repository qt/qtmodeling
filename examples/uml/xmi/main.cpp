#include <QtWrappedObjects>

#include <QtUml/QPackage>
#include <QtUml/QClass>
#include <QtUml/QUseCase>
#include <QtUml/QPort>
#include <QtUml/QStereotype>
#include <QtUml/QComment>

#include <QtMof/QXmiWriter>
using QtMof::QXmiWriter;

#include <QtCore/QDebug>

using namespace QtUml;
using namespace QtWrappedObjects;

int main ()
{
    QWrappedObjectPointer<QPackage> package = new QPackage;
    package->setName("RootPackage");

    QWrappedObjectPointer<QClass> class_ = new QClass;
    class_->setName("Student");
    package->addOwnedType(class_);

    QWrappedObjectPointer<QUseCase> useCase = new QUseCase;
    useCase->setName("StudentUseCase1");
    class_->addOwnedUseCase(useCase);

    QWrappedObjectPointer<QPort> port = new QPort;
    port->setName("StudentPort");
    class_->addOwnedAttribute(port);

    QWrappedObjectPointer<QStereotype> stereotype = new QStereotype;
    stereotype->setName("MyStereotype");
    package->addPackagedElement(stereotype);

    QWrappedObjectPointer<QComment> comment = new QComment;
    comment->setBody("Testing comment");
    stereotype->addOwnedComment(comment);

    QFile file("test.xmi");
    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Cannot write file !";
        return 1;
    }

    QXmiWriter writer(package);
    if (writer.writeFile(&file))
        qDebug() << "XMI file saved !";
    else
        qDebug() << "Error when writing XMI file !";

    delete package.data();
}

