#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton(this);

    button->setText(QString());
}

MainWidget::~MainWidget()
{
    
}
