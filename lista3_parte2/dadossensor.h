#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

#ifndef DADOSSENSOR_H
#define DADOSSENSOR_H

using namespace std;

class DadosSensor{

    private:

    vector <int> valor;
    int frequencia;

    public:

    DadosSensor();

    void adicionarValores(int numbers);
    void printDados();
};

#endif