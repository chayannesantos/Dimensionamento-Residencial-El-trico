#include "comodo.h"

QString Comodo::getNome() const
{
    return nome;
}

void Comodo::setNome(const QString &value)
{
    nome = value;
}

void Comodo::setNomeAux(const QString &value) {
    nomeaux = value;
}

QString Comodo::getNomeAux() const
{
    return nomeaux;
}

double Comodo::getArea() const
{
    return area;
}

void Comodo::setArea(double largura, double comprimento)
{
    area = largura * comprimento;
    perimetro = 2*(largura + comprimento);
}

void Comodo::calculaPotLuz()
{
   int a;
    a= int((area - 6)/4);

    if(a>=1) {
        potLuz = 100 + a*60;
    } else {
        potLuz = 100;
    }
}

void Comodo::calculaQuantTom()
{
   double p;

   if(nome == "Cozinha" || nome == "Area de Serviço") {
        p = perimetro/3.5;
        quantTom = int(round(p));

    } else if (nome == "Varanda" || nome == "Garagem" || nome == "Jardim" || nome == "Banheiro") {
        quantTom = 1;

    } else {
        if (area<=6) {
            quantTom = 1;
        } else {
            p = perimetro/5;
            quantTom = int(round(p));
       }
    }
}

void Comodo::setPotLuz(int p) {
    potLuz = p;
}

void Comodo::setQuantTom(int q) {
    quantTom = q;
}

int Comodo::getPotLuz() {
    return potLuz;
}

int Comodo::getQuantTom() {
    return quantTom;
}

void Comodo::setNum(int n) {
    num = n;
}

int Comodo::getNum() const
{
    return num;
}


Comodo::Comodo()
{

}
