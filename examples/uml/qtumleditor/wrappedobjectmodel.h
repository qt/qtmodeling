#ifndef WRAPPEDOBJECTMODEL_H
#define WRAPPEDOBJECTMODEL_H

#include <QAbstractItemModel>

namespace QtWrappedObjects
{
    class QWrappedObject;
}
using QtWrappedObjects::QWrappedObject;

class WrappedObjectModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit WrappedObjectModel(QObject *parent = 0);

    QWrappedObject *wrappedObject() const;

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;

public Q_SLOTS:
    void setWrappedObject(QWrappedObject *wrappedObject);
    void updateIndex(const QModelIndex &index);

private:
    QWrappedObject *_wrappedObject;
};

#endif // WRAPPEDOBJECTMODEL_H
