#include <iostream>
#include <string>

using namespace std;

int FindCurrentAge(int CurrentYear, int YearOfBirth) {
	return CurrentYear - YearOfBirth;
}

int main()
{
	// Ask user for name
	cout << "Please enter your name: " << endl;
	
	// get name from the user
	string name;
	cin >> name;

	// Ask user for year of birth
	cout << "What year were you born? " << endl;

	// Get year of birth
	int YearOfBirth;
	cin >> YearOfBirth;

	// Ask for current year
	cout << "What is the current year? " << endl;

	// Get current year
	int CurrentYear;
	cin >> CurrentYear;

	// Display info to user
	FindCurrentAge(CurrentYear, YearOfBirth);

	cout << name << " you are " << FindCurrentAge(CurrentYear, YearOfBirth) << " years old" << endl;
}

