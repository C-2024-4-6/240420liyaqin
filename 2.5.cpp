#include<iostream>
#include<cctype >
using namespace std;

int main()
{
	int a=0, b=0, c=0, d=0;
	char ch;
	cout << "请输入一串字符"<<endl;
	while ((ch=getchar()) != '\n')
	{
		
		if (isalpha(ch))
		{
			a++;
		}
		else if (ch == ' ')
		{
			b++;
		}
		else if (isdigit(ch))
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "英文字母的个数是" << a << endl;
	cout << "空格的个数是" << b << endl;
	cout << "数字字符的个数是" << c << endl;
	cout << "其他字符的个数是" << d << endl;
	return 0;
}