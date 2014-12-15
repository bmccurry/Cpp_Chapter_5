//Ch5ConE07.cpp
//Displays a message based on the number 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	//declare variable
	int entry = 0;
	
	//enter input
	cout << "Enter a number: ";
	cin >> entry;

	//display output
	if(entry == 1 || entry == 2 || entry == 3)
	{
		cout << "Valid entry" << endl;
	}
	else
	{
		cout << "Entry error" << endl;
	}

	return 0;
}	//end of main function