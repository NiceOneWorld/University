// University.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "University.h"

using namespace std;
int main()
{
	Student s("Student", 1, "Facilty");
	cout << s.getName() << endl;
	cout << s.getCourse() << endl;
	cout << s.getFaculty() << endl;
	cout << s;
	////fin
	return 0;
}

