#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[3];
	
	cout << "Digite o valor de 3 n�meros: \n";
	for (int i = 0; i < 3; i++){
		cin >> numeros[i];
	}	
	
	cout << "\nN�meros digitados: ";
	for (int i = 0; i < 3; i++){
		cout << "\n" << numeros[i];
	}
	
	return 0;
}
