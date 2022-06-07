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
	//myArray[5] <- 0부터 시작을 해서 5개를 생성했으므로 5는 없다

	int myArray[] = { 1,2,3,4 };//초기값 무조건 넣어줘야한다,배열 4개가 생성된다.
	int myArray[]{ 1,2,3,4 };
	int myArray[5] = { 1,2,3,}; // 나머비 4,5는 0으로 초기화
	
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

	//myVector에 모든 값을 더한 값을 출력해보자
	vector<int> myVector = { 11, 22, 33 };
	int vectorSize = myVector.size();
	cout << "VectorSize =" << vectorSize << endl;


	int sum = 0;
	//for(int i :myVector) 아래와 같은 의미
	/*for (auto iter = myVector.begin(); iter < myVector.end(); iter++) 아래와 같은 의미
	{
		sum += *iter;
	}
	*/
	for (int i = 0; i < myVector.size(); i++)
	{
		sum += myVector[i];

	}
	cout << "Sum =" << sum << endl;
	
	//myArray에 모든 값을 1씩 더해보자 {11,22,33} ->{12,23,34}
	
	int myArray[3] = { 11, 22, 33 };
	for (int& i : myArray) //& 가 없으면 복사여서 복사본은 바뀌지 않지만 & 넣어줌으로써 참조되어 다른 값들도 변한다
	{
		i++;
	}

	for (int i : myArray)
	{
		cout << "myArray[" << i << "]" << i << endl;
	}

}