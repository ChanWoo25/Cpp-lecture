#include <iostream>
using namespace std;

// 함수가 길고 많아지면, 한 눈에 들어오지 않고, main함수가 밑으로 내려가기 때문에 선언과 정의를 분리하여 준다.

// Forward declaration
int add(int a, int b); 
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << multiply(2, 5) << endl;
	cout << subtract(3, 2) << endl;

	return 0;
}

//Definition
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}