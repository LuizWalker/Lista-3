#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 

ifstream arquivo;

int num; 
 
vector<int>vetor;

arquivo.open("numeros.txt",ios::app);

     
while(arquivo>>num){ 

vetor.push_back(num); 

} 

sort(vetor.begin(),vetor.end());

cout<<vetor[0]<<endl;
cout<<vetor[vetor.size()-1]<<endl;

arquivo.close(); 

return 0;
}