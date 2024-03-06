#pragma once
#include <cstring>

class Students
{
	char name[50];/// vor avea nume si prenume separate printr-un spatiu
	float MathGrade;
	float EnglishGrade;
	float HistoryGrade;
public:
	float GetAverageGrade();
	
	void SetName( char nume[50]);
	void GetName(char nume[50]);
	
	void SetMathGrade(float x);
	float GetMathGrade();
	
	void SetEnglishGrade(float x);
	float GetEnglishGrade();
	
	void SetHistoryGrade(float x);
	float GetHistoryGrade();
	
	
};

