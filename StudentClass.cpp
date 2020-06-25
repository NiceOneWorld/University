#include "StudentClass.h"

StudentClass::StudentClass(Couple c, shared_ptr<Subject> s, shared_ptr<Audience> a, shared_ptr<Group> g, shared_ptr<Teacher> t):
	Shedule(s,a,g,t)
{
	couple = c;
}

void StudentClass::changeTeacher(shared_ptr<Teacher> t)
{
	teacher = t;
}

void StudentClass::changeAudience(shared_ptr<Audience>a)
{
	audience = a;
}

const string& StudentClass::getSubject()
{
	return subject->getName();
}

void StudentClass::viewStudentClass()
{
	cout << couple << " " << getSubject() << " " << audience->getRoomNumber() << " " << group->getGroupID() << " " << teacher->getName();

}
