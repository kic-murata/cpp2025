#include"ambulance.h"
#include<iostream>
using namespace std;
//�R���X�g���N�^�F�����o�������q
Ambulance::Ambulance() : m_number(119) {
	cout << "Ambulance�N���X�̃C���X�^���X����" << endl;
}
//�f�X�g���N�^
Ambulance::~Ambulance() {
	cout << "Ambulance�N���X�̃C���X�^���X����" << endl;
}
void Ambulance::savePeople() {
	//�q�N���X����͐e�N���X��protected�ȃ����o�ɃA�N�Z�X�\
	cout << "���ړ�����" << m_migration << "km" << endl;
	cout << "�~�}�~������" << endl
		<< "�ďo����" << m_number << "��" << endl;
}
