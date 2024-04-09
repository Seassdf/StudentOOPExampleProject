#include "Students.h"

using namespace std;


//default construction (конструктор по умолчанию)
Student::Student() {
	name = "no name";
	age = 5;
	mark = 4;
}

//cannonical constraction with parametrs(arguments)||канонический конструктор
Student::Student(string nm, int a, double m) {
	name = nm;
	age = a;
	mark = m;
}
//construction with parametrs (arguments)
Student::Student(string nm) {
	name = nm;
	age = 0;
	mark = 0;
}

string Student::convert() {
	string  s = "";
	s += name;
	s += " age = " + to_string(age);
	s += " mark = " + to_string(mark);
	return s;
}

//destructor(деструктор)
Student::~Student()
{
	/*cout << "calling destructor" << endl;*/
}

string Student::getName() {
	return name;
}
void Student::getName(string nm) {
	name = nm;
}

int Student::getAge(int a) {
	if (a > 0 && a < 90)
	{
		return age = a;
	}
}

double Student::getMark() {
	return mark;
}

double Student::setMark(double m) {
	if (m < 0 && m>10) {
		return m;
	}
}