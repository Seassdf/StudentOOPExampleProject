#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:

	int age;
	string name;
	double mark;


public:
	Student();
	Student(string nm, int a, double m);
	Student(string nm);
	~Student();

	string convert();


	string getName();
	void getName(string nm);

	int getAge(int a);

	double getMark();
	double setMark(double m);
};
