#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include <QObject>
#include <QVector>
#include <QDebug>
#include <algorithm>
#include "comodo.h"

class Residencia
{
private:
    QVector <Comodo> residencia;
    QString projetista, crea;

public:
    Residencia();
    void inserirComodo(Comodo c);
    int verificarExist(QString nome);
    void setArea(int index, double largura, double comprimento);
    void calculaPotLuz(int index);
    void calculaQuantTom(int index);

    void setProj(const QString proj);
    QString getProj() const;
    void setCrea(const QString valor);
    QString getCrea() const;

    void ordenarNome();
    void ordenarArea();
    void ordenarQuantTom();

    QString getMaiorPot();
    QString getMenorPot();
    int getMaiorPotValor();
    int getMenorPotValor();
    int getMediaPot();
    int getTotalPot();

    QString getMaiorQuant();
    QString getMenorQuant();
    int getMaiorQuantValor();
    int getMenorQuantValor();
    int getMediaQuant();
    int getTotalQuant();

    int size();
    void clear();
    Comodo operator[](int i);
};

bool compararNome(Comodo c1, Comodo c2);
bool compararArea(Comodo c1, Comodo c2);
bool compararQuant(Comodo c1, Comodo c2);


#endif // RESIDENCIA_H
