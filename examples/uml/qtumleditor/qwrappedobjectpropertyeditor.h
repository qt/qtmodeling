#ifndef QWRAPPEDOBJECTPROPERTYEDITOR_H
#define QWRAPPEDOBJECTPROPERTYEDITOR_H

#include <QtWidgets/QWidget>

class FilterWidget;
class QLabel;
class QTreeView;

namespace QtWrappedObjectsWidgets {
    class QWrappedObjectPropertyModel;
}

class WrappedObjectPropertyFilterModel;

using QtWrappedObjectsWidgets::QWrappedObjectPropertyModel;

class QWrappedObjectPropertyEditor : public QWidget
{
    Q_OBJECT
public:
    explicit QWrappedObjectPropertyEditor(QWidget *parent = 0);

    QWrappedObjectPropertyModel *model() const;

public Q_SLOTS:
    void setModel(QWrappedObjectPropertyModel *model);

private:
    FilterWidget *_filter;
    QLabel *_label;
    QTreeView *_treeView;
    WrappedObjectPropertyFilterModel *_proxyModel;
    QWrappedObjectPropertyModel *_propertyModel;
};

#endif // QWRAPPEDOBJECTPROPERTYEDITOR_H
