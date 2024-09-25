#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    bool mesa[30];
    int lugares[30];
    int escolhaMesa = 1;
    int escolha;
   
    for (int i = 0; i < 30; i++){
        mesa[i] = false;
    }
   
    while (escolhaMesa != 0) {
       
    cout << " \nDigite o código da sua mesa: ";
    cin >> escolhaMesa;
   
    escolha = escolhaMesa + 100;
   
    if (escolha >= 100 && escolha < 130){
        if (mesa[escolhaMesa] == true){
            cout << "Mesa ocupada.";
        } else if (mesa[escolhaMesa] == false){
        mesa[escolhaMesa] = true;
        cout << "Digite a quantidade de lugares reservados (maximo 5): ";
        cin >> lugares[escolhaMesa];
        }  
    }
   
}
    return 0;
}
