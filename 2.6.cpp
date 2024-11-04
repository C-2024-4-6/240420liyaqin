#include<iostream>
using namespace std;

int main()
{
	unsigned int a, b;
	int m, n, p, q,max;
	cin >> a >> b;
	m = a >= b ? a : b;
	n = a >= b ? b : a;
	p = m / n;
	q = m - p * n;
	while (q != 0)
	{
		m = n;
		n = q;
		p = m / n;
		q = m - p * n;
	}
	cout << "最大公因式为" << n << endl;
	cout << "最小公倍数为" << a*b/n<< endl;
	return 0;
}