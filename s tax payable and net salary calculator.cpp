//program calculates tax payable and net salary of employee
//paye is 25% of gross salary or 0.25

#include <iostream>

using namespace std;
int main(){
	// variable declaration
	float net_salary;
	
	//set gross salary as constant
	const int gross_salary = 10000;
	//set PAYE as constant
	const float PAYE = 0.25 * gross_salary;

	
	cout << "This program calculates tax payable and net salary of employee \n";
	cout << "The tax payable is: "<< PAYE << "\n";
	
	//calculate net salary (amount after 25% tax deduction)
	net_salary = gross_salary - PAYE ; 
	
	cout << "Net salary after 25% tax deduction is: "<< net_salary<< "\n";
	
	return 0;

}
