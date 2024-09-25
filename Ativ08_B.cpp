#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float numeros[3], soma, media;
	
	cout << "Digite 3 notas: \n";
	for (int i = 0; i < 3; i++){
		cin >> numeros[i];
		soma += numeros[i];
	}	
	
	media = soma / 3;
	
	cout << "\nMédia das notas: ";
	cout << media;
	
	return 0;
}
