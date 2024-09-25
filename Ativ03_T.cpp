#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    if (numero % 3 == 0 || numero % 5 == 0){
        cout << "\nO número é divisível por 3 ou por 5.";
    } else {
        cout << "\nO número não é divisivel por 3 ou por 5.";
    }
    
    return 0;
}