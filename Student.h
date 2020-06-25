#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	int course;
	string faculty;

public:
	
	Student(const string& n, int c, const string& f);

	string getName() const;
	int getCourse() const;
	string getFaculty() const;
	void setName(const string& n);
	void setCourse(int c);
	void setFaculty(const string& f);

	friend ostream& operator<<(ostream& os, const Student& obj);
};

