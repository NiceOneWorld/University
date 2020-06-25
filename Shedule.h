#pragma once
#include "Subject.h"
#include "Audience.h"
#include "Group.h"
#include "Teacher.h"
#include <algorithm>

class Shedule
{
protected:
	shared_ptr<Subject> subject;
	shared_ptr<Audience> audience;
	shared_ptr<Group> group;
	shared_ptr<Teacher> teacher;
public:
	Shedule(shared_ptr<Subject>s, shared_ptr<Audience>a, shared_ptr<Group>g, shared_ptr<Teacher>t);
	virtual void changeAudience(shared_ptr<Audience>) = 0;
	virtual void changeTeacher(shared_ptr<Teacher>) = 0;
};

