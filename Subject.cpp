#include "Subject.h"
Subject::Subject(const string& s) :name(s)
{
}

const string& Subject::getName()
{
	return name;
}

void Subject::setName(const string& n)
{
	name = n;
}
