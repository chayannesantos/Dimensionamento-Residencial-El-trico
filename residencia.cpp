#include "residencia.h"

Residencia::Residencia()
{

}

void Residencia::inserirComodo(Comodo c) {
    residencia.push_back(c);
}

int Residencia::verificarExist(QString nome) {
    int repet=1;

    for (int i=0;i<residencia.size();i++) {
        if (nome==residencia[i].getNome()) {
            repet++;
        }
    }
    return repet;
}

void Residencia::setArea(int index, double largura, double comprimento) {
    residencia[index].setArea(largura,comprimento);
}

void Residencia::calculaPotLuz(int index) {
    residencia[index].calculaPotLuz();
}

void Residencia::calculaQuantTom(int index) {
    residencia[index].calculaQuantTom();
}

void Residencia::setProj(const QString proj) {
    projetista = proj;
}

QString Residencia::getProj() const {
    return projetista;
}

void Residencia::setCrea(const QString valor) {
    crea = valor;
}

QString Residencia::getCrea() const {
    return crea;
}

void Residencia::ordenarNome() {
    std::sort(residencia.begin(),residencia.end(),compararNome);
}

void Residencia::ordenarArea() {
    ordenarNome();
    std::sort(residencia.begin(),residencia.end(),compararArea);
}

void Residencia::ordenarQuantTom() {
    ordenarNome();
    std::sort(residencia.begin(),residencia.end(),compararQuant);
}


QString Residencia::getMaiorPot() {
    ordenarArea();
    return residencia[0].getNomeAux();
}

QString Residencia::getMenorPot() {
    ordenarArea();
    return residencia[residencia.size()-1].getNomeAux();
}

int Residencia::getMaiorPotValor() {
    ordenarArea();
    return residencia[0].getPotLuz();
}

int Residencia::getMenorPotValor() {
    ordenarArea();
    return residencia[residencia.size()-1].getPotLuz();
}

int Residencia::getMediaPot() {
    int media=0;
    for (int i=0;i<residencia.size();i++) {
        media = media + residencia[i].getPotLuz();
    }
    return media/residencia.size();
}

int Residencia::getTotalPot() {
    int total=0;
    for (int i=0;i<residencia.size();i++) {
        total = total + residencia[i].getPotLuz();
    }
    return total;
}

QString Residencia::getMaiorQuant() {
    ordenarQuantTom();
    return residencia[0].getNomeAux();
}

QString Residencia::getMenorQuant() {
    ordenarQuantTom();
    return residencia[residencia.size()-1].getNomeAux();
}

int Residencia::getMaiorQuantValor() {
    ordenarQuantTom();
    return residencia[0].getQuantTom();
}

int Residencia::getMenorQuantValor() {
    ordenarQuantTom();
    return residencia[residencia.size()-1].getQuantTom();
}

int Residencia::getMediaQuant() {
    int media=0;
    for (int i=0;i<residencia.size();i++) {
        media = media + residencia[i].getQuantTom();
    }
    return media/residencia.size();
}

int Residencia::getTotalQuant() {
    int total=0;
    for (int i=0;i<residencia.size();i++) {
        total = total + residencia[i].getQuantTom();
    }
    return total;
}

int Residencia::size() {
    return residencia.size();
}

void Residencia::clear() {
    residencia.clear();
}

Comodo Residencia::operator[](int i) {
    return  residencia[i];
}

bool compararNome(Comodo c1, Comodo c2) {
    return c1.getNomeAux() < c2.getNomeAux();
}

bool compararArea(Comodo c1, Comodo c2) {
    return c1.getArea() > c2.getArea();
}

bool compararQuant(Comodo c1, Comodo c2) {
    return c1.getQuantTom() > c2.getQuantTom();
}

