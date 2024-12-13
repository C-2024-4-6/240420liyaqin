#include<iostream>
using namespace std;

int gys(int m, int n)
{
	int a = m > n ? m : n;
	int b= m > n ? n : m;
	int p, q;
	//a/b=p...q
	while (b != 0)
	{
		p = a / b;
		q = a % b;
		a = b;
		b = q;
	}
	return a;
}
int main()
{
	int m, n;
	cin >> m>>n ;
	int max=gys(m, n);
	int min =( m * n )/ max;
	cout << "最大公约数是:" << max << endl
		<< "最小公倍数是:" << min << endl;
	return 0;

}