#include"sample.h"
#include<iostream>
using namespace std;
int main() {
	//Sample�N���X�̃C���X�^���Xs�𐶐�
	Sample s;
	//�Z�b�^�[���g���ă����o�ϐ���5���Z�b�g
	s.setNum(5);
	//�Q�b�^�[���g���ă����o�ϐ��̒l���擾���ĕ\��
	cout << s.getNum() << endl;
	return 0;
}