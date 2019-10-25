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

  for(int i=0;i<=valor[valor.size()-1];i++){
    frequencia=count(valor.begin(),valor.end(),i);
    cout<<"O número "<<i<<" aparece "<<frequencia<<" vezes!"<<endl;
  }
}

