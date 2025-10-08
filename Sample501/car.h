#pragma once
class Car {
public:
	Car();					//コンストラクタ
	virtual ~Car();	//デストラクタ
	void setSpeed(double speed);//セッター
	double getSpeed();					//ゲッター
	double getMigration();			//ゲッター
	void drive(double hour);
private:
	double m_speed;				//速度
protected:
	double m_migration;		//移動距離
};