#ifndef MODEL_MAIN_H
#define MODEL_MAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Model_main; }
QT_END_NAMESPACE

class Model_main : public QMainWindow
{
    Q_OBJECT

public:
    Model_main(QWidget *parent = nullptr);
    ~Model_main();

private slots:
    void on_pushButtonShowText_clicked();

private:
    Ui::Model_main *ui;
};
#endif // MODEL_MAIN_H
