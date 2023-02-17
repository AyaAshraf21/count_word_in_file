#ifndef COUNTFILECLASS_H
#define COUNTFILECLASS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CountFileClass; }
QT_END_NAMESPACE

class CountFileClass : public QMainWindow
{
    Q_OBJECT

public:
    CountFileClass(QWidget *parent = nullptr);
    ~CountFileClass();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CountFileClass *ui;
};
#endif // COUNTFILECLASS_H
