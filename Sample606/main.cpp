#include<iostream>
#include<list>
using namespace std;
int main() {
	//int�l���i�[�����̃��X�gli��錾
	list<int> li{};
	li.push_back(1);		//���X�g������1��ǉ�
	li.push_back(2);		//������2��ǉ�
	li.push_front(3);		//�擪��3��ǉ�
	list<int>::iterator itr;	//�C�e���[�^�̐錾
	itr = li.begin();		//���X�g�̐擪����itr�Ɋi�[
	itr++;							//�C�e���[�^�ƂЂƂi�߂�
	li.insert(itr, 4);	//�C�e���[�^�̏ꏊ��4��}��
	//���X�g�̐擪���疖���܂Ń��[�v
	for (itr = li.begin(); itr != li.end(); itr++) {
		cout << *itr << " ";	//�C�e���[�^���w���ꏊ�̒l��\��
	}
	cout << endl;
	return 0;
}