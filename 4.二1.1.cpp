#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
#include <malloc.h>
using namespace std;


void main()
{int i, j, * pi, * pj;     //�˴���*��ʾ����ָ����������Ǽ�������
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << '\t' << j << '\t' << pi << '\t' << pj<<endl;
cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
}