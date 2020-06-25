#pragma once

#include <list>
#include "Teacher.h"

class Subject
{
	string name;
	list<shared_ptr<Teacher>> teachers;
public:
	Subject(const string& s);
	const string& getName();
	void setName(const string& n);
};

