#include<iostream>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

double celsius_to_fah(double cel)
{
	double fah = cel * 1.8 + 32;
	return fah;
}//�����¶ȵ������¶�
double fahrenheit_to_cels(double fah) 
{
	double cel = (fah - 32) / 1.80;
	return cel;
}//�����¶ȵ������¶�

int main()
{
	double c, f;
	cout << "�����������¶�:" << endl;
	cin >> c;
	f = celsius_to_fah(c);
	cout << fixed << setprecision(1) <<f<< endl;
	cout << "�����뻪���¶�:" << endl;
	cin >> f;
	c=fahrenheit_to_cels(f);
	cout << fixed << setprecision(2) <<c<< endl;
	return 0;
}