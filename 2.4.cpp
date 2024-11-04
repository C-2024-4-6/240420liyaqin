#include<iostream>
using namespace std;

int main()
{
	double a, b;
	char s;
	cout << "请输入:";
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
			cout << "运算失败,被除数不能为0" << endl;
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
				cout << "运算失败,被除数不能为0" << endl;
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
			cout << "取余操作只能用于整数!" << endl;
			break;
		}
	default:
		{
		cout << "非法运算符";
		break;
	    }
	}
	return 0;
}
