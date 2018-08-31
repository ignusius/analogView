#ifndef ANALOGVIEW_H
#define ANALOGVIEW_H

#include <QWidget>

namespace Ui {

class AnalogView;

}

class AnalogView : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(double value READ getValue WRITE setValue)

public:
    explicit AnalogView(QWidget *parent = nullptr);
    ~AnalogView();
    int text;
    void setValue(double);
    double getValue();

private:
    Ui::AnalogView *ui;
};

#endif // ANALOGVIEW_H
