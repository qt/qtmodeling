#include "qmodelingobject.h"
#include "qmodelingobject_p.h"

QModelingObjectPrivate::~QModelingObjectPrivate()
{
}

QModelingObject::QModelingObject() :
    d_ptr(new QModelingObjectPrivate)
{
}

QModelingObject::~QModelingObject()
{
    delete d_ptr;
}

QObject *QModelingObject::asQObject() const
{
    return &d_ptr->object;
}

QModelingObject::QModelingObject(QModelingObjectPrivate *dd) :
    d_ptr(dd)
{
}
