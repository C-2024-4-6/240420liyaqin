#include<iostream>
#include<cctype >
using namespace std;

int main()
{
	int a=0, b=0, c=0, d=0;
	char ch;
	cout << "������һ���ַ�"<<endl;
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
	cout << "Ӣ����ĸ�ĸ�����" << a << endl;
	cout << "�ո�ĸ�����" << b << endl;
	cout << "�����ַ��ĸ�����" << c << endl;
	cout << "�����ַ��ĸ�����" << d << endl;
	return 0;
}