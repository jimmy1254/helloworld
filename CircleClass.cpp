#include "CircleClass.h"

CircleClass::CircleClass() : circle({ 0 })
{


}

CircleClass::~CircleClass()
{
}

double CircleClass::circleArea()
{
	//반지름 * 반지름 * PI ----> 원의 넓이 공식
	return circle.radius * circle.radius * PI;


}

double CircleClass::getDistance(CircleType target)
{
	double dx = circle.center.x - target.center.x;
	double dy = circle.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy); 
	return dCntr;
}

bool CircleClass::lsOverlapped(CircleType target)
{
	double distance = getDistance(target);
	return (distance < circle.radius + target.radius);
}

