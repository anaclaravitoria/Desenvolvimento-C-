

#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0; 
    int opcao;
    double valor;

    do {
        
        cout << "\nBem-vindo ao Caixa Eletrônico\n";
        cout << "Escolha uma operação:\n";
        cout << "1. Saque\n";
        cout << "2. Depósito\n";
        cout << "3. Consulta de Saldo\n";
        cout << "4. Sair\n";
        cout << "Digite o número da operação desejada: ";
        cin >> opcao;

        
        switch(opcao) {
            case 1:  
                cout << "Digite o valor a ser sacado: R$ ";
                cin >> valor;
                if (valor > saldo) {
                    cout << "Saldo insuficiente para realizar o saque.\n";
                } else if (valor <= 0) {
                    cout << "O valor do saque deve ser positivo.\n";
                } else {
                    saldo -= valor;
                    cout << "Saque de R$ " << valor << " realizado com sucesso.\n";
                    cout << "Saldo atual: R$ " << saldo << "\n";
                }
                break;

            case 2:  
                cout << "Digite o valor a ser depositado: R$ ";
                cin >> valor;
                if (valor <= 0) {
                    cout << "O valor do depósito deve ser positivo.\n";
                } else {
                    saldo += valor;
                    cout << "Depósito de R$ " << valor << " realizado com sucesso.\n";
                    cout << "Saldo atual: R$ " << saldo << "\n";
                }
                break;

            case 3:  
                cout << "Seu saldo atual é: R$ " << saldo << "\n";
                break;

            case 4:  
                cout << "Saindo...\n";
                break;

            default:  
                cout << "Opção inválida.\n";
        }

    } while(opcao != 4); 

    return 0;
}

