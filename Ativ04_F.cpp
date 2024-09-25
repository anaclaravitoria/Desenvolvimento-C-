#include<iostream>
using namespace std;

int main(){
    int escolha;
    
    cout << "Escolha uma opção do menu:\n";
    cout << "Escolha o tamanho das camisas de acordo com o tamanho:\n";
    cout << " 1- P\n 2- M\n 3- G\n";
    cin >> escolha;
    
    switch (escolha){
    case 1:
    cout << "R$ 19,90\n";
    break;
    
    case 2:
    cout << "R$ 23,69\n";
    break;
    
    case 3:
    cout << "R$ 26,19\n";
    break;
    
    default:
    cout << "opção inválida\n";
    
    }
  
    return 0;
}