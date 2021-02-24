#include <iostream>
using namespace std;
//
int main() {
	// a is for Fahrenheit
	// b is for Celsius
    float a, b;
    cout << "Input the temperature in fahrenheit\n";
    cin >> a;
     b = 5 * (a - 32) / 9;
     cout << a <<" Fahrenheit is equal to " << b <<" Centigrade";
     return 0;
}
