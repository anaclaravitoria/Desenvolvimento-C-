#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    
    string escolha;
    
    cout << "Você deseja comprar o produto ****? ";
    cin >> escolha;
    
    if (escolha == "sim" || escolha == "Sim" || escolha == "s" || escolha == "S"){
        cout << "\nObrigado pela compra!";
    } else {
        cout << "\nEspero que você mude de ideia...";
    }
    
    return 0;
}