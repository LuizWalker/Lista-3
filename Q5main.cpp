#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

ifstream arquivo;

int num;
int frequencia; 

 
vector<int>vetor;

arquivo.open("numeros.txt",ios::app);

     
while(arquivo>>num){ 

vetor.push_back(num); 

} 

sort(vetor.begin(),vetor.end());

cout<<vetor[0]<<endl;
cout<<vetor[vetor.size()-1]<<endl;

for(int i=0;i<=vetor[vetor.size()-1];i++){
    frequencia=count(vetor.begin(),vetor.end(),i);
    cout<<"O número "<<i<<" aparece "<<frequencia<<" vezes!"<<endl;
}


arquivo.close(); 

return 0;
}
