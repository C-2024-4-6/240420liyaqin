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
	cout << "�����ʽΪ" << n << endl;
	cout << "��С������Ϊ" << a*b/n<< endl;
	return 0;
}