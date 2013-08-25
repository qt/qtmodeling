#include "qmodelingobject.h"
#include "qmodelingobject_p.h"

QModelingObjectPrivate::~QModelingObjectPrivate()
{
}

QModelingObject::QModelingObject(bool create_d_ptr)
{
    if (create_d_ptr)
        set_d_ptr(new QModelingObjectPrivate);
}

QModelingObject::~QModelingObject()
{
    delete d_ptr;
}

void QModelingObject::set_d_ptr(QModelingObjectPrivate *d_ptr)
{
    this->d_ptr = d_ptr;
    d_ptr->q_ptr = this;
}
