#include<iostream>
using namespace std;

int main(){
    int escolha;
    
    cout << "Escolha uma das opçoes do menu:\n";
    cout << " 1- Baixa\n 2- Média\n 3- Alta\n";
    cin >> escolha;
    
    
    switch (escolha){
    case 1:
    cout << "O limite de velocidade baixa é de 40km\n";
    break;
    
    case 2:
    cout << "O limite da velocidade média é de 80km\n";
    break;
    
    case 3:
    cout << "O limite de velocidade máxima é de 120km\n";
    break;
    
    default:
    cout << "Opção inválida!\n";
    
    
    }
    return 0;
}