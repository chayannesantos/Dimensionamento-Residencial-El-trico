#ifndef COMODO_H
#define COMODO_H

#include <QObject>
#include <math.h>

class Comodo
{

private:
    QString nomeaux;
    QString nome;
    double area, perimetro;
    int potLuz, quantTom, num;

public:
    Comodo();
    QString getNome() const;
    void setNome(const QString &value);
    QString getNomeAux() const;
    void setNomeAux(const QString &value);
    double getArea() const;
    void setArea(double largura, double comprimento);

    void calculaPotLuz();
    void calculaQuantTom();
    void setPotLuz(int p);
    void setQuantTom(int q);
    int getPotLuz();
    int getQuantTom();

    int getNum() const;
    void setNum(int n);

};

#endif // COMODO_H
