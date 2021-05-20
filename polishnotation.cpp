
#include "polishnotation.h"
#include "ui_polishnotation.h"
#include <stack>

using namespace std;

stack<double> st;

int Dot_count = 0, number_count = 0;
const int max_number_count = 6;
QString value;
bool flag = 0;

PolishNotation::PolishNotation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PolishNotation)
{
    ui->setupUi(this);
}

PolishNotation::~PolishNotation()
{
    delete ui;
}

void PolishNotation::on_Btn_0_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '0');
        value += '0';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_1_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        QString Result = ui->L_Result_out->text();
        Result += '1';
        ui->L_Result_out->setText(Result);
        value += '1';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_2_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        QString Result = ui->L_Result_out->text();
        Result.append('2');
        ui->L_Result_out->setText(Result);
        value += '2';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_3_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        QString Result = ui->L_Result_out->text() + '3';
        ui->L_Result_out->setText(Result);
        value += '3';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_4_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '4');
        value += '4';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_5_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '5');
        value += '5';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_6_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '6');
        value += '6';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_7_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '7');
        value += '7';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_8_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '8');
        value += '8';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_9_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if(number_count < max_number_count)
    {
        ui->L_Result_out->setText(ui->L_Result_out->text() + '9');
        value += '9';
        number_count++;
    }
    else
    {
        ui->L_Error->setText("Error: Превышение максимального кол-ва разрядов в числе!");
    }
}

void PolishNotation::on_Btn_Dot_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if (Dot_count == 0)
    {
        if(ui->L_Result_out->text() == "")
        {
            ui->L_Result_out->setText("0.");
            Dot_count++;
            value += "0.";
            number_count++;
        }
        else if(ui->L_Result_out->text()=="-")
        {
            ui->L_Result_out->setText("-0.");
            Dot_count++;
            value += "0.";
            number_count++;
        }
        else
        {
            ui->L_Result_out->setText(ui->L_Result_out->text() + '.');
            value += '.';
            Dot_count++;
        }
    }
}

void PolishNotation::on_Btn_Inversion_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    QString result = ui->L_Result_out->text();
    if(result == "")
    {
        ui->L_Result_out->setText("-");
    }
    else if (result == "-")
    {
        ui->L_Result_out->setText("");
    }
    else
    {
        QString temp = "";
        double number = result.toDouble();
        if(number >= 0)
        {
            temp += '-';
            temp += value;
            ui->L_Result_out->setText(temp);
        }
        else if(number < 0) {
            ui->L_Result_out->setText(value);
        }
    }
}

void PolishNotation::on_Btn_Clear_clicked()
{
    ui->L_Result_out->setText("");
    ui->L_Stack->setText("");
    ui->L_PN->setText("");
    ui->L_Error->setText("");
    while(!st.empty())
    {
        st.pop();
    }
    value = "";
    Dot_count = 0;
    number_count = 0;
    flag = 0;
}

void PolishNotation::on_Btn_Separate_clicked()
{
    if(flag==true)
    {
        ui->L_Result_out->setText("");
        flag = 0;
    }
    if (ui->L_Result_out->text() == "")
    {
        st.push(0.0);
        ui->L_PN->setText(ui->L_PN->text() + "0 ");
    }
    else
    {
        QString number = ui->L_Result_out->text();
        st.push(number.toDouble());
        ui->L_PN->setText(ui->L_PN->text() + number + " ");
    }
    ui->L_Result_out->setText("");
    ui->L_Error->setText("");
    value = "";
    Dot_count = 0;
    number_count = 0;
    flag = 0;
}

void PolishNotation::on_Btn_Plus_clicked()
{
    if(st.size() > 1)
    {
        re_change('+');
        ui->L_PN->setText(ui->L_PN->text() + "+ ");
        double arg1, arg2 = st.top(), result;
        st.pop();
        arg1 = st.top();
        st.pop();
        result = arg1 + arg2;
        st.push(result);
        QString output = QString::number(result);
        ui->L_Result_out->setText(output);
        flag = 1;
    }
    else
    {
        ui->L_Error->setText("Error: Недостаточно операндов!");
    }
}

