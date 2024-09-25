#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite um número inteiro: ";
	cin >> numero;
	
	cout << "\nNúmeros pares entre 0 e " << numero << ": ";
	for (int i = 0; i <= numero; i++){
		if (i % 2 == 0){
			cout << "\n" << i;
		}
	}
	
	return 0;
}
