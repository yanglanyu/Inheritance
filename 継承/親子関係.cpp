#include<iostream>
using namespace std;

//�o�X�ƃ^�N�V�[�����ʂ̋@�\
class Car
{		
public:
	void run()
	{
		cout << "����" << endl;
	}
	void stop()
	{
		cout << "�~�܂�" << endl;
	}
	void HightSpeed()
	{
		cout << "����" << endl;
	}
	void LowSpeed()
	{
		cout << "�ᑬ" << endl;
	}
};

class Bus:public Car	//Car����p��
{
public:
	void passenger()	//�Ǝ��̋@�\
	{
		cout << "�R�O�l����" << endl;
	}
};
class Taxi :public Car		//Car����p��
{
public:
	void passenger()		//�Ǝ��̋@�\
	{
		cout << "�S�l����" << endl;
	}
};

//�d���̃R�[�h�����炷����
//�p��

void test()
{
	cout << "Bus" << endl;
	Bus	bus;
	bus.run();
	bus.stop();
	bus.HightSpeed();
	bus.LowSpeed();
	bus.passenger();

	cout << "Taxi" << endl;
	Taxi taxi;
	taxi.run();
	taxi.stop();
	taxi.HightSpeed();
	taxi.LowSpeed();
	taxi.passenger();
}

//int main()
//{
//	test();
//
//	return 0;
//}