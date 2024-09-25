#include <iostream>
using namespace std;

int main(){
	double celsius, fahrenheit;
	
	cout << "Digite a temperatura em Celsius: ";
	cin >> celsius;
	
	fahrenheit = (9/5) * celsius + 32;
	
	cout << celsius << " em Fahrenheit e: " << fahrenheit;
}
