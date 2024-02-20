#include "Enemy.h"
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::Approach,//接近
    &Enemy::Shot,//撃つ
	&Enemy::Leave//離脱
};

void Enemy::Update() { 
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}
//接近
void Enemy::Approach() { 
	printf("接近\n"); 
	//射撃フェーズに切り替える
	phase_ = Phase::Shot;
}
//撃つ
void Enemy::Shot() { 
	printf("射撃\n");
	//離脱フェーズに切り替える
	phase_ = Phase::Leave;
}
//離脱
void Enemy::Leave() { 
	printf("離脱\n");
}
