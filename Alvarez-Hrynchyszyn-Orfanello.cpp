#include<iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main(){
    char abecedario[26] = {'a', 'b', 'c', 'd', 'e', 'f','g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char codigo[8];
    int  numero,

    srand(time(0));
    for(int i=0;i<8;i++){
         numero = rand() % 26;
      codigo[i] = abecedario[numero];
   }
   cout << "codigo ganador:\n ";
   for(int i=0;i<8;i++) {
       if(i==4) {
           cout<< "-";
       }
       cout<<codigo[i];
   }
   return 0;



    }
