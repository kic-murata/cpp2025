#include"sample.h"
#include<iostream>
int main() {
	Sample::func2();
	//Sample�N���X�̃|�C���^�ϐ�s��錾���ăC���X�^���X��
	//�A�h���X���i�[
	Sample* s = new Sample();
	s->func1();			//�C���X�^���X�����o�֐��̌ďo���@
	//Sample::func1();//�C���X�^���X�����o�֐��̌ďo���A
	s->func2();			//�ÓI�����o�֐��̌ďo���@(�񐄏�)
	Sample::func2();//�ÓI�����o�֐��̌ďo���A
	delete s;
	return 0;
}