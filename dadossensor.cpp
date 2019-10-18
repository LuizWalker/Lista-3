#include "dadossensor.h"


DadosSensor::DadosSensor(int vlr,int hz){

    valor=vlr;
    frequencia=hz;
}

int DadosSensor::getValor(){
    return valor;
}

int DadosSensor::getFrequencia(){
    return frequencia;
}

void DadosSensor::printDados(){
    cout<<"Valor = "<<valor<<endl;
    cout<<"Frequência = "<<frequencia<<endl;
}