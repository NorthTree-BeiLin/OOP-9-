#pragma once
#include<iostream>
#include<string>
using namespace std;
class graduate
{
public:
	graduate(); 
	graduate(string a, bool b = 0, char *c = (char *)"2018119900", double d = 80.00, string e = "计算机科学与技术", string f = "Liming");
	graduate(const graduate &other);
//	~graduate();
	void display();
	void output()const;
	void gettutor()const;
	static double avgscore;
	static int num; 
	double avg();
	friend void grade(graduate *a);
private:
    string name;
    bool gender;
	char id[20];
	 double score;
	 string research;
	const string tutor;
};

