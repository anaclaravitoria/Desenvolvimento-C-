#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numeroInt;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> numeroInt;
	
	cout << "\nTabuada do n�mero " << numeroInt << ": ";
	for (int i = 1; i <= 10; i++){
		cout << "\n" << numeroInt << " X " << i << " = " << numeroInt*i; 
	}
	
	return 0;
}
