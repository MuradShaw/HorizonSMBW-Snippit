#include "Boss Mode/bossHealth.h"

BossMeter::BossMeter(float healthPoints)
{
	this->hp = healthPoints;
	this->startingHp = healthPoints;
}

int BossMeter::onCreate() {
	return true;
}

int BossMeter::onDelete() {
	return true;
}

int BossMeter::onExecute() {
	return true;
}

/*
*	Given the amount of HP we started off with,
*	reduce the hp and update layout accordingly
*/

void BossMeter::reduceHealthPoints(float amount)
{
	this->hp = this->hp - amount;
}

float BossMeter::getHealthPoints()
{
	return this->hp;
}
