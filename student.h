#pragma once

class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void set_value(int a,const char*b, char c);
	void display();
	Student();
	Student(int n,const char* nm, char s);
private:
	int num;
	char name[20];
	char sex;
};
