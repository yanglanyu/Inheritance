#include<iostream>
using namespace std;

//バスとタクシーが共通の機能
class Car
{		
public:
	void run()
	{
		cout << "走る" << endl;
	}
	void stop()
	{
		cout << "止まる" << endl;
	}
	void HightSpeed()
	{
		cout << "高速" << endl;
	}
	void LowSpeed()
	{
		cout << "低速" << endl;
	}
};

class Bus:public Car	//Carから継承
{
public:
	void passenger()	//独自の機能
	{
		cout << "３０人乗れる" << endl;
	}
};
class Taxi :public Car		//Carから継承
{
public:
	void passenger()		//独自の機能
	{
		cout << "４人乗れる" << endl;
	}
};

//重複のコードを減らすため
//継承

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