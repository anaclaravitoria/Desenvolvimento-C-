#include <iostream>
#include <cmath>
using namespace std;

int main(){
double raio, altura, volume;

cout << "\nDigite o raio: ";
cin >> raio;


cout << "\nDigite a altura do cilindro: ";
cin >> altura;

volume = 3.14 * (pow(raio,2) * altura);

cout << "\nO volume do cilindro e: " << volume;

}