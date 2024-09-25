#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

/*Escreva um programa que pergunte ao usuário se ele não é um membro
inativo de um clube. Se a resposta for negativa, o programa deve imprimir
&quot;Por favor, atualize sua inscrição para continuar usufruindo dos benefícios
do clube&quot;.*/

int main(){
    setlocale(LC_ALL, "portuguese");
    
    string resposta;
    
    cout << "Você é um membro inativo de um clube? ";
    cin >> resposta;
    
    if (resposta == "não" || resposta == "Não" || resposta == "nao" || resposta == "Nao" || resposta == "n" || resposta == "N"){
        cout << "\nPor favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube.";
    } else {
        cout << "\nCerto, muito obrigado!";
    }
    
    return 0;
}