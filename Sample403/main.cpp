#include<iostream>
using namespace std;
int main() {
	int* p = nullptr;	//int�^�̃|�C���^�ϐ���錾
	p = new int();		//int�l���i�[����̈���m��
	*p = 123;					//�|�C���^�Ŏ����ꂽ�A�h���X��
										//���g����������
	cout << *p << endl;
	delete p;
	return 0;
}