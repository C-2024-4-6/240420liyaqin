#include<iostream>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

int main()
{
	bool arr[100] = { false };
	
	for (int i = 1; i <= 100; i++)
	{
		int j = i-1;
		while (j < 100)
		{
			arr[j] = (!arr[j]);
			j=j +i;
		}

	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
			cout << i+1 << " ";
	}
	return 0;


}