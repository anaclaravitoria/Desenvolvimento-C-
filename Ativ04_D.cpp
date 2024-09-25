#include<iostream>
using namespace std;

int main(){
    int escolha;
   
    cout << " Escolha as opções do menu:\n";
    cout << " 1- Cachorro\n 2- Gato\n 3- pássaro\n";
    cin >>  escolha;
    
    switch (escolha){
    case 1:
    cout << "Você escolheu cachorro";
    break;
    
    case 2:
    cout << "Você escolheu gato";
    break;
    
    case 3:
    cout << "Você escolheu pássaro";
    break;
    
    default:
    cout << "Opção incorreta!";
    
    }
    
    
    return 0;
}