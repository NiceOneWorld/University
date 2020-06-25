#pragma once
#include <list>
#include "Student.h"

class Group
{
private:
	string groupID;
	list<weak_ptr<Student>> students;
public:
	Group(const string& s);

	string& getGroupID();
	void setGroupID(string& s);
	void addStudent(shared_ptr<Student>s);
	void removeStudentName(string& s);
	void findStudentName(string& s);
	void show_size();

	friend ostream& operator<<(ostream& os, const Group& g);
};

