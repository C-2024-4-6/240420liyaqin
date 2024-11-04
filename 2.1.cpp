#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (islower(ch))
	{
		ch = toupper(ch);
		cout << ch << endl;
	}
	else
	{
		cout << static_cast<int>(ch + 1)<<endl;
	}
	return 0;
}
