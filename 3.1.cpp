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
	cout << "���Լ����:" << max << endl
		<< "��С��������:" << min << endl;
	return 0;

}