#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

/*Crie um programa que peça ao usuário para digitar um número e verifique se
ele não é igual a zero. Se a condição for verdadeira, o programa deve
imprimir &quot;O número é diferente de zero&quot;.*/

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    if (numero != 0){
        cout << "\nO número é diferente de zero.";
    } else {
        cout << "\nO número é igual a zero.";
    }
    
    return 0;
}