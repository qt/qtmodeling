#ifndef QWRAPPEDOBJECTPROPERTYEDITOR_H
#define QWRAPPEDOBJECTPROPERTYEDITOR_H

#include <QtWidgets/QWidget>

class FilterWidget;
class QLabel;
class QTreeView;

class WrappedObjectPropertyModel;
class WrappedObjectPropertyFilterModel;

class QWrappedObjectPropertyEditor : public QWidget
{
    Q_OBJECT
public:
    explicit QWrappedObjectPropertyEditor(QWidget *parent = 0);

    WrappedObjectPropertyModel *model() const;

public Q_SLOTS:
    void setModel(WrappedObjectPropertyModel *model);

private:
    FilterWidget *_filter;
    QLabel *_label;
    QTreeView *_treeView;
    WrappedObjectPropertyFilterModel *_proxyModel;
    WrappedObjectPropertyModel *_propertyModel;
};

#endif // QWRAPPEDOBJECTPROPERTYEDITOR_H
