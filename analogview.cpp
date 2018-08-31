#include "analogview.h"
#include "ui_analogview.h"


AnalogView::AnalogView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnalogView)

{
    ui->setupUi(this);
}

AnalogView::~AnalogView()
{
    delete ui;
}

 void AnalogView::setValue(double n){
  ui->value->setText(QString::number(n));

}
 double AnalogView::getValue(){
  QString str = ui->value->text();
  double res = str.toDouble();
  return res;

}
