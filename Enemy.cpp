#include "Enemy.h"
void (Enemy::*Enemy::spFuncTable[])() = {
	&Enemy::Approach,//�ڋ�
    &Enemy::Shot,//����
	&Enemy::Leave//���E
};

void Enemy::Update() { 
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
}
//�ڋ�
void Enemy::Approach() { 
	printf("�ڋ�\n"); 
	//�ˌ��t�F�[�Y�ɐ؂�ւ���
	phase_ = Phase::Shot;
}
//����
void Enemy::Shot() { 
	printf("�ˌ�\n");
	//���E�t�F�[�Y�ɐ؂�ւ���
	phase_ = Phase::Leave;
}
//���E
void Enemy::Leave() { 
	printf("���E\n");
}
