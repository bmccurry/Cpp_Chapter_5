//Ch5ConE04.cpp
//Displays a bonus based on a sales amount 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare variables
	double sales = 0.0;
	double bonus = 0.0;
	double rate  = 0.0;

	//enter input
	cout << "Enter the sales: ";
	cin >> sales;

	//assign bonus
	if(sales <= 250)
	{
		bonus = 10.0;
	}
	else
	{
		cout << "Please enter the bonus rate: ";
		cin >> bonus;
		bonus *= sales;
	}
	cout << bonus << endl;
	//display output
	return 0;
}	//end of main function
