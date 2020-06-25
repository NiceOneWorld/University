#include "TeacherMonthShedule.h"
TeacherMonthShedule::TeacherMonthShedule(shared_ptr<TeacherDayShedule> t)
{
	teacherShedule.push_back(t);
}

void TeacherMonthShedule::addTeacherDayShedule(shared_ptr<TeacherDayShedule> t)
{
	teacherShedule.push_back(t);
}

void TeacherMonthShedule::viewTeacherMonthShedule()
{
	for (auto item : teacherShedule)
	{
		item->viewTeacherDayShedule();
	}
}
