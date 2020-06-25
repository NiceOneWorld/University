#include "StudentDayShedule.h"

StudentDayShedule::StudentDayShedule(shared_ptr<StudentClass> t)
{
	studentShedule.push_back(t);
}

void StudentDayShedule::addClass(shared_ptr<StudentClass> tc)
{
	studentShedule.push_back(tc);
}

void StudentDayShedule::removeClassSubject(const string& str)
{
	studentShedule.remove_if([str](shared_ptr<StudentClass>tc) {
		return tc->getSubject() == str;
		});
}

void StudentDayShedule::viewStudentDayShedule()
{
	for (auto item : studentShedule)
	{
		item->viewStudentClass();
		cout << endl;
	}
}
