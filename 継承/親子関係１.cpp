#include<iostream>
using namespace std;

class Base1
{
public:
	string name;
protected:
	char bloodtype;
private:
	int age;
};

class son1 :public Base1
{
public:
	void func()
	{
		name;
		bloodtype;
		//age;		アクセスできない		
	}
};

void test1()
{
	son1 s1;
	s1.name;		//publicのをしかアクセスできない
}

class son2 :protected Base1
{
public:
	void func()
	{
		name;
		bloodtype;
		//age;		privateアクセスできない
	}
};

void test2()
{
	son2 s2;
	//s2.name;		アクセスできない

}

class son3 :private Base1
{
public:
	void func()
	{
		name;
		bloodtype;
		//age;		privateアクセスできない
	}
};

class grandson :public son3
{
public:
	void func()
	{
		/*
		name;
		bloodtype;
		age;
		son3はprivate継承ので、全てアクセスできない
		*/
	}
};

//int main()
//{
//	return 0;
//}