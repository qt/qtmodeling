#include "wrappedobjectpropertyfiltermodel.h"

WrappedObjectPropertyFilterModel::WrappedObjectPropertyFilterModel(QObject *parent) :
    QSortFilterProxyModel(parent)
{
}

bool WrappedObjectPropertyFilterModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
    int rows;
    QModelIndex sourceIndex = sourceModel()->index(sourceRow, 0, sourceParent);
    if ((rows = sourceModel()->rowCount(sourceIndex)) > 0) {
        for (int i = 0; i < rows; ++i)
            if (filterAcceptsRow(i, sourceIndex))
                return true;
        return false;
    }
    else {
        return QSortFilterProxyModel::filterAcceptsRow(sourceRow, sourceParent);
    }
}
