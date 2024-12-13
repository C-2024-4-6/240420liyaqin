#include<iostream>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

int digui(int day, int n)
{
	if (day == 1)
		return n;
	return digui(day - 1, 2 * (n+1));
}
int main()
{
	int n = digui(10, 1);
	cout << n << endl;
	return 0;
}