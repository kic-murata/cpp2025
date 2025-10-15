#include"bird.h"
#include"crow.h"
#include"chicken.h"

int main() {
	//Bird* pBird = new Bird();//抽象クラスは不可
	Bird* pBird1, * pBird2;	//Birdクラスのポインタ
	//Crow* pBird1;						//Crowクラスのポインタ
	//Chicken* pBird2;				//Chickenクラスのポインタ
	pBird1 = new Crow();		//Crowインスタンス生成
	pBird2 = new Chicken();	//Chickenインスタンス生成
	pBird1->fly();	//Crow
	pBird2->fly();	//Chicken
	pBird1->sing();	//Crow
	pBird2->sing();	//Chicken
	//pBird1->color();
	delete pBird1;
	delete pBird2;
	return 0;
}