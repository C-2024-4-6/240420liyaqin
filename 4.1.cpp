#include<iostream>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

int main()
{
	int  brr[10];
	int n = 0;
	int count;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		count =0;
		for (int j = 0; j < n; j++)
		{
			if (a == brr[j])
			{
				count = 1;
			}
		}
		if (count == 0)
		{
			brr[n] = a;
			n++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << " ";
	}
	return 0;

}