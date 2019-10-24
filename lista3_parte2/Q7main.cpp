#include <iostream>
#include <fstream>
#include "dadossensor.h"

using namespace std;

int main(){
    
    ifstream arquivo;
    int num;
    DadosSensor valores;

    arquivo.open("numeros.txt",ios::app);

     
    while(arquivo>>num){ 

       valores.adicionarValores(num); 

    } 

    valores.printDados();
   
    
    
    return 0;
}