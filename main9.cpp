#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	/*
	int myArray[5] = { 0 };
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0���� ������ �ؼ� 5���� ���������Ƿ� 5�� ����

	int myArray[] = { 1,2,3,4 };//�ʱⰪ ������ �־�����Ѵ�,�迭 4���� �����ȴ�.
	int myArray[]{ 1,2,3,4 };
	int myArray[5] = { 1,2,3,}; // ���Ӻ� 4,5�� 0���� �ʱ�ȭ
	
	int myArray2[2][4] = { (1,2,3,4), (5,6,7,8)};
	
	// 1 2 3 4
	//5 6 7 8
	

	
	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr;
	

	vector<int> myVector = { 11,22 };
	myVector. push_back(33);//{11,22,33};
	myVector. push_back(44);// {11,22,33,44};


	*/

	//myVector�� ��� ���� ���� ���� ����غ���
	vector<int> myVector = { 11, 22, 33 };
	int vectorSize = myVector.size();
	cout << "VectorSize =" << vectorSize << endl;


	int sum = 0;
	//for(int i :myVector) �Ʒ��� ���� �ǹ�
	/*for (auto iter = myVector.begin(); iter < myVector.end(); iter++) �Ʒ��� ���� �ǹ�
	{
		sum += *iter;
	}
	*/
	for (int i = 0; i < myVector.size(); i++)
	{
		sum += myVector[i];

	}
	cout << "Sum =" << sum << endl;
	
	//myArray�� ��� ���� 1�� ���غ��� {11,22,33} ->{12,23,34}
	
	int myArray[3] = { 11, 22, 33 };
	for (int& i : myArray) //& �� ������ ���翩�� ���纻�� �ٲ��� ������ & �־������ν� �����Ǿ� �ٸ� ���鵵 ���Ѵ�
	{
		i++;
	}

	for (int i : myArray)
	{
		cout << "myArray[" << i << "]" << i << endl;
	}

}