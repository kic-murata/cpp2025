#include"rat.h"
#include<iostream>
using namespace std;
//�l�Y�~�̐��̏����l��0�ɐݒ肵�Ă���
int Rat::s_count = 0;
//�R���X�g���N�^
Rat::Rat() : m_id(0) {	//�������q���X�g��m_id��0���
	s_count++;			//�l�Y�~�̐����P���₷
	m_id = s_count;	//���݂̃l�Y�~�̐���ID�ԍ��ɂ���
}
//�f�X�g���N�^
Rat::~Rat() {
	cout << "�l�Y�~:" << m_id << "����" << endl;
	s_count--;			//�l�Y�~�̐����P���炷
}
//�l�Y�~�̐��̏o��
void Rat::showNum() {
	cout << "���݂̃l�Y�~�̐��F" << s_count << "�C" << endl;
}
//�l�Y�~����
void Rat::squeak() {
	cout << m_id << ":�`���[�`���[" << endl;
}