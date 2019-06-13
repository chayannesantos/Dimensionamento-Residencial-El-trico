#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->addPermanentWidget(ui->label_projetista);
}

void MainWindow::inserirNaTabela(Comodo c, int linha)
{
    if (c.getNum()==1) {
        ui->tableDados->setItem(linha,0,new QTableWidgetItem(c.getNome()));

    } else {
        ui->tableDados->setItem(linha,0,new QTableWidgetItem(c.getNomeAux()));
    }

    ui->tableDados->setItem(linha,1,new QTableWidgetItem(QString::number(c.getArea()) + " m²"));
    ui->tableDados->setItem(linha,2,new QTableWidgetItem(QString::number(c.getQuantTom())));
    ui->tableDados->setItem(linha,3,new QTableWidgetItem(QString::number(c.getPotLuz()) + " VA"));
}

void MainWindow::atualizarTabela() {
    ui->tableDados->clearContents();
    for (int i=0;i<residencia.size();i++) {
        inserirNaTabela(residencia[i],i);
    }
}

void MainWindow::atualizarEstatisticas() {

    ui->label_maiorPot->setText(residencia.getMaiorPot() + " - " + QString::number(residencia.getMaiorPotValor()) + " VA");
    ui->label_menorPot->setText(residencia.getMenorPot() + " - " + QString::number(residencia.getMenorPotValor()) + " VA");
    ui->label_mediaPot->setText(QString::number(residencia.getMediaPot()) + " VA");
    ui->label_totalPot->setText(QString::number(residencia.getTotalPot()) + " VA");

    ui->label_maiorQuant->setText(residencia.getMaiorQuant() + " - " + QString::number(residencia.getMaiorQuantValor()));
    ui->label_menorQuant->setText(residencia.getMenorQuant() + " - " + QString::number(residencia.getMenorQuantValor()));
    ui->label_mediaQuant->setText(QString::number(residencia.getMediaQuant()));
    ui->label_totalQuant->setText(QString::number(residencia.getTotalQuant()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ButtonInserir_clicked()
{
    if(ui->CBcomodos->currentText() != "Selecionar um Cômodo" && ui->lineLargura->text().size() != 0 && ui->lineComprimento->text().size() != 0 && ui->lineLargura->text().toDouble() >0 && ui->lineComprimento->text().toDouble()>0 ) {

        Comodo comodo;
        QString nome = ui->CBcomodos->currentText();
        comodo.setNome(nome);
        comodo.setNum(residencia.verificarExist(nome));
        comodo.setNomeAux(nome + " " + QString::number(comodo.getNum()));
        comodo.setArea(ui->lineLargura->text().toDouble(),ui->lineComprimento->text().toDouble());
        comodo.calculaPotLuz();
        comodo.calculaQuantTom();

        int linha = ui->tableDados->rowCount();
        ui->tableDados->insertRow(linha);
        inserirNaTabela(comodo,linha);

        residencia.inserirComodo(comodo);
        atualizarEstatisticas();

        ui->CBcomodos->setCurrentText("Selecionar um Cômodo");
        ui->lineLargura->clear();
        ui->lineComprimento->clear();

    } else {
        QMessageBox::warning(this,"Erro","Preencha todos os campos corretamente!");
        ui->CBcomodos->setCurrentText("Selecionar um Cômodo");
        ui->lineLargura->clear();
        ui->lineComprimento->clear();
    }

}

void MainWindow::on_ButtonLimpar_clicked()
{
    ui->CBcomodos->setCurrentText("Selecionar um Cômodo");
    ui->lineLargura->clear();
    ui->lineComprimento->clear();
}

void MainWindow::on_ButtonOrdenar_clicked()
{
    if (ui->Button_OrdenNome->isChecked()) {
        residencia.ordenarNome();
        atualizarTabela();

    } else if (ui->Button_OrdenArea->isChecked()) {
        residencia.ordenarArea();
        atualizarTabela();

    }  else if (ui->Button_OrdenQuant->isChecked()) {
        residencia.ordenarQuantTom();
        atualizarTabela();

    } else {
        QMessageBox::warning(this,"Erro","Selecione uma das opções!");
    }
}

void MainWindow::on_action_txt_triggered()
{
    QString localname = QFileDialog::getSaveFileName(this,"Salvar Arquivo","C://","Arquivo de Texto (*.txt)");

    if(Arquivos::salvarArquivoTxt(localname,residencia))
        QMessageBox::information(this,"Salvar Arquivo", "Arquivo salvo com sucesso!");
    else
        QMessageBox::information(this,"Salvar Arquivo", "Não foi possível salvar o Arquivo!");
}

void MainWindow::on_action_txt_2_triggered()
{
    QString local = QFileDialog::getOpenFileName(this, "Abrir Arquivo","C://","Arquivo de Texto(*.txt)");

    if (Arquivos::carregarArquivoTxt(local,residencia)) {

        ui->tableDados->clearContents();
        ui->tableDados->setRowCount(0);
        for (int i=0;i<residencia.size();i++) {
            ui->tableDados->insertRow(i);
            inserirNaTabela(residencia[i],i);
        }
    atualizarEstatisticas();

    } else {
        QMessageBox::information(this, "Carregar Arquivo", "Não foi possível carregar o Arquivo!");
    }
}

void MainWindow::on_action_csv_triggered()
{
    QString localname = QFileDialog::getSaveFileName(this,"Salvar Arquivo","C://","Arquivo csv (*.csv)");

    if(Arquivos::salvarArquivoCsv(localname,residencia))
        QMessageBox::information(this,"Salvar Arquivo", "Arquivo salvo com sucesso!");
    else
        QMessageBox::information(this,"Salvar Arquivo", "Não foi possível salvar o Arquivo!");
}

void MainWindow::on_action_csv_2_triggered()
{
    QString local = QFileDialog::getOpenFileName(this, "Abrir Arquivo","C://","Arquivo csv (*.csv)");

    if (Arquivos::carregarArquivoCsv(local,residencia)) {

        ui->tableDados->clearContents();
        ui->tableDados->setRowCount(0);
        for (int i=0;i<residencia.size();i++) {
            ui->tableDados->insertRow(i);
            inserirNaTabela(residencia[i],i);
        }
    atualizarEstatisticas();

    } else {
        QMessageBox::information(this, "Carregar Arquivo", "Não foi possível carregar o Arquivo!");
    }
}

void MainWindow::on_tableDados_cellDoubleClicked(int row, int column)
{
    if(column == 1){
           QMessageBox::StandardButton resp = QMessageBox::question(this, "Editar Item", "Deseja alterar a Area?");

           if(resp == QMessageBox::Yes){
               bool ok1,ok2;
               QString newLargura = QInputDialog::getText(this, "Alterar Largura", "Nova Largura: ",QLineEdit::Normal ,"",&ok1);
               QString newComprimento = QInputDialog::getText(this, "Alterar Comprimento", "Novo Comprimento: ",QLineEdit::Normal ,"",&ok2);

               if(ok1 and ok2 and !newLargura.isEmpty() and !newComprimento.isEmpty()){
                   residencia.setArea(row,newLargura.toDouble(),newComprimento.toDouble());
               }

               residencia.calculaPotLuz(row);
               residencia.calculaQuantTom(row);

               inserirNaTabela(residencia[row],row);
               atualizarEstatisticas();
           }
    }
}

void MainWindow::on_actionSair_triggered()
{
    close();
}

void MainWindow::on_actionEditar_triggered()
{
    bool ok1,ok2;
    QString proj = QInputDialog::getText(this, "Cadastrar Projetista", "Nome do Projetista: ",QLineEdit::Normal ,"",&ok1);
    QString crea = QInputDialog::getText(this, "Cadastrar Projetista", "CREA: ",QLineEdit::Normal ,"",&ok2);

    residencia.setProj(proj);
    residencia.setCrea(crea);

    ui->label_projetista->setText("Projetista: " + residencia.getProj() + " | CREA: " + residencia.getCrea());

}

void MainWindow::on_actionManual_triggered()
{
    QUrl url = QUrl("https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/README.md");

    QDesktopServices::openUrl(url);
}

void MainWindow::on_actionNormas_e_Recomenda_es_triggered()
{
    QUrl url = QUrl("http://www.dt.fee.unicamp.br/~akebo/et017/Instalacoes_Eletricas_1.pdf");

    QDesktopServices::openUrl(url);
}
