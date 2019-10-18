#include <iostream>

#ifndef DADOSSENSOR_H
#define DADOSSENSOR_H

using namespace std;

class DadosSensor{

    protected:

    int valor;
    int frequencia;

    public:

    DadosSensor(int vlt,int hz);

    int getValor();
    int getFrequencia();
    
    void printDados();
};

#endif