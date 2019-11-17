#include "graduate.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


double graduate::avgscore = 0;
int graduate:: num =0;
graduate::graduate()
{
	cout << "调用构造函数" << endl;
	gender = 0;
	score = 0;
	
}
graduate::graduate(string n, bool b, char *c, double d, string e, string f) :tutor((string)"李江")
{
	cout << "调用有参构造函数" << endl;
	this->name = n;
	this->gender = b;
	this->score = d;
	strcpy(this->id, c);
	this->research = e;
	//this->tutor = f;
	avgscore += score;
	num++;
	cout << "成绩之和为：" << avgscore << endl;
	cout << "人数：" << num<<endl;
	

}
graduate::graduate(const graduate &other)
{
	getchar();
	this->name = other.name;
	strcpy(this->id, other.id);
	this->gender = other.gender;
	this->score = other.score;
	this->research = other.research;
	//this->tutor = other.tutor;
	avgscore += score;
	num++;
	cout << "成绩之和为：" << avgscore << endl;
	cout << "人数：" << endl;
}

/*graduate::~graduate()
{
	cout << "调用析构函数" << endl;
	num--;
	getchar();



}*/
void graduate::output()const
{
	cout.setf(ios::left);


	cout << setw(30) << id << setw(30) << name << setw(30) << gender << setw(30) << score << setw(30) << research << setw(30) << tutor << endl << endl;

}
void graduate::display()
{
	cout.setf(ios::left);

	
	cout<< setw(30) << id <<setw(30)<< name<<setw(30)<< gender<<setw(30)<< score <<setw(30)<< research << setw(30 )<<tutor << endl<<endl;

}

double graduate::avg()
{

	return (graduate::avgscore /graduate:: num);

}
void graduate::gettutor()const
{
	cout << "学号：" << id << "\t" << "指导教师：" << tutor << endl;
}
void grade(graduate *a)
{
	int i = 0, s;
	cout << "每一位研究生的成绩等级是：" << endl;
	for (i; i < graduate::num; i++)
	{
		s =int(a[i].score/10);
		cout << "学号：\t" << a[i].id << "\t:";
		switch (s)
		{
		case 6:cout << "D" << endl; break;
		case 7:cout << "C" << endl; break;
		case 8:cout << "B" << endl; break;
		case 9:cout << "A" << endl; break;
		default:cout << "E" << endl;

		}

	}
}
