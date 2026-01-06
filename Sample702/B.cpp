#include"A.h"
#include"B.h"
#include<iostream>
using namespace std;
B::B(A* pA) {
		m_pA = pA;
}
void B::hoge() {
	cout << "==== B::hoge()“à‚Å‚ÌŒÄo‚µ ====" << endl;
	cout << "B::bar()" << endl;
	m_pA->foo();
	cout << "=============================" << endl;
}
