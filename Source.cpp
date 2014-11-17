//This program will calculate a student's average.
#include <iostream>
#include <string>
using namespace std;

//Variable to be used in storing student names.
string names[4];
//Variable to be used in storing letter grades.
char letterGrades[4];
//Variable to be used in storing student scores.
double grades[4][3];

//Get student's name
void getName();
//Get student's scores
void getScores();

void getName()
{
	cout << "Please enter the students name's: ";
	for (int i = 0; i <= 4; i++)
	{
		getline(cin, names[i]);
	}
}

void getScores()
{
	for (int w = 0; w <= 4; w++)
	{
		cout << "Please enter " << names[w] << "'s scores: ";
		for (int i = 0; i <= 3; i++)
		{
			cin >> grades[w][i];
		}
	}
	return;
}

int main()
{
	getName();
	getScores();
	return 0;
}