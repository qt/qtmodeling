#ifndef WRAPPEDOBJECTPROPERTYMODEL_H
#define WRAPPEDOBJECTPROPERTYMODEL_H

#include <QAbstractItemModel>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>

using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QMetaWrappedObject;

class WrappedObjectPropertyModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit WrappedObjectPropertyModel(QObject *parent = 0);

    void setWrappedObject(QWrappedObject *wrappedObject);

    virtual QModelIndex index(int row, int column,
                              const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

private:
    const QMetaWrappedObject *_metaWrappedObject;
};

#endif // WRAPPEDOBJECTPROPERTYMODEL_H
