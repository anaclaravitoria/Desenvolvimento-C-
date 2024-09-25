#include<iostream>
using namespace std;

int main()
{
    double preco, desconto, precoFinal;
    
    cout << "\nDigite o preco dos produtos ";
    cin >> preco ; 
    
    
    cout << "\nDigite o desconto: ";
    cin >> desconto;
    precoFinal = preco - (desconto*(preco/100));
    
    cout << "\nO valor do produto com desconto e: " << precoFinal;
    return 0;
}