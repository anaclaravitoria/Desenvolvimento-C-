#include<iostream>
using namespace std;

int main(){
    int escolha;
    
  
    cout << "Escolha o idioma a ser falado:\n";
    cout << " 1- Português\n 2- Inglês\n";
    cin >> escolha;
    
    switch (escolha){
    case 1:
    cout << "Bom dia!";
    break;
    
    case 2:
    cout << "Good Morning";
    break;
    
    default:
    cout << "Opção Inválida";
    }
    return 0;
}