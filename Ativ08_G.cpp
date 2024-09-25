#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	string nomes[5];
	int min = 0;
	
	cout << "Digite 5 nomes: \n";
	for (int i = 0; i < 5; i++){
		cin >> nomes[i];
	}	
	
	for (int i = 0; i < 4; i++) {
		min = i;
		for(int j = (i+1); j < 5; j++) {
			if (nomes[j] < nomes[min]) {
				min = j;
			}
		}
			if (min != i){
				string aux = nomes[i];
				nomes[i] = nomes[min];
				nomes[min] = aux;
			}
		}
	
	cout << "\nNomes digitados em ordem alfabética: \n";
	for (int i = 0; i < 5; i++){
		cout << "\n" << nomes[i];
	}	
	
	return 0;
}
