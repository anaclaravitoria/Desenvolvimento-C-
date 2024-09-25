#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[3], maiorValor = 0;
	
	cout << "Digite o valor de 3 números: \n";
	for (int i = 0; i < 3; i++){
		cin >> numeros[i];
		if (numeros[i] > maiorValor){
			maiorValor = numeros[i];
		}
	}	
	
	cout << "\nValor do maior número digitado: " << maiorValor;
	
	return 0;
}
