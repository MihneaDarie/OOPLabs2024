#pragma once

class student
{	
	char LastName[50],FirstName[50];
	float MGrade,HGrade,EGrade;
public:

	void SetFirstName(char a[50]);
	void GetFirstName(char a[50]);

	void SetLastName(char a[50]);
	void GetLastName(char a[50]);

	void SetMGrade(float x);
	void SetHGrade(float x);
	void SetEGrade(float x);

	float GetMGrade();
	float GetHGrade();
	float GetEGrade();

	float GetAverageGrade();

};