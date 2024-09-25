#include<iostream>
using namespace std;

int main(){
    int escolha;

    cout << "Escolha uma das opçoes dos meses a seguir:\n";
    cout << " 1-  Janeiro\n";
    cout << " 2-  Fevereiro\n";
    cout << " 3-  Março\n";
    cout << " 4-  Abril\n";
    cout << " 5-  Maio\n";
    cout << " 6-  Junho\n";
    cout << " 7-  Julho\n";
    cout << " 8-  Agosto\n";
    cout << " 9-  Setembro\n";
    cout << " 10- Outubro\n";
    cout << " 11- Novembro\n";
    cout << " 12- Dezembro\n";
    cin >> escolha;
    
    switch(escolha){
    case 1:
    cout << "Janeiro possui 31 dias!\n";
    break;
    
    case 2:
    cout << "Fevereiro possui 28 - 29 dias!\n";
    break;
    
    case 3:
    cout << "Março possui 31 dias!\n";
    break;
    
    case 4:
    cout << "Abril possui 30 dias!\n";
    break;
    
    case 5:
    cout << "Maio possui 31 dias!\n";
    break;
    
    case 6:
    cout << "Junho possui 30 dias!\n";
    break;
    
    case 7:
    cout << "Julho possui 31 dias!\n";
    break;
    
    case 8:
    cout << "Agosto possui 31 dias!\n";
    break;
    
    case 9:
    cout << "Setembro possui 30 dias!\n";
    break;
    
    case 10:
    cout << "Outubro possui 31 dias!\n";
    break;
    
    case 11:
    cout << "Novembro possui 30 dias!\n";
    break;
    
    case 12:
    cout << "Dezembro possui 31 dias!\n";
    break;
    
    default:
    cout << "Opção Inválida!\n";
    
    }
    return 0;
}