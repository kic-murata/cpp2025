#include"sample.h"
#include<iostream>
using namespace std;
int Sample::s_b = 0;
//�C���X�^���X�����o�֐�func1
void Sample::func1() {
	cout << "==func1==" << endl;
	m_a = 1;	//�C���X�^���X�����o�ϐ��ւ̑��
	s_b = 2;	//�ÓI�����o�ϐ��ւ̑��
	cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl;
	cout << "�ÓI�����o�֐��̌ďo��" << endl;
	Sample::func2();	//�ÓI�����o�֐��͌ďo���\
	cout << "--------------------" << endl;
}
//�ÓI�����o�֐�func2
void Sample::func2() {
	cout << "==func2==" << endl;
	//m_a = 3;	//�C���X�^���X�����o�ϐ��ւ̑��(���s�s��)
	s_b = 4;	//�ÓI�����o�ϐ��ւ̑��
	//cout << "a=" << m_a << endl; //(���s�s��)
	cout << "b=" << s_b << endl;
	//func1();	//�C���X�^���X�����o�֐��͌ďo���s��
}