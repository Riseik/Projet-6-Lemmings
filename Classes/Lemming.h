#pragma once

#include "General.h"

class lemming : public Sprite
{
public:
	lemming();
	virtual ~lemming();
	virtual bool init();
	virtual void update(float dt);
	void animation();

	char direction;
	int time_anime;
	int time_spawn;
	int etat;
	int num_animation;

	//int x;
	//int y;

	CREATE_FUNC(lemming);

private:

	//Sprite* lm_sprite;
};
