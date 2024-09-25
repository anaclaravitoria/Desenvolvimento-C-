#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeroInt = 0, soma;
	
	cout << "Insira os números desejados: \n";
	while (numeroInt >= 0){
		cin >> numeroInt;
		if (numeroInt >= 0){
		soma += numeroInt;
		} else if (numeroInt < 0){
			break;
		}
	}
	
	cout << "\nO resultado da soma é: " << soma;
	
	return 0;
}
