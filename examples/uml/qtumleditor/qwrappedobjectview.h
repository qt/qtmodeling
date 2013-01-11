#ifndef QWRAPPEDOBJECTVIEW_H
#define QWRAPPEDOBJECTVIEW_H

#include <QtCore/QMetaMethod>

#include <QtWidgets/QWidget>

class QMenu;
class QTreeView;
class QAbstractItemModel;

namespace QtWrappedObjects
{
    class QWrappedObject;
};
using QtWrappedObjects::QWrappedObject;

class QWrappedObjectView : public QWidget
{
    Q_OBJECT
public:
    explicit QWrappedObjectView(QWidget *parent = 0);

public Q_SLOTS:
    virtual void setModel(QAbstractItemModel *model);
    void updateSelected();

Q_SIGNALS:
    void wrappedObjectChanged(QWrappedObject *selectedWrappedObject);

protected:
     void contextMenuEvent(QContextMenuEvent *event);

private Q_SLOTS:
    void handleAddMethod();

private:
    void populateContextMenu(QMenu &menu, QtWrappedObjects::QWrappedObject *element);

    QTreeView *_treeView;
    QHash< QString, QPair<QObject *, QMetaMethod> > _visitedAddMethods;
};

#endif // QWRAPPEDOBJECTVIEW_H
