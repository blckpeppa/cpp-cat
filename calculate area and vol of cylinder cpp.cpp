//program that calculates area and volume of a cylinder
// const pie = 3.141592
//formula area = (2*pie*radius*height*)+ 2*pie*radius*radius
//        volume = pie*radius*radius*height

#include <iostream>

using namespace std;
int main(){
	//set pie as constant
	const pie = 3.141592;
	// variable declaration
	float radius;
	float height;
	
	cout << "This program calculates area and volume of a cylinder \n";
	cin >> "Enter radius value: \n" >> radius;
	cout << radius;
	
	return 0;

}