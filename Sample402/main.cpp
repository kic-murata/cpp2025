#include"car.h"
#include<iostream>
using namespace std;
int main() {
	Car* pkuruma = nullptr;//Car�N���X�̃|�C���^��錾
	pkuruma = new Car();	//�C���X�^���X�𐶐����ăA�h���X���i�[
	pkuruma->setSpeed(40);	//�Z�b�^�[�ő��x��ݒ�
	pkuruma->drive(1.5);		//���s���ʂ̕\��
	pkuruma->setSpeed(60);	//�Z�b�^�[�ő��x��ݒ�
	pkuruma->drive(2.0);		//���s���ʂ̕\��
	//���ړ��������Q�b�^�[���g���ĕ\��
	cout << "���ړ�����:" << pkuruma->getMigration()
		<< "km" << endl;
	delete pkuruma;				//�C���X�^���X����
	return 0;
}