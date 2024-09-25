#include <iostream>
#include <cmath>
using namespace std;
	
int main(){
	double peso, altura, imc;
	
	cout << "\nDigite o seu peso: ";
	cin >> peso;
	
	cout << "\nDigite a sua altura: ";
	cin >> altura;
	
	imc = peso/ (pow(altura, 2));
	
	cout << "\nSeu IMC e:" << imc;
	
}
