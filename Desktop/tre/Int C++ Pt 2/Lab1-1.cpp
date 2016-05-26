// Lab1-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void courseAverage(int *ptr, int);

int main()
{
	vector <int> vct;
	int twoD[2][2];
	/*int firstGrade;
	int secondGrade;
	int thirdGrade;
	int fourthGrade;*/
	int gradeAplus = 0;
	int gradeA = 0;
	int gradeB = 0;
	int gradeC = 0;
	int gradeD = 0;
	int gradeF = 0;

	int raw;




	for (int i = 0; i < 2; i++) // rows
	{
		for (int j = 0; j < 2; j++) // columns
		{
			int value = 0;

			cout << "\nEnter the grade" << endl;
			cin >> value;

			int gradeCheck(value);

			//value = twoD[i][j];

			vct.push_back(value);

			 twoD[i][j] = value;
			
		}
	}

	cout << "\nThe vector is " << vct.size() << " numbers long\n" << endl;

	
		for (int l : vct) // columns
		{
			switch (l/10)
			{
			case 10:
				
				gradeAplus++;
				break;
			case 9:
				
				gradeA++;
				break;
			case 8:
				
				gradeB++;
				break;
			case 7:
				
				gradeC++;
				break;
			case 6:
				
				gradeD++;
				break;
			case 5:
				
				gradeF++;
				break;
			case 4:
				
				gradeF++;
				break;
			case 3:
				
				gradeF++;
				break;
			case 2:
				
				gradeF++;
				break;
			case 1:
				
				gradeF++;
				break;
	/*		default:
				cout << "Somehow you managed to get this far with the wrong data, either your so stupid that you broke my program or you need better hobbies. Oh yeah, thats also an 'F' in the grade book" << endl;
				gradeF++;
				break;*/
			}

		
	}

	cout << "Number of A+'s: " << gradeAplus << endl;
	cout << "Number of A's: " << gradeA << endl;
	cout << "Number of B's: " << gradeB << endl;
	cout << "Number of C's: " << gradeC << endl;
	cout << "Number of D's: " << gradeD << endl;
	cout << "Number of F's: " << gradeF << endl;


	courseAverage(vct.data(), vct.size());




	system("pause");

	return 0;

}
/////////////////////////////////////////////////END  OF  MAIN///////////////////////////////////////////////////////

void courseAverage(int *ptr, int counter)
{
	int total = 0;

	for (int i= 0; i < counter; i++)
	{
		total = total + ptr[i];
	}

	cout << "\nYour average grade is " << total / counter << "%\n" << endl;
}


int gradeCheck(int grade) // ensures the value is within the range of 0 to 100
{
	do
	{
		if (grade >= 0 && grade <= 100)
		{
			cout << "" << endl;
			return grade;
		}
		else if(grade < 0)
		{
			cout << "That value is to low for a grade. Check for errors and try again.\n" << endl;
			cin >> grade;
		}
		else if (grade > 100)
		{
			cout << "That value is to high for a grade. Check for errors and try again.\n" << endl;
			cin >> grade;
		}
	} while (grade < 0 || grade > 100);

	
}