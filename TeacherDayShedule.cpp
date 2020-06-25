#include "TeacherDayShedule.h"

TeacherDayShedule::TeacherDayShedule(shared_ptr<TeacherClass> t)
{
	teacherShedule.push_back(t);
}

void TeacherDayShedule::addClass(shared_ptr<TeacherClass> tc)
{
	teacherShedule.push_back(tc);
}

void TeacherDayShedule::removeClassSubject(const string& str)
{
	teacherShedule.remove_if([str](shared_ptr<TeacherClass>tc) {
		return tc->getSubject() == str;
		});

}

void TeacherDayShedule::viewTeacherDayShedule()
{
	for (auto item : teacherShedule)
	{
		item->viewTeacherClass();
		cout << endl;
	}
}

