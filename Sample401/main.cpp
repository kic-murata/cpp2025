#include"car.h"
#include<iostream>
using namespace std;
int main() {
	Car kuruma;					//Car�N���X�̃C���X�^���X����
	kuruma.setSpeed(40);//�Z�b�^�[�ő��x��ݒ�
	kuruma.drive(1.5);	//���s���ʂ̕\��
	kuruma.setSpeed(60);//�Z�b�^�[�ő��x��ݒ�
	kuruma.drive(2.0);	//���s���ʂ̕\��
	//���ړ��������Q�b�^�[���g���ĕ\��
	cout << "���ړ�����:" << kuruma.getMigration()
		<< "km" << endl;
	return 0;
}