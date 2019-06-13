#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>
#include <QUrl>
#include <QDesktopServices>

#include "arquivos.h"
#include "comodo.h"
#include "residencia.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_ButtonInserir_clicked();

    void on_ButtonLimpar_clicked();

    void on_ButtonOrdenar_clicked();

    void on_action_txt_triggered();

    void on_action_txt_2_triggered();

    void on_action_csv_triggered();

    void on_action_csv_2_triggered();

    void on_tableDados_cellDoubleClicked(int row, int column);

    void on_actionSair_triggered();

    void on_actionEditar_triggered();

    void on_actionManual_triggered();

    void on_actionNormas_e_Recomenda_es_triggered();

private:
    Ui::MainWindow *ui;
    void inserirNaTabela(Comodo c, int linha);
    void atualizarTabela();
    void atualizarEstatisticas();
    Residencia residencia;
};

#endif // MAINWINDOW_H
