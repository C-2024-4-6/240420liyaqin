#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double F, C;
	cout << "请输入华氏温度F:" << endl;
	cin >> F;
	C = (F - 32) * 5.0 / 9.0;
	cout << "对应的摄氏温度C:" << fixed<<setprecision(2) << C << endl;
	return 0;
}