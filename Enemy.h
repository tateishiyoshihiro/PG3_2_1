#pragma once
#include<stdio.h>
class Enemy {
private:
	enum class Phase { 
		Approach,
		Shot,
		Leave
	};

public:
	void Update();
private:
	//�ڋ�
	void Approach();
	//����
	void Shot();
	//���E
	void Leave();
private:
	Phase phase_ = Phase::Approach;
	static void(Enemy::*spFuncTable[])();
};
