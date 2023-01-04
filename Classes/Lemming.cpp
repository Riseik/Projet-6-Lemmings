#include "Lemming.h"

USING_NS_CC;

lemming::lemming()
{
	//this->x = 100;
	//this->y = 100;
	this->direction = 'r';



}
lemming::~lemming()
{

}

bool lemming::init()
{
	//"lemming.png"
	//Sprite::create("lemming.png", Rect(150, 0, 100, 400));
	setTexture("lemming.png");
	setTextureRect(Rect(150, 0, 50, 170));
	setPosition(50, 100);
	setScale(0.2f, 0.2f);
	this->num_animation = 1;
	this->time_spawn = 0;
	this->time_anime = 0;
	this->etat = 1;
	scheduleUpdate();
	return true;
}

void lemming::update(float dt)
{
	switch (this->etat)
	{
	case 1:				//marche a droite
		this->setPositionX(this->getPositionX() + SPEED*dt);
		this->animation();
		break;
	case 2:				//marche a gauche
		this->setPositionX(this->getPositionX() - SPEED*dt);
		this->animation();
		break;

	default:
		break;
	}

	this->time_anime++;
}

void lemming::animation()
{
	if (this->time_anime >= 0 && this->num_animation == 1)
	{
		this->setTextureRect(Rect(80, 0, 50, 170));
		this->num_animation = 2;
	}
	if (this->time_anime >= 10 && this->num_animation == 2)
	{
		this->setTextureRect(Rect(150, 0, 50, 170));
		this->num_animation = 3;
	}
	if (this->time_anime >= 20 && this->num_animation == 3)
	{
		this->setTextureRect(Rect(220, 0, 50, 170));
		this->num_animation = 1;

	}
	if (this->time_anime >= 30)
	{
		this->time_anime = 0;
	}

}

