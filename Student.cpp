#include "Student.h"

Student::Student(const string& n, int c, const string& f)
{
	name = n;
	course = c;
	faculty = f;
}

string Student::getName() const
{
	return name;
}

int Student::getCourse() const
{
	return course;
}

string Student::getFaculty() const
{
	return faculty;
}

void Student::setName(const string& n)
{
	name = n;
}

void Student::setCourse(int c)
{
	course = c;
}

void Student::setFaculty(const string& f)
{
	faculty = f;
}

ostream& operator<<(ostream& os, const Student& obj)
{
	os << " Name: " << obj.name << " Course: " << obj.course << " Faculty: " << obj.faculty << endl;
	return os;
}
