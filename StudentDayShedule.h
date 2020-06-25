#pragma once
#include"StudentClass.h"

class StudentDayShedule
{
	list < shared_ptr<StudentClass>> studentShedule;
public:
	StudentDayShedule(shared_ptr<StudentClass> t);
	void addClass(shared_ptr < StudentClass> tc);
	void removeClassSubject(const string& str);
	void viewStudentDayShedule();
};


