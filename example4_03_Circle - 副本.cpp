//��2���ļ�: example4_03_Circle.cpp, ��Բ���ʵ��
#include "example4_03_Circle.h"               //����ͷ�ļ�

double Circle::Area( )        //��Բ�����
{
	//PI = 3.14;
	return PI*Radius*Radius;
}
double  Circle::Circumference()  //��Բ���ܳ�
{
	return 2*PI*Radius;
}
