#include <iostream>
using namespace std;

int main(){
double nota1, nota2, nota3, peso1, peso2, peso3, media;

cout << "\nDigite a primeira nota: ";
cin >> nota1;

cout << "\nDigite o  Peso da primeira nota: ";
cin >> peso1;

cout << "\nDigite a segunda nota: ";
cin >> nota2;

cout << "\nDigite o Peso da segunda nota: ";
cin >> peso2;

cout << "\nDigite a terceira nota: ";
cin >> nota3;

cout << "\nDigite o Peso da terceira nota: ";
cin >> peso3;

media = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) /3;

cout << "\nA media poderada e: " << media;

}