#include "model_main.h"
#include "ui_model_main.h"

Model_main::Model_main(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Model_main)
{
    ui->setupUi(this);
}

Model_main::~Model_main()
{
    delete ui;
}


void Model_main::on_pushButtonShowText_clicked()
{
    ui->plainTextEdit->setPlainText("Showed text\rThe first project!");
};

