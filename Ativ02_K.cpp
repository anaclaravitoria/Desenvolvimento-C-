#include <iostream>
#include <iomanip>
using namespace std;

main(){
	
	double num1, num2, num3, media;
	
	cout << "\nDigite a primeira nota: ";
	cin >> num1;
	
	cout << "\nDigite a segunda nota: ";
	cin >> num2;
	
	cout << "\nDigite a terceira nota: ";
	cin >> num3;
	
	media = (num1 + num2 + num3) /3;
	
	cout << "\nA media das notas e: " << fixed << setprecision(2) media;
	
}
