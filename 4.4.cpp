#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

vector<int> merge(const vector<int>&list1, int size1, const vector<int>&list2, int size2)
{
	vector<int>sum(size1 + size2);
	for (int i = 0; i < size1; i++)
	{
		sum[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++)
	{
		sum[i] = list2[i - size1];
	}
	for (int i = 0; i < size1 + size2-1; i++)
	{
		for (int j = 0; j < size1 + size2 - i-1; j++)
		{
			if (sum[j ]> sum[j + 1])
			{
				int tmp;
				tmp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = tmp;
			}
		}
	}
	return sum;
}
int main()
{
	vector<int>list1;
	vector<int>list2;
	int n1,n2;
	cout << "请输入数组list1:" << endl;
	while (cin >> n1)
	{
		list1.push_back(n1);
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "请输入数组list2:" << endl;
	while (cin >> n2)
	{
		list2.push_back(n2);
	}
	int size1 = list1.size();
	int size2 = list2.size();
	vector<int>sum(size1 + size2);
	sum = merge(list1, size1, list2, size2);
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << sum[i] << " ";
	}
	return 0;
	
}