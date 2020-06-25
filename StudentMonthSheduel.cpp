#include "StudentMonthShedule.h"

StudentMonthSheduel::StudentMonthSheduel(shared_ptr<StudentDayShedule> s)
{
	studentShedule.push_back(s);
}

void StudentMonthSheduel::addStudentDayShedule(shared_ptr<StudentDayShedule> s)
{
	studentShedule.push_back(s);
}

void StudentMonthSheduel::viewStudentMonthShedule()
{
	for (auto item : studentShedule)
	{
		item->viewStudentDayShedule();
	}
}
