#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    string nome;
    
    cout << "Digite seu primeiro nome: ";
    cin >> nome;
    
    if (nome == "Wilson" || nome == "Gloria"){
        cout << "\nOlá, bem-vindo(a) de volta!";
    } else {
        cout << "\nAcesso negado.";
    }
    
    return 0;
}