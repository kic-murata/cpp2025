#pragma once
class Calc {
private:
	int m_a, m_b;
public:
	Calc();								//�����Ȃ��̃R���X�g���N�^
	Calc(int a, int b);		//��������̃R���X�g���N�^
	int add();						//�����Ȃ���add�֐�
	int add(int a, int b);//��������(int)��add�֐�
	int add(int a, int b, int c);//��������(int)��add�֐�
	double add(double a, double b);//��������(double)��add�֐�
	void setValue(int a, int b);//�Z�b�^�[
	int getA();						//�Q�b�^�[
	int getB();						//�@�V
};