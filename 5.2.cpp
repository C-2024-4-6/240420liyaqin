#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "student.h"
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout <<"num��" << num << endl;
    cout << "name��" << name << endl;
    cout <<"sex��" << sex << endl;
}
void Student::set_value(int a,const char*b, char c)
{
    num = a;
    strcpy(name, b);
    sex = c;
}
Student::Student(int n,const char* nm, char s)
{
    num = n;
    strcpy(name, nm);
    sex = s;
}
Student::Student(): num(0),sex('U')
{
    name[0] = '\0';
}
int main()
{
    Student stud;                //�������
    stud.set_value(007, "tcg", 'm');
    stud.display();              //ִ��stud�����display����


    Student stud1(007, "tcg", 'M');
    stud1.display();
    return 0;
}