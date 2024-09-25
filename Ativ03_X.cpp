#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    string resposta;
    
    cout << "Você é um robô? ";
    cin >> resposta;
    
    if (resposta == "não" || resposta == "Não" || resposta == "nao" || resposta == "Nao" || resposta == "n" || resposta == "N"){
        cout << "\nPor favor, prove que você não é um robô, me mande 10zão no pix!";
    } else {
        cout << "\nBeep boop";
    }
    
    return 0;
}