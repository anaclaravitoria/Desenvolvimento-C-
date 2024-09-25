#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[3];
	
	cout << "Digite o valor de 3 números: \n";
	for (int i = 0; i < 3; i++){
		cin >> numeros[i];
	}	
	
	cout << "\nNúmeros digitados: ";
	for (int i = 0; i < 3; i++){
		cout << "\n" << numeros[i];
	}
	
	return 0;
}
