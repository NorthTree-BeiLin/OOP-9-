#include"graduate.h"
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	int i = 0;
	graduate *stu;
	stu[0] = graduate("С��");
	stu[1] = graduate("����", bool(0), (char*)"2018119901", 90.1, "���������", "Xuhong");
	stu[2] = graduate("���", bool(1), (char*)"2018119902", 88.79, "�������", "Lijie");
	cout << "���ó���Ա���������Ϣ��" << endl<<endl;
	cout << "ѧ��" << setw(30) << "����" << setw(30) << "�Ա�" << setw(30) << "��ѧ�ɼ�" << setw(30) << "�о�����" << setw(20) << "ָ����ʦ" << endl;
	for (i = 0; i < 3; i++)
	{
		stu[i].output();

	}

	cout << "������ͨ��Ա���������Ϣ��" << endl<<endl;
	cout <<setw(30)<< "ѧ��" << setw(30) << "����"<< setw(30) << "�Ա�" << setw(30) << "��ѧ�ɼ�" << setw(40) << "�о�����" << setw(20) << "ָ����ʦ" << endl;
	for ( i=0; i < 3; i++)
	{
		stu[i].display();
	}

	stu[1].gettutor();
	double avgscore = stu[0].avg();

	cout << "�о����ɼ���ƽ��ֵΪ��" << avgscore << endl;
	grade(stu);
	system("pause");
	return 0;
}