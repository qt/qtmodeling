#include <QtWrappedObjects>

#include <QtMof/QXmiReader>
using QtMof::QXmiReader;

#include <QtMof/QtMofMetaModel>

#include <QtCore/QDebug>

using namespace QtWrappedObjects;

int main ()
{
    QtMof::QtMofMetaModel::init();

    QFile file("test.xmi");

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Cannot read file !";
        return 1;
    }

    QXmiReader reader;
    QWrappedObject *rootElement = reader.readFile(&file);
    qDebug() << "Successfully read object with name" << rootElement->objectName();
}

