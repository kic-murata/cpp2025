#include<iostream>
using namespace std;
int main() {
	//int�^�̃|�C���^�ϐ���錾���āAnew���Z�q��
	//�v�f10�Ԃ��int�^�z��̐擪�A�h���X���擾
	int* p = new int[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//int* p = new int[10]();//���ׂĂ̗v�f��0
	for (int i = 0; i < 10; i++) {
		//*(p + i) = i;
		cout << p[i] << " ";
	}
	cout << endl;
	//�z�񂪊m�ۂ��Ă����������̈�����
	delete[] p;
	return 0;
}