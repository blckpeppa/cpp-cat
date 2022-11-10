//program that calculates area and volume of a cylinder
// const pie = 3.141592
//formula area = (2*pie*radius*height*)+ 2*pie*radius*radius
//        volume = pie*radius*radius*height

#include <iostream>
using namespace std;

int main(){
	//set pie as constant
	const float pie = 3.141592;
	// variable declaration
	float radius,height,area,volume;
	
	cout << "This program calculates area and volume of a cylinder \n";
	cout << "Enter radius value: \n";
	cin >> radius;
	cout << "Enter height value: \n";
	cin >> height;	
	
// 	formula area
	area = (2*pie*radius*height)+ 2*pie*radius*radius;
// 	formula volume
    volume = pie*radius*radius*height;
    
	cout << "the area is "<< area <<"\n";
	cout << "the volume is "<< volume <<"\n";
	
	return 0;

}
