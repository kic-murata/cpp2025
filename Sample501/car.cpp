#include"car.h"
#include<iostream>
using namespace std;
//�R���X�g���N�^�F�����o�������q
Car::Car() : m_speed(0.0), m_migration(0.0) {
	cout << "Car�N���X�̃C���X�^���X����" << endl;
}
//�f�X�g���N�^
Car::~Car() {
	cout << "Car�N���X�̃C���X�^���X����" << endl;
}
//m_speed�̃Z�b�^�[
void Car::setSpeed(double speed) {
	m_speed = speed;
}
//m_speed�̃Q�b�^�[
double Car::getSpeed() { 
	return m_speed; 
}
//m_migration�̃Q�b�^�[
double Car::getMigration() { 
	return m_migration; 
}
void Car::drive(double hour) {
	cout << "����" << m_speed << "km��" <<
		hour << "���ԑ��s" << endl;
	cout << m_speed * hour << "km�ړ����܂���" << endl;
	//���ړ������̌v�Z
	m_migration += m_speed * hour;
}