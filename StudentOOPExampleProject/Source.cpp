#include "Manager.h"
#include <iostream>

int main() {
	Student st1("Alice", 19, 5);
	Student st2{ "Jack",-18,8 };
	Student st3{ "Peter" ,17,10 };
	Student st4{ "Anna",12,4 };

	
		cout << st1.convert() << endl;
		cout << st2.convert() << endl;
		cout << st3.convert() << endl;
		cout << st4.convert() << endl;
}
