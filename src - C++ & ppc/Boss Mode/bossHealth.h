#ifndef __BOSSHEALTH_H
#define __BOSSHEALTH_H

#include <common.h>
#include <game.h>
#include <g3dhax.h>

public class BossMeter : public dBase_c
{
	private:
		float hp;
		float startingHp;
		
	public:
		BossMeter(float healthPoints);
		static BossMeter *build();
		static BossMeter *instance;
			
		int onCreate();
		int onDelete();
		int onDraw();
		int onExecute();
		
		void reduceHealthPoints(float amount);
		float getHealthPoints();
};

#endif