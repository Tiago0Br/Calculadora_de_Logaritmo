#include "calculadora.h"
#include "ui_calculadora.h"
#include <QMessageBox>
#include "math.h"
#include <stdio.h>

Calculadora::Calculadora(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculadora)
{
    ui->setupUi(this);
}

Calculadora::~Calculadora()
{
    delete ui;
}

float num1, num2, num3;
int opcao;

void Calculadora::on_btn_calcular_clicked()
{
    if (ui->base_logaritmando->isChecked()) {
        // Opção base e logaritmando
        opcao = 1;
    } else if (ui->base_logaritmo->isChecked()) {
        // Opção base e logaritmo
        opcao = 2;
    } else if (ui->logaritmo_logaritmando->isChecked()) {
        // Opção logaritmo e logaritmando
        opcao = 3;
    } else {
        // Usuário clicou no botão sem selecionar nenhuma opção
        opcao = 0;
    }

    switch (opcao) {
        case 1:
            // num1 = Logaritmando
            // num2 = Base
            num1 = ui->num1->value();
            num2 = ui->num2->value();

            if (num2 == 1) {
                QMessageBox::warning(this, "Aviso!", "A base não pode ser igual a 1!");
                num3 = 0;
            } else if (num1 == num2) {
                num3 = 1;
            } else if (num1 == 1) {
                num3 = 0;
            } else {
                num3 = log(num1)/log(num2);
            }

            ui->txt_base->setText(QString::number(num2));
            ui->txt_logaritmando->setText(QString::number(num1));
            ui->txt_logaritmo->setText(QString::number(num3));
            break;

        case 2:
            // num1 = Base
            // num2 = Logaritmo
            num1 = ui->num1->value();
            num2 = ui->num2->value();

            if (num1 == 1) {
                QMessageBox::warning(this, "Aviso!", "A base não pode ser igual a 1!");
                num3 = 0;
            } else if (num2 == 0) {
                num3 = 1;
            } else {
                num3 = pow(num1, num2);
            }

            ui->txt_base->setText(QString::number(num1));
            ui->txt_logaritmo->setText(QString::number(num2));
            ui->txt_logaritmando->setText(QString::number(num3));
            break;

        case 3:
            // num1 = Logaritmando
            // num2 = Logaritmo
            num1 = ui->num1->value();
            num2 = ui->num2->value();

            if (num2 == 1) {
                num3 = num1;
            } else if(num1 == 1 && num2 == 0) {
                QMessageBox::warning(this, "Aviso", "Todo número elevado a 0 (exceto o 0) é igual a 1!");
                num3 = 0;
            } else if (num1 != 1 && num2 == 0) {
                QMessageBox::warning(this, "Aviso", "Não foi possível realizar essa conta, pois "
                                                    "todo número elevado a 0 (exceto o 0) é igual a 1!");
                num3 = 0;
            } else {
                num3 = pow(num1, 1.0/num2);
            }

            ui->txt_base->setText(QString::number(num3));
            ui->txt_logaritmo->setText(QString::number(num2));
            ui->txt_logaritmando->setText(QString::number(num1));
            break;

        default:
            // Exibe uma mensagem de erro
            QMessageBox::information(this, "Aviso", "Selecione alguma opção.");
            break;
    }
}

void Calculadora::on_base_logaritmando_clicked()
{
    ui->input_num1->setText("Insira o Logaritmando: ");
    ui->input_num2->setText("Insira a Base: ");
}

void Calculadora::on_base_logaritmo_clicked()
{
    ui->input_num1->setText("Insira a Base: ");
    ui->input_num2->setText("Insira o Logaritmo: ");
}

void Calculadora::on_logaritmo_logaritmando_clicked()
{
    ui->input_num1->setText("Insira o Logaritmando: ");
    ui->input_num2->setText("Insira o Logaritmo: ");
}
