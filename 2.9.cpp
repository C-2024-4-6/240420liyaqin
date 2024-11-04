#include<iostream>
using namespace std;

int main()
{
	int b = 2;
	int day = 1;
	int sum = 2;
	while (b <= 100)
	{
		b *= 2;
		sum += b;
		day++;
	}
	if (b > 100)
	{
		sum -= b;
		b /= 2;
		day -= 1;
	}
	cout << "平均每天花" <<sum*0.8/day << endl;
	return 0;
}