#include <iostream>;
using namespace std;


int main() {
  int hora;
  
 cout << "Digite 1 para Bom dia\n";
 cout << "Digite 2 para Boa tarde\n";
 cout << "Digite 3 para Boa noite\n";
 
 cin >> hora; 
 
  switch (hora) {
  case 1:
    cout << "\nBom dia";
    break;
  case 2:
    cout << "Boa tarde";
    break;
  case 3:
    cout << "Boa noite";
    break;
}
}
