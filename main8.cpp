/*
#include <iostream>

using namespace std;

int main()
{
	
	int Score = { 0 };
	cin >> Score;
	
	// 100~90 : A
	// 90~80 : B
	// 80~70 : C
	// 70~60 : D
	// 60~50 : E
	// ������ ������ : F
	
	Score /= 10;

	switch (Score)
	{
	case 10:
		[[fallthrough]];
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}


	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > Score && Score >= 70)
	{
		cout << "C" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "D" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	// a, b 2���� ���� �޾Ƽ� a - b �� 0���� ũ�� true ������ false
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	bool result = (a - b > 0);
	//cout << boolalpha << (a - b > 0) << noboolalpha << endl;
	switch (result)
	{
	case true:
		cout << "true" << endl;
		break;
	default:
		cout << "false" << endl;
		break;
	}

	// a, b, c 3���� ���� �޾Ƽ� a + b �� c���� ũ�� a + b ������ c
	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	bool result = (a + b > c);
	switch (result)
	{
	case true:
		cout << a + b << endl;
		break;
	default:
		cout << c << endl;
		break;
	}

	//���� �ϳ��� �Է� �޾Ƽ�
	//1�̸� "Red" ���
	//2�̸� "Blue" ���
	//3�̸� "Black" ���
	//4�̸� "White" ���
	int a = { 0 };
	cout << "���� �ϳ��� �Է�? " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Red" << endl;
		break;
	case 2:
		cout << "Blue" << endl;
		break;
	case 3:
		cout << "Black" << endl;
		break;
	case 4:
		cout << "White" << endl;
		break;
	default:
		break;
	}
	

	//"�ֹι�ȣ �ڿ� 7�ڸ��� �Է�? "
	//���ڰ� 7�ڸ� �̰�
	//�� ���ڸ��� ���� 1,3�̸��� "����"
	//�� ���ڸ��� ���� 2,4�̸��� "����"
	//�� ���� �ٸ� ���� "�ܰ���"
	
int a = { 0 };
	cout << "�ֹι�ȣ �ڿ� 7�ڸ��� �Է�? " << endl;
	cin >> a;

	a /= 1000000;
	switch (a)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "����" << endl;
		break;

	case 2:
		__fallthrough;
	case 4:
		cout << "����" << endl;
		break;

	default:
		cout << "�ܰ���" << endl;
		break;
	}
	
	
}
*/

