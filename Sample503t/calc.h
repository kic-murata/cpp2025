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
	//�����Q�������^�̃e���v���[�g
	template <typename T>
	T add(T a, T b) {
		return a + b;
	}
	//�����Q���قȂ�^�̃e���v���[�g
	template <typename T,typename U>
	auto add(T a, U b) {
		return a + b;
	}
	//�����̌����ϒ��̃e���v���[�g
	template <typename...Args>
	auto add(Args... args) {
		return (args + ...);
	}
	//int add(int a, int b, int c);//��������(int)��add�֐�
	//int add(int a, int b);//��������(int)��add�֐�
	//double add(double a, double b);//��������(double)��add�֐�
	//string add(string a, string b);
	void setValue(int a, int b);//�Z�b�^�[
	int getA();						//�Q�b�^�[
	int getB();						//�@�V
};