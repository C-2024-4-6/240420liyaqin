#include<iostream>
using namespace std;

int main()
{
	double a, b;
	char s;
	cout << "������:";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':
		cout << a << "+" << b << "=" << a + b << endl;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b << endl;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "����ʧ��,����������Ϊ0" << endl;
			break;
		}
		else 
		{ 
			cout << a << "/" << b << "=" << a / b << endl; 
			break;
		}
	case '%':
		if (static_cast<int>(a)==a&&static_cast<int>(b) == b)
		{
			if (b == 0)
			{
				cout << "����ʧ��,����������Ϊ0" << endl;
				break;
			}
			else
			{
				cout << a << "%" << b << "=" << static_cast<int>(a) % static_cast<int>(b) << endl;
				break;
			}
		}
		else
		{
			cout << "ȡ�����ֻ����������!" << endl;
			break;
		}
	default:
		{
		cout << "�Ƿ������";
		break;
	    }
	}
	return 0;
}
