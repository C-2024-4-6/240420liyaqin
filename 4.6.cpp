#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
using namespace std;
//
int counts[26];
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		int j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == 'A' + i || s[j] == 'a' + i)
			{
				counts[i]++;
			}
			j++;
		}
	}
}

int main()
{
	cout << "Enter a string:";
	char* s1 = (char*)malloc(sizeof(char) * 1000);
	cin.getline(s1, 1000);
	

	count(s1, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i])
		{
			cout << (char)('a' + i) << ":"
				<< counts[i] << " times" << endl;
		}
	}
	free(s1);
	return 0;
	
}