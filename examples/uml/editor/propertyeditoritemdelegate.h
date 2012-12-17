#ifndef PROPERTYEDITORITEMDELEGATE_H
#define PROPERTYEDITORITEMDELEGATE_H

#include <QStyledItemDelegate>

class PropertyEditorItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit PropertyEditorItemDelegate(QObject *parent = 0);
    virtual ~PropertyEditorItemDelegate();

    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const;
    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

private Q_SLOTS:
    void editorChanged();
};

#endif // PROPERTYEDITORITEMDELEGATE_H
