#include <QtWrappedObjects/QXmiReader>
#include <QtWrappedObjects/QXmiWriter>
#include <QtWrappedObjects/QtWrappedObjects>

int main ()
{
    QFile file("test.xmi");

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Cannot read file !";
        return 1;
    }

    QXmiReader reader(0, true);
    QWrappedObject *rootElement = reader.readFile(&file);
    if (rootElement)
        qDebug() << "Successfully read object with name" << rootElement->objectName();
    if (reader.errorStrings().size() > 0) {
        qDebug() << "Errors:";
        foreach (QString error, reader.errorStrings())
            qDebug() << "\t" << error;
    }

    QFile file2("test-out.xmi");

    if (!file2.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Cannot write file !";
        return 1;
    }
    QXmiWriter writer(rootElement);
    writer.writeFile(&file2);
}

