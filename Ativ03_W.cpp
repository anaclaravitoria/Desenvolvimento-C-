#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

/*Escreva um programa que solicite ao usuário um número inteiro e verifique
se ele é maior do que 10 OU menor do que 0. Se o número for maior do que
10 OU menor do que 0, o programa deve imprimir a mensagem &quot;Número
inválido!&quot;.*/

int main(){
    setlocale(LC_ALL, "portuguese");
    
    int numero;
    
    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    if (numero > 10 || numero < 0){
        cout << "\nNúmero inválido.";
    } else {
        cout << "\nNúmero Válido!";
    }
    
    return 0;
}