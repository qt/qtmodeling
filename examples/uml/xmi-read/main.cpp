#include <QtWrappedObjects/QtWrappedObjects>

#include <QtMof/QXmiReader>
#include <QtMof/QXmiWriter>

using QtMof::QXmiReader;
using QtMof::QXmiWriter;

using namespace QtWrappedObjects;

int main ()
{
    QFile file("test.xmi");

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Cannot read file !";
        return 1;
    }

    QXmiReader reader;
    QWrappedObject *rootElement = reader.readFile(&file);
    qDebug() << "Successfully read object with name" << rootElement->objectName();

    QFile file2("test-out.xmi");

    if (!file2.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Cannot write file !";
        return 1;
    }
    QXmiWriter writer(rootElement);
    writer.writeFile(&file2);
}

