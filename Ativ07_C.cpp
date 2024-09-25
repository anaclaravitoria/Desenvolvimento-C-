#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeroInt, soma, quantidade;
	
	cout << "Quantos números serão digitados? ";
	cin >> quantidade;
	
	cout << "\nInsira os números desejados: \n";
	for (int i = 0; i < quantidade; i++){
		cin >> numeroInt;
		soma += numeroInt;
	}
	
	cout << "\nO resultado da soma é: " << soma;
	
	return 0;
}
