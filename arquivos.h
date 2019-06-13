#ifndef ARQUIVOS_H
#define ARQUIVOS_H

#include <QObject>
#include <QFile>
#include <QTextStream>

#include "comodo.h"
#include "residencia.h"

class Arquivos
{

public:
    Arquivos();
    static bool salvarArquivoTxt(QString &local, Residencia &lista);
    static bool carregarArquivoTxt(QString &local, Residencia &lista);

    static bool salvarArquivoCsv(QString &local, Residencia &lista);
    static bool carregarArquivoCsv(QString &local, Residencia &lista);

};

#endif // ARQUIVOS_H
