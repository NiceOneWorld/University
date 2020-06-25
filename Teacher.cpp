#include "Teacher.h"

Teacher::Teacher(const string& n, const string& f) :name(n), faculity(f)
{
}

const string& Teacher::getName()
{
	return name;
}

void Teacher::setName(const string& n)
{
	name = n;
}

const string& Teacher::getFaculity()
{
	return faculity;
}

void Teacher::setFaculity(const string& f)
{
	faculity = f;
}
