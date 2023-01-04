#pragma once

#include "General.h"

class lemming : public Sprite
{
public:
	lemming();
	virtual ~lemming();
	virtual bool init();
	virtual void update(float dt);
	void move();

	char direction;
	//int x;
	//int y;

	CREATE_FUNC(lemming);

private:

	//Sprite* lm_sprite;
};
