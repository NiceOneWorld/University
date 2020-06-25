#pragma once
#include <iostream>
using namespace std;

class Teacher
{
	string name;
	string faculity;
public:
	Teacher(const string& n, const string& f);
	const string& getName();
	void setName(const string& n);
	const string& getFaculity();
	void setFaculity(const string& f);

};
