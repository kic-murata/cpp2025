#include"car.h"
#include<iostream>
using namespace std;

void Car::drive(double hour) {
	cout << "Žž‘¬" << m_speed << "km‚Å"
		<< hour << "ŽžŠÔ‘–s" << endl;
	cout << m_speed * hour << "kmˆÚ“®" << endl;
}
void Car::setSpeed(double spd) {
	m_speed = spd;
}