void PolishNotation::on_Btn_Multiply_clicked()
{
    if(st.size() > 1)
    {
        re_change('*');
        ui->L_PN->setText(ui->L_PN->text() + "* ");
        double arg1, arg2 = st.top(), result;
        st.pop();
        arg1 = st.top();
        st.pop();
        result = arg1 * arg2;
        st.push(result);
        QString output = QString::number(result);
        ui->L_Result_out->setText(output);
        flag = 1;
    }
    else
    {
        ui->L_Error->setText("Error: Недостаточно операндов!");
    }
}

void PolishNotation::on_Btn_Split_clicked()
{
    if(st.size() > 1)
    {
        re_change('/');
        ui->L_PN->setText(ui->L_PN->text() + "/ ");
        double arg1, arg2 = st.top(), result;
        st.pop();
        arg1 = st.top();
        st.pop();
        result = arg1 / arg2;
        st.push(result);
        QString output = QString::number(result);
        ui->L_Result_out->setText(output);
        flag = 1;
    }
    else
    {
        ui->L_Error->setText("Error: Недостаточно операндов!");
    }
}

void PolishNotation::on_Btn_Raise_clicked()
{
    if(st.size() > 1)
    {
        if(st.top() != (int)st.top())
        {
            ui->L_Error->setText("Error: Второй операнд не является целым числом!");
        }
        else
        {
            re_change('^');
            ui->L_PN->setText(ui->L_PN->text() + "^ ");
            double arg1, arg2 = st.top(), result;
            st.pop();
            arg1 = st.top();
            st.pop();
            result = 1;
            for(int i = 0; i < arg2; i++){
                result *= arg1;
            }
            st.push(result);
            QString output = QString::number(result);
            ui->L_Result_out->setText(output);
            flag = 1;
        }
    }
    else
    {
        ui->L_Error->setText("Error: Недостаточно операндов!");
    }
}

void PolishNotation::on_Btn_Minus_clicked()
{
    if(st.size() > 1)
    {
        re_change('-');
        ui->L_PN->setText(ui->L_PN->text() + "- ");
        double arg1, arg2 = st.top(), result;
        st.pop();
        arg1 = st.top();
        st.pop();
        result = arg1 - arg2;
        st.push(result);
        QString output = QString::number(result);
        ui->L_Result_out->setText(output);
        flag = 1;
    }
    else
    {
        ui->L_Error->setText("Error: Недостаточно операндов!");
    }
}

void PolishNotation::re_change(char op)
{
    stack<double> temp_stack;
    temp_stack = st;
    QString elem = QString::number(temp_stack.top());
    temp_stack.pop();
    switch (op)
    {
        case '+': ui->L_Stack->setText(QString::number(temp_stack.top())+ " + " + elem + " = "); break;
        case '-': ui->L_Stack->setText(QString::number(temp_stack.top())+ " - " + elem + " = "); break;
        case '/': ui->L_Stack->setText(QString::number(temp_stack.top())+ " / " + elem + " = "); break;
        case '*': ui->L_Stack->setText(QString::number(temp_stack.top())+ " * " + elem + " = "); break;
        case '^': ui->L_Stack->setText(QString::number(temp_stack.top())+ " ^ " + elem + " = "); break;
    }
}

void PolishNotation::on_Btn_Chop_clicked()
{
    if(flag == 0)
    {
        QString result = ui->L_Result_out->text();
        if (Dot_count == 1)
        {
            int pos = value.lastIndexOf('.');
            if (value.length()-1 == pos)
            {
                Dot_count=0;
            }
            result.chop(1);
            value.chop(1);
            number_count--;
        }
        else
        {
            result.chop(1);
            value.chop(1);
            number_count--;
        }
        ui->L_Result_out->setText(result);
    }
}
