#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i < len2 - len1 + 1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				break;
			}
		}
		if (j == len1)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 1000);
	char* s2 =(char*) malloc(sizeof(char) * 1000);

	char c1,c2;
	int n;
	cout << "nter the first string: ";
	cin.getline(s1, 1000);
	
	cout << "Enter the second string: ";
	cin.getline(s2, 1000);

	n = indexOf(s1,s2);
	cout << n << endl;
	free(s1);
	free(s2);
	return 0;
}