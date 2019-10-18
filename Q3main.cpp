#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(){ 

ifstream arquivo;

int num; 
 
//vector<int>vetor; <- outro método!!

arquivo.open("numeros.txt",ios::app);

while(arquivo>>num){ 

     cout<<num<<endl;

}
     
//while(arquivo>>num){ 

// vetor.push_back(num); 

//} 
//for(auto elemento : vetor){  <- outro método!!

// cout<<elemento<<" "<<endl; 

//} //arquivo.close(); 

return 0;
}