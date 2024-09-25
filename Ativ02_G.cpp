#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double valor;
  cout << "\nDigite um numero(negativo): ";
  cin >> valor;
  double valorAbsoluto = abs(valor);
  cout << "O valor absoluto e: " << valorAbsoluto;
}
