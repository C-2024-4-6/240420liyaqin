#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
#include<stdio.h>
using namespace std;


void f(char* st, int i)
{
    st[i] ='\0';
    cout << st<<endl;   // printf(¡°%s\n¡±,st);
    if (i > 1) 
    {
        f(st, i - 1);
    }
}
void main()
{
    char st[] = "abcd";
    f(st, 5);
}