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
		//age;		�A�N�Z�X�ł��Ȃ�		
	}
};

void test1()
{
	son1 s1;
	s1.name;		//public�̂������A�N�Z�X�ł��Ȃ�
}

class son2 :protected Base1
{
public:
	void func()
	{
		name;
		bloodtype;
		//age;		private�A�N�Z�X�ł��Ȃ�
	}
};

void test2()
{
	son2 s2;
	//s2.name;		�A�N�Z�X�ł��Ȃ�

}

class son3 :private Base1
{
public:
	void func()
	{
		name;
		bloodtype;
		//age;		private�A�N�Z�X�ł��Ȃ�
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
		son3��private�p���̂ŁA�S�ăA�N�Z�X�ł��Ȃ�
		*/
	}
};

//int main()
//{
//	return 0;
//}