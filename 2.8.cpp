#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	double x1, x2,a,b;
	cin >> a;
	b = a;
	a = fabs(a);
	x1 = a;
	x2 = (x1 + a / x1) / 2;
	while (fabs(x2 - x1) >= 10e-5)
	{
		x1 = x2;
		x2 = (x1 + a / x1) / 2;
	}
	if (b <= 0)
		cout << "平方根为" << x2 << 'i' << endl;
	else
		cout << "平方根为" << x2 << endl;
	return 0;
}