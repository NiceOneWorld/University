#pragma once

#include"Shedule.h"
#include"Couple.h"

class StudentClass :public Shedule
{
	Couple couple;
public:
	StudentClass(Couple c, shared_ptr<Subject> s, shared_ptr<Audience> a, shared_ptr<Group> g, shared_ptr<Teacher> t);
	void changeTeacher(shared_ptr<Teacher>) override;
	void changeAudience(shared_ptr<Audience>) override;
	const string& getSubject();
	void viewStudentClass();
};

