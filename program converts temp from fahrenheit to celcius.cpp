//cpp program converts temp from fahrenheit to celsius

#include <iostream>

using namespace std;
int main(){
	// variable declaration
	float fahrenheit;
	float celsius;
	//set formula as constant
	const celsius = ((5.0/9.0)* (fahrenheit - 32.0));
	
	cout << "This program converts temp from fahrenheit to celsius \n";
	cin >> "Enter temp in fahrenheit: \n" >> fahrenheit;
	//display answer
	cout << "The temp in celsius is "<< celsius;
	
	return 0;

}