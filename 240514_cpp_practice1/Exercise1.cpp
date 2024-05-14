#include <iostream>

using namespace std;

class Base
{
public:
	int publicVar = 10;

	void publicFunc()
	{
		cout << "Base::publicFunc()" << endl;
	}

	Base()
	{
		cout << "Base constructor" << endl;
	}
};

class Derived : private Base
{
public:
	void accessBaseMembers()
	{
		cout << publicVar << endl;
		publicFunc();
	}
};

int main()
{
	Derived d;
	d.accessBaseMembers();

	return 0;
}