#include "arquivos.h"

Arquivos::Arquivos()
{

}

bool Arquivos::salvarArquivoTxt(QString &local, Residencia &lista)
{

    QFile arquivo (local);
    if(!arquivo.open(QIODevice::WriteOnly)) {
        return false; }

    QTextStream saida(&arquivo);

    for (int i=0;i<lista.size();i++) {

        saida << "Comodo..........:" << lista[i].getNome() << ":" << QString::number(lista[i].getNum())
              << "\r\nArea.............:" << lista[i].getArea()
              << "\r\nPotencia Ilumin..:" << lista[i].getPotLuz()
              << "\r\nQuant. de Tomadas:" << lista[i].getQuantTom() << "\r\n\r\n";

    }
    arquivo.close();
    return true;
}

bool Arquivos::carregarArquivoTxt(QString &local, Residencia &lista)
{
    QFile arquivo(local);

    if(!arquivo.open(QIODevice::ReadOnly)) {
        return false; }

    QTextStream entrada(&arquivo);
    QString line;
    Comodo a;
    int i=0;


    while(!entrada.atEnd()){
        line = entrada.readLine();

        QStringList dados = line.split(":");

        switch (i) {
        case 0:
            a.setNome(dados[1]);
            a.setNum(lista.verificarExist(a.getNome()));
            a.setNomeAux(a.getNome() + " " + QString::number(a.getNum()));
            i++;
            break;
        case 1:
            a.setArea(dados[1].toDouble(),1);
            i++;
            break;
        case 2:
            a.setPotLuz(dados[1].toInt());
            i++;
            break;
        case 3:
            a.setQuantTom(dados[1].toInt());
            i++;
            break;
        case 4:
            lista.inserirComodo(a);
            i=0;
            break;
        }

    }

    arquivo.close();
    return true;

}

bool Arquivos::salvarArquivoCsv(QString &local, Residencia &lista)
{

    QFile arquivo (local);
    if(!arquivo.open(QIODevice::WriteOnly)) {
        return false; }

    QTextStream saida(&arquivo);

    for (int i=0;i<lista.size();i++) {

        saida << "Comodo," << lista[i].getNome() << "," << QString::number(lista[i].getNum())
              << "\nArea," << lista[i].getArea()
              << "\nPotencia Ilumin," << lista[i].getPotLuz()
              << "\nQuant. de Tomadas," << lista[i].getQuantTom() << "\n\n";

    }
    arquivo.close();
    return true;
}

bool Arquivos::carregarArquivoCsv(QString &local, Residencia &lista)
{
    QFile arquivo(local);

    if(!arquivo.open(QIODevice::ReadOnly)) {
        return false; }

    QTextStream entrada(&arquivo);
    QString line;
    Comodo a;
    int i=0;


    while(!entrada.atEnd()){
        line = entrada.readLine();

        QStringList dados = line.split(",");

        switch (i) {
        case 0:
            a.setNome(dados[1]);
            a.setNum(lista.verificarExist(a.getNome()));
            a.setNomeAux(a.getNome() + " " + QString::number(a.getNum()));
            i++;
            break;
        case 1:
            a.setArea(dados[1].toDouble(),1);
            i++;
            break;
        case 2:
            a.setPotLuz(dados[1].toInt());
            i++;
            break;
        case 3:
            a.setQuantTom(dados[1].toInt());
            i++;
            break;
        case 4:
            lista.inserirComodo(a);
            i=0;
            break;
        }

    }

    arquivo.close();
    return true;

}


