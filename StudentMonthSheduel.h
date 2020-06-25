#pragma once
#include  "StudentDayShedule.h"

class StudentMonthSheduel
{
	list<shared_ptr<StudentDayShedule>> studentShedule;
public:
	StudentMonthSheduel(shared_ptr< StudentDayShedule>s);
	void addStudentDayShedule(shared_ptr < StudentDayShedule> s);
	void viewStudentMonthShedule();
};

