/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//�׸� �׸���
	cout << "* * * * * * * * * *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "* * * * * * * * * *" << endl;

	// a, b 2���� ���� �޾Ƽ� 16������ a + b ���
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	cout << "16����(A + b) = " << hex << uppercase << a + b << nouppercase << endl;//uppercase �빮�� ��ȯ
	
	// a, b 2���� ���� �޾Ƽ� a - b �� 0���� ũ�� true ������ false
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;


	//cout << boolalpha << (a - b > 0) << noboolalpha << endl;

	if (a - b > 0)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	
	// a, b, c 3���� ���� �޾Ƽ� a + b �� c���� ũ�� a + b ������ c
	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	if (a + b > c)
	{
		cout << a + b << endl;
	}
	else
	{
		cout << c << endl;
	}
	
	//(2���� 10101010 + 8���� 111 - 16���� ff) ��� ���
	int a = 0b10101010;//2���� ǥ���
	int b = 0111;//8���� ǥ���
	int c = 0xff;//16���� ǥ���

	cout << a + b - c << endl;
	
	// a, b, c 3���� ���� �޾Ƽ�
	// a�� c���� �۴�
	// a�� b���� ũ��
	// ���� 2���� ���ǽ��� ���̸� true
	// �ϳ��� �����̸� false
	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	if (c > a && a > b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
}
*/