#pragma once
#include<string>
using namespace std;
class Calc {
private:
	int m_a, m_b;
public:
	Calc();								//�����Ȃ��̃R���X�g���N�^
	Calc(int a, int b);		//��������̃R���X�g���N�^
	int add();						//�����Ȃ���add�֐�
	template <typename T>
	T add(T a, T b) {
		return a + b;
	}
	int add(int a, int b, int c);//��������(int)��add�֐�
	//int add(int a, int b);//��������(int)��add�֐�
	//double add(double a, double b);//��������(double)��add�֐�
	//string add(string a, string b);
	void setValue(int a, int b);//�Z�b�^�[
	int getA();						//�Q�b�^�[
	int getB();						//�@�V
};