#pragma once

class Student              //类声明
{
public:                   //公用成员函数原型声明
	void set_value(int a,const char*b, char c);
	void display();
	Student();
	Student(int n,const char* nm, char s);
private:
	int num;
	char name[20];
	char sex;
};
