#include "Group.h"

Group::Group(const string& s): groupID(s)
{
}

string& Group::getGroupID()
{
	return groupID;
}

void Group::setGroupID(string& s)
{
	groupID = s;
}

void Group::addStudent(shared_ptr<Student> s)
{
	students.push_back(s);
}

void Group::removeStudentName(string& s)
{
	students.remove_if([s](weak_ptr<Student>std) {
		return std.lock()->getName() == s;
		});
}

void Group::findStudentName(string& s)
{
	auto ptr = find_if(students.begin(), students.end(), [s](weak_ptr<Student>std) {
		return std.lock()->getName() == s;
		});
	if (ptr != students.end())
	{
		cout << *(ptr->lock());
	}
	else
		cout << "There is no such student!" << endl;
}

void Group::show_size()
{
	cout << "Size of the Students in Group " << groupID << ": " << students.size() << endl;
}

ostream& operator<<(ostream& os, const Group& g)
{
	for (auto item : g.students)
		if (item.lock())
			os << *(item.lock());
		else
			cout << "Empty" << endl;
	return os;
}
