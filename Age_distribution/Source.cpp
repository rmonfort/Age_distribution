#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main(int argc, char *argv[])
{
	string input_file;

	// Check first argument if it exists for input file, otherwise ask user
	if (argc > 1)
	{
		input_file = argv[1];
	}
	else
	{
		cout << "Please enter the path to your input file: " << endl;
		cin >> input_file;
	}

	// Open input file and check if successfully opened
	ifstream ifs(input_file);
	if (!ifs)
	{
		cout << "Failed to open input file." << endl;
		return 1;
	}


	int age = 0;
	// Get age from line and output message based on condition
	while (ifs >> age)
	{
		if (age < 0 || age > 100)
		{
			cout << "This program is for humans" << endl;
		}
		else if (age <= 2)
		{
			cout << "Still in Mama's arms" << endl;
		}
		else if (age <= 4)
		{
			cout << "Preschool Maniac" << endl;
		}
		else if (age <= 11)
		{
			cout << "Elementary school" << endl;
		}
		else if (age <= 14)
		{
			cout << "Middle school" << endl;
		}
		else if (age <= 18)
		{
			cout << "High school" << endl;
		}
		else if (age <= 22)
		{
			cout << "College" << endl;
		}
		else if (age <= 65)
		{
			cout << "Working for the man" << endl;
		}
		else if (age <= 100)
		{
			cout << "The Golden Years" << endl;
		}
	}

	return 0;
}