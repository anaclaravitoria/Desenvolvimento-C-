#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double numeros[100];
    int escolha;
    int numeros30 = 0;
    int maiorMedia = 0;
    int igualMedia = 0;
    double media;
    int soma = 0;
   
    cout << "Insira a quantidade de numeros que serao digitados: ";
    cin >> escolha;
   
    cout << "\nDigite " << escolha << " numeros: \n";
    for (int i = 0; i < escolha; i++){
        cin >> numeros[i];
        soma += numeros[i];
        if (numeros[i] == 30){
            numeros30 += 1;
        }
    }
   
    media = (double)soma / (double)escolha;
   
    for (int i = 0; i < escolha; i++){
        if (numeros[i] > media){
            maiorMedia += 1;
        } else if (numeros[i] == media){
            igualMedia += 1;
        }
    }
   
    cout << "\nMedia = " << media;
    cout << "\nMaiores que a media: " << maiorMedia;
    cout << "\nIguais a media: " << igualMedia;
    cout << "\nIguais a 30: " << numeros30;
   
    return 0;
}
