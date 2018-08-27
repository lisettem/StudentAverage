/*
subject:Lisette_Matute_A6.cpp
purpose:The purpose of this project is to use multiple
		functions to calculate the student's average and letter grade.
author:lmatute
date:4/12/16
*/

#include <iostream>
using namespace std; 

void gradesInput(int &s1, int &s2, int &s3); 
double average3Scores(int s1, int s2, int s3);
double averageLast2Scores(int s2, int s3);
char toLetterGrade(double avg, double avg2, int s3);
void displayGrade(double avg, char lGrade);

int main()
{
	int test1, test2, test3;
	double avg, avg2; 
	char letterG; 
	
	gradesInput(test1, test2, test3);

	avg= average3Scores(test1, test2, test3);
	avg2= averageLast2Scores(test2, test3);

	letterG= toLetterGrade(avg, avg2, test3);
	displayGrade(avg, letterG);

	system ("pause");
	return 0; 
}

void gradesInput(int &s1, int &s2, int &s3)
{
	cout<<"Enter the first grade:";
	cin >> s1;
	
	while (s1 < 0 || s1 > 100)
		{
			cout<<"Enter a number between 0-100.\n";
			cout<<"Enter the first grade:"; 
			cin>>s1;
	    }

	cout<<"Enter the second grade:";
	cin>>s2;
	
	while (s2 < 0 || s2 > 100)
		{
			cout<<"Enter a number between 0-100.\n";
			cout<<"Enter the second grade:";
			cin>>s2; 
	    }

	cout<<"Enter the third grade:";
	cin>>s3; 
	
	while (s3 < 0 || s3 > 100)
		{
			cout<<"Enter a number between 0-100.\n";
			cout<<"Enter the third grade:";
			cin>>s3; 
	    }
}
double average3Scores(int s1, int s2, int s3)
{
	double average; 
	average= (s1 + s2 + s3)/3.0; 
	average = (int)(average+0.5);

	return average; 
}
double averageLast2Scores(int s2, int s3)
{
	double averageTwo;
	averageTwo = (s2 + s3)/2.0;
	averageTwo = (int)(averageTwo+0.5);

	return averageTwo; 
}
char toLetterGrade(double average, double averageTwo, int s3)
{
	char letter; 

	if (average >= 90)
		letter = 'A';

	else if (average >=70) 
		if (s3 >= 90)
			letter = 'A'; 
		else 
			letter = 'B'; 
	else if (average >=50)
		if (averageTwo >= 70)
			letter = 'C'; 
		else 
			letter = 'D'; 
	else 
		letter = 'F'; 

	return letter; 
}
void displayGrade(double average, char letter)
{
	cout << "Your average is: "<< average <<endl;
	cout << "Your letter grade is: "<< letter <<endl; 
}