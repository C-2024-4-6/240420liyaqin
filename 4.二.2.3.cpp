#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
using namespace std;

void sort(int* arr,int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			int tmp;
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, n);
	cout << "排序完成的数组如下:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;

	return 0;
}
