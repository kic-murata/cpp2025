#include"car.h"
#include<iostream>
using namespace std;

void Car::drive(double hour) {
	cout << "����" << m_speed << "km��"
		<< hour << "���ԑ��s" << endl;
	cout << m_speed * hour << "km�ړ�" << endl;
}
void Car::setSpeed(double spd) {
	m_speed = spd;
}