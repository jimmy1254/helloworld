#pragma once
#include <iostream>

const double PI = 3.141592;

struct C2dType 
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass
{
public: //모든곳에서 접근할수있음
	//-->>public 영역

	CircleClass(); //생성자
	~CircleClass(); // 파괴자

	double circleArea();// 면적구하기 기능 
	double getDistance(CircleType target);//target과의 거리 구하기 기능
	bool lsOverlapped(CircleType target);//target과 오버랩 되어있는지 체크하는 기능


	CircleType circle;

	//<<--public 영역
};