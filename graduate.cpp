#include "graduate.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


double graduate::avgscore = 0;
int graduate:: num =0;
graduate::graduate()
{
	cout << "���ù��캯��" << endl;
	gender = 0;
	score = 0;
	
}
graduate::graduate(string n, bool b, char *c, double d, string e, string f) :tutor((string)"�")
{
	cout << "�����вι��캯��" << endl;
	this->name = n;
	this->gender = b;
	this->score = d;
	strcpy(this->id, c);
	this->research = e;
	//this->tutor = f;
	avgscore += score;
	num++;
	cout << "�ɼ�֮��Ϊ��" << avgscore << endl;
	cout << "������" << num<<endl;
	

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
	cout << "�ɼ�֮��Ϊ��" << avgscore << endl;
	cout << "������" << endl;
}

/*graduate::~graduate()
{
	cout << "������������" << endl;
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
	cout << "ѧ�ţ�" << id << "\t" << "ָ����ʦ��" << tutor << endl;
}
void grade(graduate *a)
{
	int i = 0, s;
	cout << "ÿһλ�о����ĳɼ��ȼ��ǣ�" << endl;
	for (i; i < graduate::num; i++)
	{
		s =int(a[i].score/10);
		cout << "ѧ�ţ�\t" << a[i].id << "\t:";
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
