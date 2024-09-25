#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	
	string senhaCriada = "batatafrita123";
	string senhaDigitada;
	
	cout << "Seja Bem Vindo!\n\nPor favor, insira a senha: ";
	cin >> senhaDigitada;
	
	for (int i = 2; i >= 0; i--){
		if (i == 0 && senhaDigitada != senhaCriada){
			cout << "\nTentativas esgotadas...\nTente novamente mais tarde.";
			break;
		} else if (senhaDigitada == senhaCriada){
			cout << "\nSenha correta!\nAcesso permitido.";
			break;
		} else if (senhaDigitada != senhaCriada) {
			cout << "\nSenha errada... Tentativas restantes: " << i;
			cout << "\nTente novamente: ";
			cin >> senhaDigitada;
		}
	}
	
	return 0;
}
