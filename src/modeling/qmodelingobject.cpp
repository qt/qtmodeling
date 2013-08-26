#include "qmodelingobject.h"
#include "qmodelingobject_p.h"

QModelingObjectPrivate::~QModelingObjectPrivate()
{
}

QModelingObject::QModelingObject(bool create_d_ptr) :
    d_ptr(0)
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
    Q_ASSERT_X(!this->d_ptr, "QModelingObject::set_d_ptr", "d_ptr already set !");
    this->d_ptr = d_ptr;
    d_ptr->q_ptr = this;
}
