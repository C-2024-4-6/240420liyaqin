#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double F, C;
	cout << "�����뻪���¶�F:" << endl;
	cin >> F;
	C = (F - 32) * 5.0 / 9.0;
	cout << "��Ӧ�������¶�C:" << fixed<<setprecision(2) << C << endl;
	return 0;
}