#pragma once
#include "Students.h"
#include <iostream>

class Manager
{
public:
	int getMaxMark(Student* students, int length) {
		int max = students[0].mark;

		for (int i = 0; i < length; i++)
		{
			if (students[i].mark < max) {
				max = students[i].mark;
			}
		}

		return max;
	};
	int getMinNum(Student* students, int length) {
		int min = students[0].mark;

		for (int i = 0; i < length; i++)
		{
			if (students[i].mark < min) {
				min = students[i].mark;
			}
		}

		return min;
	};

	double calcAvgMark(Student* students, int length) {
		int avg = students[0].mark;
		for (int i = 0; i < length; i++)
		{
			avg += students[i].mark;
		}


		return avg / length;
	}

	Student getBestStudent(Student* students, int length) {
		double bestMark = getMaxMark(students, length);
		Student st;

		for (int i = 0; i < length; i++)
		{
			if (students[i].mark == bestMark) {
				st = students[i];
				break;
			}
		}

		return st;
	}
};

