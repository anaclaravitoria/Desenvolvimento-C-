#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	double precoCompra[100];
	double precoVenda[100];
	string produtos[100];
	int quantidade;
	
	cout << "Quantos produtos ser�o adicionados? ";
	cin >> quantidade;
	
	for (int i = 0; i < quantidade; i++){
		cout << "\n\nInsira o nome do produto: ";
		cin << produtos[i];
		cout << "Insira o pre�o de compra do produto: ";
		cin << precoCompra[i];
		cout << "Insira o pre�o de venda do produto: ";
		cin << precoVenda[i];
	}
	
	
	
	
	return 0;
}
