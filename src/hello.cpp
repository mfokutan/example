//============================================================================
// Name        : hello.cpp
// Author      : Fatih
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base {
public:
	 void setA(int a) {
		this->a = a;
	}

	 int getA() {
		return this->a;
	}

	 void displayA( ) {
		cout << this->a << endl;
	}

private:
	 int a;
};

int main()
{
	Base base = Base();
	base.setA(20);
	base.displayA(); // 20
//	Base *base2 = &base;
//	base2->setA(30);
//	base2->displayA();

	Base &base2 = base;
	base2.setA(40);
	base2.displayA(); // 30
	//base.displayA(); // 20

	return 0;
}
