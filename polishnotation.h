#ifndef POLISHNOTATION_H
#define POLISHNOTATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PolishNotation; }
QT_END_NAMESPACE

class PolishNotation : public QMainWindow
{
    Q_OBJECT

public:
    PolishNotation(QWidget *parent = nullptr);
    ~PolishNotation();
    void re_change(char);

private slots:
    void on_Btn_0_clicked();
    void on_Btn_1_clicked();
    void on_Btn_2_clicked();
    void on_Btn_3_clicked();
    void on_Btn_4_clicked();
    void on_Btn_5_clicked();
    void on_Btn_6_clicked();
    void on_Btn_7_clicked();
    void on_Btn_8_clicked();
    void on_Btn_9_clicked();
    void on_Btn_Dot_clicked();
    void on_Btn_Inversion_clicked();
    void on_Btn_Clear_clicked();
    void on_Btn_Separate_clicked();
    void on_Btn_Plus_clicked();
    void on_Btn_Multiply_clicked();
    void on_Btn_Split_clicked();
    void on_Btn_Raise_clicked();
    void on_Btn_Minus_clicked();
    void on_Btn_Chop_clicked();

private:
    Ui::PolishNotation* ui;
};
#endif // POLISHNOTATION_H
