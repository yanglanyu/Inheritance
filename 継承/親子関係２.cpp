#include<iostream>
using namespace std;

class base
{
public:

	int m_a;

	base():m_a(100){}

	void func()
	{
		cout << "base - func" << endl;
	}
	void func(int a)
	{
		cout << "base - func(int a)" << endl;
	}
};

class son :public base
{
public:

	int m_a;

	son():m_a(200){}

	void func()
	{
		cout << "son - func()" << endl;
	}
};

void test_1()
{
	son s;

	cout << "son - m_a = " << s.m_a << endl;
	cout << "base - m_a = " << s.base::m_a << endl;

	s.func();
	s.base::func();
	s.base::func(10);
}

int main()
{
	test_1();

	return 0;
}