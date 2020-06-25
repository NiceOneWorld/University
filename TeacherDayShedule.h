#pragma once
#include "TeacherClass.h"

class TeacherDayShedule
{
	list < shared_ptr<TeacherClass>> teacherShedule;
public:
	TeacherDayShedule(shared_ptr<TeacherClass> t);
	void addClass(shared_ptr < TeacherClass> tc);
	void removeClassSubject(const string& str);
	void viewTeacherDayShedule();
};

