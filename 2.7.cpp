#include<iostream>
using namespace std;

int main()
{
	char c = '*';
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < i+1; j++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}