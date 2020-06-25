#include "University.h"

void University::addStudent(shared_ptr<Student>s)
{
	students.push_back(s);
}

void University::removeStudentName(const string& str)
{
	students.remove_if([str](shared_ptr<Student>stu) {

		return stu->getName() == str;
		});
}

void University::addGroup(shared_ptr<Group> g)
{
	groups.push_back(g);
}

void University::removeGroupID(const string& str)
{
	groups.remove_if([str](shared_ptr<Group>gro) {

		return gro->getGroupID() == str;
		});
}

void University::addTeacher(shared_ptr<Teacher> t)
{
	teachers.push_back(t);
}

void University::removeTeacher(const string& str)
{
	teachers.remove_if([str](shared_ptr<Teacher> tea) {
		return tea->getName() == str;
		});
}

void University::addSubject(shared_ptr<Subject> s)
{
	subjects.push_back(s);
}

void University::removeSubject(const string& str)
{
	subjects.remove_if([str](shared_ptr<Subject> sub) {
		return sub->getName() == str;
		});
}

void University::addAudience(shared_ptr<Audience> a)
{
	audiences.push_back(a);
}

void University::addTeacherMonthShedule(shared_ptr<TeacherMonthShedule> t)
{
	teacherShedule.push_back(t);
}

void University::viewTeacherShedule()
{
	cout << "\n > Teacher Shedule:" << endl;
	for (auto item : teacherShedule)
	{
		item->viewTeacherMonthShedule();
	}
}

void University::addStudentMonthShedule(shared_ptr<StudentMonthSheduel> s)
{
	studentShedule.push_back(s);
}

void University::viewStudentShedule()
{
	cout << "\n > Student Shedule:" << endl;
	for (auto item : studentShedule)
	{
		item->viewStudentMonthShedule();
	}
}