#include"bird.h"
#include"crow.h"
#include"chicken.h"

int main() {
	//Bird* pBird = new Bird();//���ۃN���X�͕s��
	Bird* pBird1, * pBird2;	//Bird�N���X�̃|�C���^
	//Crow* pBird1;						//Crow�N���X�̃|�C���^
	//Chicken* pBird2;				//Chicken�N���X�̃|�C���^
	pBird1 = new Crow();		//Crow�C���X�^���X����
	pBird2 = new Chicken();	//Chicken�C���X�^���X����
	pBird1->fly();	//Crow
	pBird2->fly();	//Chicken
	pBird1->sing();	//Crow
	pBird2->sing();	//Chicken
	//pBird1->color();
	delete pBird1;
	delete pBird2;
	return 0;
}