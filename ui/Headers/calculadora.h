#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculadora; }
QT_END_NAMESPACE

class Calculadora : public QMainWindow
{
    Q_OBJECT

public:
    Calculadora(QWidget *parent = nullptr);
    ~Calculadora();

private slots:
    void on_btn_calcular_clicked();

    void on_base_logaritmando_clicked();

    void on_base_logaritmo_clicked();

    void on_logaritmo_logaritmando_clicked();

private:
    Ui::Calculadora *ui;
};
#endif // CALCULADORA_H
