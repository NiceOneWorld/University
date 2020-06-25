#pragma once
#include "Student.h"
#include "Group.h"
#include "Audience.h"
#include "Teacher.h"
#include "Subject.h"
#include "TeacherDayShedule.h"
#include "TeacherMonthShedule.h"
#include "StudentDayShedule.h"
#include"StudentMonthShedule.h"
#include <list>

using namespace std;

class University
{
public:
	list<shared_ptr<Student>> students;
	list<shared_ptr<Group>> groups;
	list<shared_ptr<Audience>> audiences;
	list<shared_ptr<Teacher>> teachers;
	list<shared_ptr<Subject>> subjects;
	list<shared_ptr<TeacherDayShedule>> teacherDayShedule;
	list<shared_ptr<TeacherMonthShedule>> teacherShedule;
	list<shared_ptr<StudentDayShedule>> studentDayShedule;
	list<shared_ptr<StudentMonthSheduel>> studentShedule;
public:
	void addStudent(shared_ptr<Student>s);
	void removeStudentName(const string&);
	void addGroup(shared_ptr<Group>g);
	void removeGroupID(const string& s);
	void addTeacher(shared_ptr<Teacher>g);
	void removeTeacher(const string& s);
	void addSubject(shared_ptr<Subject>s);
	void removeSubject(const string& str);
	void addAudience(shared_ptr<Audience>s);
	void addTeacherMonthShedule(shared_ptr<TeacherMonthShedule> t);
	void viewTeacherShedule();
	void addStudentMonthShedule(shared_ptr<StudentMonthSheduel> s);
	void viewStudentShedule();
};

