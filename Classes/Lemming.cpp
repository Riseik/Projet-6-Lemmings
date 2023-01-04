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
	setTextureRect(Rect(150, 0, 100, 400));
	setPosition(100, 0);
	return true;
}

void lemming::update(float dt)
{

}

void lemming::move()
{
	
}