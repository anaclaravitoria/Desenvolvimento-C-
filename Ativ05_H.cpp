#include<iostream>
using namespace std;

int main(){

    int numero;
    
    cout << "Digite um número inteiro:\n";
    cin >> numero;
    
    if(numero <= 0){
    cout << "Insira números positivos!\n";
    return 1;
    }
    
    cout << "Os número divisíveis por " << numero << " são:\n";
    for (int i = 1; i <= numero; i++){
    if(numero % i == 0){
    cout << i << " ";
    
     }
    
   }
    
    return 0;
}
 