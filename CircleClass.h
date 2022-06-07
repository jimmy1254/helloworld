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
public: //�������� �����Ҽ�����
	//-->>public ����

	CircleClass(); //������
	~CircleClass(); // �ı���

	double circleArea();// �������ϱ� ��� 
	double getDistance(CircleType target);//target���� �Ÿ� ���ϱ� ���
	bool lsOverlapped(CircleType target);//target�� ������ �Ǿ��ִ��� üũ�ϴ� ���


	CircleType circle;

	//<<--public ����
};