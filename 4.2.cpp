#include<iostream>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

//从小到大
double* bubblesort(double* arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}

		}
	}
	return arr;
}
int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	bubblesort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << fixed << setprecision(2) << arr[i] << " ";
	}
	return 0;
}