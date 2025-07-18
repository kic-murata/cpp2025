#include "sample.h"

void Sample::setNum(int num) {
	//引数numをprivateなメンバ変数m_numへ代入
	m_num = num;
}
int Sample::getNum() {
	//privateなメンバ変数の値を戻り値として返す
	return m_num;
}