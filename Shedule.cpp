#include "Shedule.h"

Shedule::Shedule(shared_ptr<Subject> s, shared_ptr<Audience> a, shared_ptr<Group> g, shared_ptr<Teacher> t)
{
	subject = s;
	audience = a;
	group = g;
	teacher = t;
}
