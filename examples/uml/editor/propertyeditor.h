#ifndef PROPERTYEDITOR_H
#define PROPERTYEDITOR_H

#include <QWidget>

class PropertyEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int value READ value WRITE setValue USER true NOTIFY valueChanged)

public:
    explicit PropertyEditor(QWidget *widget, bool resettable, QWidget *parent = 0);

    int value() const;
    void setValue(int value);

Q_SIGNALS:
    void valueChanged(int value);
    void resetRequired();

private:
    QWidget *_widget;
};

#endif // PROPERTYEDITOR_H
