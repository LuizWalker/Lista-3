#include "dadossensor.h"


DadosSensor::DadosSensor(){

}

void DadosSensor::adicionarValores(int numbers){
    valor.push_back(numbers);
}



void DadosSensor::printDados(){
  
  sort(valor.begin(),valor.end());
  cout<<valor[0]<<endl;

  cout<<valor[valor.size()-1]<<endl;

  for(int i=0;i<valor.size();i++){
    frequencia=count(valor.begin(),valor.end(),valor[i]);
    cout<<"O número "<<valor[i]<<" aparece "<<frequencia<<" vezes!"<<endl;
  }
}

