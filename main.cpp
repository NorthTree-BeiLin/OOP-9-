#include"graduate.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int i = 0;
	graduate *stu;
	stu[0] = graduate("小明");
	stu[1] = graduate("陈田", bool(0), (char*)"2018119901", 90.1, "计算机网络", "Xuhong");
	stu[2] = graduate("李辉", bool(1), (char*)"2018119902", 88.79, "软件工程", "Lijie");
	cout << "调用常成员函数输出信息：" << endl<<endl;
	cout << "学号" << setw(30) << "姓名" << setw(30) << "性别" << setw(30) << "入学成绩" << setw(30) << "研究领域" << setw(20) << "指导教师" << endl;
	for (i = 0; i < 3; i++)
	{
		stu[i].output();

	}

	cout << "调用普通成员函数输出信息：" << endl<<endl;
	cout <<setw(30)<< "学号" << setw(30) << "姓名"<< setw(30) << "性别" << setw(30) << "入学成绩" << setw(40) << "研究领域" << setw(20) << "指导教师" << endl;
	for ( i=0; i < 3; i++)
	{
		stu[i].display();
	}

	stu[1].gettutor();
	double avgscore = stu[0].avg();

	cout << "研究生成绩的平均值为：" << avgscore << endl;
	grade(stu);
	system("pause");
	return 0;
}