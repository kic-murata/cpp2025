#include"car.h"
#include<iostream>
using namespace std;

void Car::drive(double hour) {
	cout << "時速" << m_speed << "kmで"
		<< hour << "時間走行" << endl;
	cout << m_speed * hour << "km移動" << endl;
}
void Car::setSpeed(double spd) {
	m_speed = spd;
}