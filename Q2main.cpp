#include <iostream>
#include <cstdio> 
#include <cstdlib> 
#include <ctime>
#include <fstream>

using namespace std;

int main(){

ofstream arquivo; 

srand(5); 

arquivo.open("numeros.txt",ios::app);

for(int i=0;i<500;i++){ 
     arquivo<<rand()%999<<endl; 
} 

arquivo.close(); 

return 0;
}