#include<iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "��ֱ��������������߳�abc:" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����ε��ܳ�Ϊ:" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ���������" << endl;
		}
	}
	else {
		cout << "�����߲��ܹ���������" << endl;
	}
	return 0;
}
