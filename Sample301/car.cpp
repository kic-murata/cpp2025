#include"car.h"
#include<iostream>
using namespace std;

void Car::drive(double hour) {
	cout << "����" << speed << "km��"
		<< hour << "���ԑ��s" << endl;
	cout << speed * hour << "km�ړ�" << endl;
}