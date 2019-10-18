#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

ifstream arquivo;

int num;
int qtd; 

 
vector<int>vetor;

arquivo.open("numeros.txt",ios::app);

     
while(arquivo>>num){ 

vetor.push_back(num); 

} 

sort(vetor.begin(),vetor.end());

cout<<vetor[0]<<endl;
cout<<vetor[vetor.size()-1]<<endl;

for(auto elemento : vetor){
qtd = count(vetor.begin(),vetor.end(),elemento);
cout<<"O número "<<elemento<<" aparece "<<qtd<<" vezes!"<<endl;
}


arquivo.close(); 

return 0;
}