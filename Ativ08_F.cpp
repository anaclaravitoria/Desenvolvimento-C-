#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[5]; 
	int salvarValor;
	int min = 0;
	
	cout << "Digite o valor de 5 números: \n";
	for (int i = 0; i < 5; i++){
		cin >> numeros[i];
	}	
	
	for (int i = 0; i < 4; i++) {
		min = i;
		for(int j = (i+1); j < 5; j++) {
			if (numeros[j] < numeros[min]) {
				min = j;
			}
		}
			if (min != i){
				int aux = numeros[i];
				numeros[i] = numeros[min];
				numeros[min] = aux;
			}
		}
	
	cout << "\nNúmeros digitados em ordem decrescente: ";
	for (int i = 0; i < 5; i++){
		cout << "\n" << numeros[i];
	}	
	
	return 0;
}
