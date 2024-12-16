//#include<iostream>
//using namespace std;
//
//class Student {
//public:
//	int num;
//	int score;
//	void set()
//	{
//		int n;
//		int s;
//		cin >> n;
//		cin >> s;
//		num = n;
//		score = s;
//	}
//};
//
//void max(Student* arr,int n)
//{
//	int max = arr[0].score;
//	int max_number = arr[0].num;
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i].score > max)
//		{
//			max = arr[i].score;
//			max_number = arr[i].num;
//		}
//	}
//	cout << "成绩最高者的学号是:" << max_number << endl;
//}
//
//
//int main()
//{
//	Student stus[5];
//	for (int i = 0; i < 5; i++)
//	{
//		stus[i].set();
//	}
//	max(stus,5);
//	return 0;
//}
