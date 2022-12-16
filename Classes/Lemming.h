#pragma once

#include "General.h"

class lemming
{
public:
	lemming();
	virtual ~lemming();
	void move();

	char direction;
	int x;
	int y;

private:

	Sprite* lm_sprite;
};
