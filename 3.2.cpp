#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int num)
{
	if (num == 0 || num == 1)
		return false;
	else if (num == 2||num==3)
		return true;
	else {
		int m = sqrt(num);
		for (int i = 2; i <= m; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int number = 0;
	int n = 2;
	int arr[20][10];
	while (number != 201)
	{
		if (is_prime(n))
		{
			arr[number / 10][number % 10 ] = n;
			number++;
		}
		n++;
	}
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}