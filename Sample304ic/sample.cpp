#include "sample.h"

void Sample::setNum(const int num) {
	//引数numをprivateなメンバ変数m_numへ代入
	/*num = num + 1;*/
	m_num = num;
}
int Sample::getNum() const {
	//privateなメンバ変数の値を戻り値として返す
	//m_num = 2;
	return m_num;
}