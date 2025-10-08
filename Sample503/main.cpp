#include"calc.h"
#include<iostream>
using namespace std;
int main() {
	Calc* pC1, * pC2;
	pC1 = new Calc();			//引数なしでインスタンス生成
	cout << "a=" << pC1->getA() << " b=" << pC1->getB() << endl;
	pC2 = new Calc(1, 2);	//引数をつけてインスタンス生成
	cout << "a=" << pC2->getA() << " b=" << pC2->getB() << endl;

	cout << "3+4=" << pC1->add(3, 4) << endl;
	cout << pC2->getA() << "+" << pC2->getB() << "="
		<< pC2->add() << endl;
	cout << "1.1+2.3=" << pC2->add(1.1, 2.3) << endl;
	cout << "1+2+3=" << pC1->add(1, 2, 3) << endl;
	delete pC1;
	delete pC2;
	return 0;
}