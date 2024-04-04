#pragma once
#include "Students.h"
#include <iostream>

class Manager
{
public:

	int getMaxMark(Student* students, int length) {
		int max = students[0].getMark();

		for (int i = 0; i < length; i++)
		{
			if (students[i].getMark() < max) {
				max = students[i].getMark();
			}
		}

		return max;
	};


	int getMinNum(Student* students, int length) {
		int min = students[0].getMark();

		for (int i = 0; i < length; i++)
		{
			if (students[i].getMark() < min) {
				min = students[i].getMark();
			}
		}

		return min;
	};

	double calcAvgMark(Student* students, int length) {
		int avg = students[0].getMark();
		for (int i = 0; i < length; i++)
		{
			avg += students[i].getMark();
		}


		return avg / length;
	}

	Student getBestStudent(Student* students, int length) {
		double bestMark = getMaxMark(students, length);
		Student st;

		for (int i = 0; i < length; i++)
		{
			if (students[i].getMark() == bestMark) {
				st = students[i];
				break;
			}
		}

		return st;
	}
};

