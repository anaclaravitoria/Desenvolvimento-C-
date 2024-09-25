#include <iostream>
using namespace std;

int main(){
double num1,num2, divisao, multiplicacao, subtracao, adicao;
int escolha;

cout << " Digite o primeiro numero:\n ";
cin >> num1;
cout << " Digite o segundo numero:\n ";
cin >> num2;
cout << "Escolha uma das opçoes a seguir:\n";
cout << "\n 1- adiçao\n 2- subtraçao\n 3- divisao\n 4- multiplicaçao\n ";
cin >> escolha;

cout << "\n";

switch (escolha){

case 1:
adicao = num1 + num2;
cout << " O resultado da soma é:\n " << adicao;
break;

case 2:
subtracao = num1 - num2;
cout << " O resultado da subtração é:\n " << subtracao;
break;

case 3:
divisao = num1 / num2;
cout << " O resultado da divisão é:\n " << divisao;
break;

case 4:
multiplicacao = num1 * num2;
cout << " O resultado da multiplicação é:\n " << multiplicacao;
break;

default:
cout << " Opção inválida";
}


}