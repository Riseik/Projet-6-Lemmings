#include "Lemming.h"

USING_NS_CC;

lemming::lemming()
{
	this->x = 100;
	this->y = 100;
	this->direction = 'r';
	Sprite::create("lemming.png", Rect(150, 0, 100, 400));


}
lemming::~lemming()
{

}
void lemming::move()
{
	
}