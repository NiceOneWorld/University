#include "TeacherClass.h"
TeacherClass::TeacherClass(Couple c, shared_ptr<Subject> s, shared_ptr<Audience> a, shared_ptr<Group> g, shared_ptr<Teacher> t) :
	Shedule(s, a, g, t)
{
	couple = c;
}


void TeacherClass::changeTeacher(shared_ptr<Teacher> t)
{
	teacher = t;
}

void TeacherClass::changeAudience(shared_ptr<Audience> a)
{
	audience = a;
}

const string& TeacherClass::getSubject()
{
	return subject->getName();
}

void TeacherClass::viewTeacherClass()
{
	cout << couple << " " << getSubject() << " " << audience->getRoomNumber() << " " << group->getGroupID() << " " << teacher->getName();

}
