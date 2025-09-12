#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	// int�^�̓��I�z��v1��錾
	// �z��v�f��10,9,8�̂R�̗v�f�ŏ�����
	// vector<int> v1{ 10,9,8 };
	// �z��v�f��4�m�ۂ���0�ŏ������@()���͌�
	//vector<int> v1(4);
	// �z��v�f��4�m�ۂ���1�ŏ������@()���͌��Ə������l
	vector<int> v1(4, 1);
	// string�^�̓��I�z��v2��錾
	vector<string> v2(3,"XYZ");
	cout << "v1�̗v�f���F" << v1.size() << endl;
	cout << "v2�̗v�f���F" << v2.size() << endl;
	v1.push_back(1);	//v1�̖�����1��ǉ�
	v1.push_back(2);	//v1�̖�����2��ǉ�
	v1.push_back(3);	//v1�̖�����3��ǉ�
	v1.pop_back();		//v1�̖����̒l������
	v2.push_back("ABC");//v2�̖�����"ABC"��ǉ�
	v2.push_back("DEF");//v2�̖�����"CDE"��ǉ�

	//�C�e���[�^itr�ɔz��v1�̐擪�̏ꏊ���i�[
	auto itr = v1.begin();
	cout << "�C�e���[�^���w���v�f�̒l:" << *itr << endl;
	//�z��v1�̐擪�{1�̏ꏊ��4��}��
	v1.insert(itr + 1, 4);
	//�z��̗v�f�����ύX���ꂽ�̂ŃC�e���[�^���Ď擾
	itr = v1.begin();
	//�z��v1�̐擪�{2�̏ꏊ��5��}��
	v1.insert(itr + 2, 5);

	//�z��̗v�f�����ύX���ꂽ�̂ŃC�e���[�^���Ď擾
	itr = v1.begin();
	//�z��v1�̐擪+1�̗v�f���폜
	v1.erase(itr + 1);

	//for�����g���Ĕz��v�f���ЂƂ��\��
	cout << "�Y�������g�����z��v�f�̕\��" << endl;
	for (int i = 0; i < v1.size(); i++) {
		cout << "v1[" << i << "]="
			<< v1[i] << endl;
	}
	// �C�e���[�^���g�����z��v�f�̕\��
	cout << "�C�e���[�^���g�����v�f�̕\��" << endl;
	for (auto itr = v1.begin(); itr != v1.end(); ++itr) {
		cout << *itr << endl;
	}
	// �͈�for�����g�����z��v�f�̕\��
	// for(auto �ϐ��� : �R���e�i��) { }
	cout << "�͈�for���g�����v�f�̕\��" << endl;
	for (auto a : v1) {
		cout << a << endl;
	}

	for (int i = 0; i < v2.size(); i++) {
		cout << "v2[" << i << "]="
			<< v2[i] << endl;
	}
	return 0;
}