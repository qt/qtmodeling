#ifndef WRAPPEDOBJECTPROPERTYMODEL_H
#define WRAPPEDOBJECTPROPERTYMODEL_H

#include <QAbstractItemModel>

namespace QtWrappedObjects
{
    class QWrappedObject;
    class QMetaWrappedObject;
}

using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QMetaWrappedObject;

class WrappedObjectPropertyModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit WrappedObjectPropertyModel(QObject *parent = 0);

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex & index) const;

    QWrappedObject *wrappedObject() const;

public Q_SLOTS:
    void setWrappedObject(QWrappedObject *wrappedObject);
    void setWrappedObjectIndex(const QModelIndex &wrappedObjectIndex);

Q_SIGNALS:
    void indexChanged(const QModelIndex &wrappedObjectIndex);

private:
    QModelIndex _wrappedObjectIndex;
    QWrappedObject *_wrappedObject;
    const QMetaWrappedObject *_metaWrappedObject;
};

#endif // WRAPPEDOBJECTPROPERTYMODEL_H
