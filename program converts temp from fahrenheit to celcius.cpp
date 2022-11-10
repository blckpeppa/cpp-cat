//cpp program converts temp from fahrenheit to celsius

#include <iostream>

using namespace std;
int main(){
	// variable declaration
	float fahrenheit;
	//set formula as constant
	const float celsius = ((5.0/9.0)* (fahrenheit - 32.0));
	
	cout << "This program converts temp from fahrenheit to celsius \n";
	cout << "Enter temp in fahrenheit: \n";
	cin >> fahrenheit;
	//display answer
	cout << "The temp in celsius is "<< celsius;
	
	return 0;

}
