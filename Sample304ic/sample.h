#pragma once
class Sample {
public:
	inline void setNum(const int num) 
	{
		m_num = num;
	}	//セッター
	inline int getNum() const
	{
		return m_num;
	}
		//ゲッター
private:
	int m_num;
};