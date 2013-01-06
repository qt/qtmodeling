#ifndef WRAPPEDOBJECTPROPERTYFILTERMODEL_H
#define WRAPPEDOBJECTPROPERTYFILTERMODEL_H

#include <QSortFilterProxyModel>

class WrappedObjectPropertyFilterModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    explicit WrappedObjectPropertyFilterModel(QObject *parent = 0);

protected:
    bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const;
};

#endif // WRAPPEDOBJECTPROPERTYFILTERMODEL_H
