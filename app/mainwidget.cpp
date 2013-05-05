#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    button = new QPushButton(this);

    this->setGeometry(0,0,1000,500);

    button->setText(tr("music"));
    button->setGeometry(500,250,150,150);
}

MainWidget::~MainWidget()
{
    
}
