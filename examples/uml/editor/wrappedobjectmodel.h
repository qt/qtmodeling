#ifndef WRAPPEDOBJECTMODEL_H
#define WRAPPEDOBJECTMODEL_H

#include <QAbstractItemModel>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>

using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QMetaWrappedObject;

class WrappedObjectModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit WrappedObjectModel(QObject *parent = 0);

    void setWrappedObject(QWrappedObject *wrappedObject);

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex & index) const;

private:
    const QMetaWrappedObject *_metaWrappedObject;
};

#endif // WRAPPEDOBJECTMODEL_H
