#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{

	int age;
	string name;
	double mark;


public:

	string convert() {
		string  s = "";
		s += name;
		s += " age = " + to_string(age);
		s += " mark = " + to_string(mark);
		return s;
	}



	string getName() {
		return name;
	}
	void getName(string nm) {
		name = nm;
	}

	int getAge(int a) {
		if (a > 0 && a < 90)
		{
			age = a;
		}
	}

	double getMark() {
		return mark;
	}

	double setMark(double m) {
		if (m < 0 && m>10) {
			return m;
		}
	}
private:

	//default construction (конструктор по умолчанию)
	Student() {
		name = "no name";
		age = 5;
		mark = 4;
	}

	//cannonical constraction with parametrs(arguments)||канонический конструктор
	Student(string nm, int a, double m) {
		name = nm;
		age = a;
		mark = m;
	}
	//construction with parametrs (arguments)
	Student(string nm) {
		name = nm;
		age = 0;
		mark = 0;
	}



	//destructor(деструктор)
	~Student()
	{
		cout << "calling destructor" << endl;
	}
};
