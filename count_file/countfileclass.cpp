#include "countfileclass.h"
#include "ui_countfileclass.h"
#include "count_fileclass.h"
#include <QMessageBox>

CountFileClass::CountFileClass(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CountFileClass)
{
    ui->setupUi(this);
}

CountFileClass::~CountFileClass()
{
    delete ui;
}


void CountFileClass::on_pushButton_clicked()
{
     Count_FileClass count;
    QString file = ui->lineEdit->text();
    count.print_map(file.toStdString());
    QString print = QString::fromStdString(count.get_text());

    fstream File;
    File.open(file.toStdString() , ios::in);
    if(!File){
        QMessageBox::critical(this , "error" , "cannot be open file");
    }
    ui->textBrowser->setText(print);

}

