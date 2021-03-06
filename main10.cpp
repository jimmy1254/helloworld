
#include <iostream>
#include "employeestruct.h"
#include "CircleClass.h"

using namespace std;

/*
const double PI = 3.141592;

struct C2dType // Circle 2D Type
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

double circleArea(CircleType c)
{
	//반지름 * 반지름 * PI ----> 원의 넓이 공식
	return c.radius * c.radius * PI;
}

double getDistance(CircleType c1, CircleType c2)
{
	double dx = c1.center.x - c2.center.x;
	double dy = c1.center.y - c2.center.y;
	double dCntr = sqrt(dx * dx + dy * dy); //sqrt : 제곱근
	return dCntr;

}

bool lsOverlapped(CircleType c1, CircleType c2)
{
	double distance = getDistance(c1, c2);
	return (distance < c1.radius + c2.radius);
}
*/
int main()
{
	/*
	CircleType c1, c2;
	c1.center.x = 10;
	c1.center.y = 10;
	c1.radius = 10;

	c2.center.x = 30;
	c2.center.y = 30;
	c2.radius = 10;
	bool blsOverlapped = lsOverlapped(c1, c2);
	cout << "lsOverlapped ="
		<< boolalpha << blsOverlapped << noboolalpha << endl;
	*/

	CircleClass cc1 = { 10, 10, 10 };
	CircleClass cc2= { 30, 30, 10 };
	bool blsOverlapped = cc1.lsOverlapped(cc2.circle);
	cout << "lsOverlapped = "
		<< boolalpha << blsOverlapped << noboolalpha << endl; 
	//bool 이 0과1만 갖는데 true false로 바꿔주기위해 boolalpha를 써주고 noboolalpha로 끝낸다. 무조건 같이나옴 
	


}