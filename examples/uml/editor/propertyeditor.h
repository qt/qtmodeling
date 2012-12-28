#ifndef PROPERTYEDITOR_H
#define PROPERTYEDITOR_H

#include <QWidget>

class PropertyEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int intValue READ intValue WRITE setIntValue NOTIFY intValueChanged USER true)

public:
    explicit PropertyEditor(QWidget *widget, bool resettable, QWidget *parent = 0);

    int intValue() const;
    void setIntValue(int intValue);

Q_SIGNALS:
    void intValueChanged(int intValue);

private:
    QWidget *_widget;
};

#endif // PROPERTYEDITOR_H
