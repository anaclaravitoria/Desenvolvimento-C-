#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[3], menorValor = 99999999;
	
	cout << "Digite o valor de 3 números: \n";
	for (int i = 0; i < 3; i++){
		cin >> numeros[i];
		if (numeros[i] < menorValor){
			menorValor = numeros[i];
		}
	}	
	
	cout << "\nValor do menor número digitado: " << menorValor;
	
	return 0;
}
