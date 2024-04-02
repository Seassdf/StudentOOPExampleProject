
#include "Manager.h"

int main() {
	Student st1("Alice", 19, 5);
	Student st2{ "Jack",16,8 };
	Student st3{ "Peter" ,17,10 };
	Student st4{ "Anna",12,4 };

	const int size = 4;
	Student students[size]{ st1,st2,st3,st4 };

	Manager manager;

	cout << "Best mark is " << manager.getMaxMark(students, 4) << endl;
	cout << "Best student is " << manager.getBestStudent(students, 4).convert() << endl;
	//
	//	cout << st1.convert() << endl;
	//	cout << st2.convert() << endl;
	//	cout << st3.convert() << endl;
	//	cout << st4.convert() << endl;
}
