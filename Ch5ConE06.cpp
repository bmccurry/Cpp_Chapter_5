//Ch5ConE07.cpp
//Displays a message based on the number 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{	
	//declare variable
	char animal;
	cout << "Please enter an animal ID: ";
	cin >> animal;
	if(animal == 'D' || toupper(animal) == 'D')
	{
		cout << "dog" << endl;
	}
	else
	{
		cout << "cat" << endl;
	}

	return 0;
}	//end of main function