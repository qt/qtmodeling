#ifndef PROPERTYEDITOR_H
#define PROPERTYEDITOR_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QAbstractItemDelegate>

namespace QtWrappedObjects {
    class QMetaPropertyInfo;
}
using QtWrappedObjects::QMetaPropertyInfo;

class PropertyEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int value READ value WRITE setValue USER true)

public:
    explicit PropertyEditor(QWidget *widget, QMetaPropertyInfo *metaPropertyInfo, QWidget *parent = 0);

    int value() const;
    void setValue(int value);

Q_SIGNALS:
    void commitData(QWidget *editor);
    void closeEditor(QWidget *editor, QAbstractItemDelegate::EndEditHint hint = QAbstractItemDelegate::NoHint);

private Q_SLOTS:
    void resetClicked();

private:
    QWidget *_widget;
    QMetaPropertyInfo *_metaPropertyInfo;
};

#endif // PROPERTYEDITOR_H
