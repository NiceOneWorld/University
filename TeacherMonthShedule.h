#pragma once
#include "TeacherDayShedule.h"

class TeacherMonthShedule
{
	list<shared_ptr<TeacherDayShedule>> teacherShedule;
public:
	TeacherMonthShedule(shared_ptr< TeacherDayShedule>t);
	void addTeacherDayShedule(shared_ptr < TeacherDayShedule> t);
	void viewTeacherMonthShedule();
};

