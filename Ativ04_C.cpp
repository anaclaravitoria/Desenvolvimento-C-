#include<iostream>
using namespace std;

int main(){
    int escolha;
    
    cout << " Escolha a opção desejada no menu:\n ";
    cout << "1- Segunda-Feira\n 2- Terça-Feira\n 3- Quarta-feira\n 4- Quinta-feira\n 5- Sexta-feira\n 6- Sábado\n 7- Domingo\n ";
    cin >> escolha;
    
    switch (escolha){
    case 1:
    cout << " Dia Útil ";
    break;
    
    case 2:
    cout << " Dia Útil ";
    break;
    
    case 3:
    cout << " Dia Útil ";
    break;
    
    case 4:
    cout << " Dia Útil ";
    break;
    
    case 5:
    cout << " Dia Útil ";
    break;
    
    case 6:
    cout << " Final de Semana ";
    break;
    
    case 7:
    cout << " Final de Semana ";
    break;
    
    default:
    cout << " Opção Inválida! ";
    }
    
    
    
    return 0;
}