#include"calc.h"
//�����Ȃ��̃R���X�g���N�^
Calc::Calc() :m_a(0), m_b(0) {}
//��������̃R���X�g���N�^
Calc::Calc(int a, int b) :m_a(a), m_b(b) {}
//�����Ȃ���add�֐�
int Calc::add() {
	return m_a + m_b;	//�����o�ϐ����m�̑����Z
}
//���������add�֐�
int Calc::add(int a, int b) {
	return a + b;			//�������m�̑����Z
}
//���������add�֐�
int Calc::add(int a, int b, int c) {
	return a + b + c;			//�������m�̑����Z
}
//���������add�֐�
double Calc::add(double a, double b) {
	return a + b;			//�������m�̑����Z
}
//�Z�b�^�[
void Calc::setValue(int a, int b) {
	m_a = a;
	m_b = b;
}
//�Q�b�^�[
int Calc::getA() {
	return m_a;
}
int Calc::getB() {
	return m_b;
}