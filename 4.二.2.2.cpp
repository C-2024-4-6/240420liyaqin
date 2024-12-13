#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
using namespace std;

int parseHex(const char* const hexString)
{
	int len = strlen(hexString);
	int turn = 0;
	int base = 1;
	for (int i = len-1; i >=0; i--)
	{
		int x;
		if (isalpha(hexString[i]))
		{
			x = hexString[i] - 'A' + 10;
		}
		else { x = hexString[i]-'0'; }
		turn += x * base;
		base *= 16;
	}
	return turn;
}
int main()
{
	int n = parseHex("A5");
	cout << n << endl;
	return 0;
}
