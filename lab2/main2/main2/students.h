#pragma once
class students
{
	char FirstName[50], LastName[50];
	float MathGrade, EnglishGrade, HistoryGrade;
public:

	void SetFirstName(char a[50]);
	void SetLastName(char a[50]);
	
	void GetFirstName(char a[50]);
	void GetLastName(char a[50]);
	

	void SetMathgrade(float x);
	void SetEnglishgrade(float x);
	void SetHistorygrade(float x);

	float GetMathGrade();
	float GetEnglishGrade();
	float GetHistoryGrade();

	float GetAverageGrade();

};

