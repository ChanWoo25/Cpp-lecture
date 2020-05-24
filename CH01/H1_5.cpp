#include <iostream>

using namespace std;

int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	return sum; //함수의 return type과 같아야함.
}

void printHelloWorld()
{
	cout << "hello world" << endl;
}

int input() {
	int x;
	cin >> x;
	return x;
}

int main5()
{
	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << 5 + 6 << endl;

	printHelloWorld();

	int a= input();
	int b=input();
	cout << multiplyTwoNumbers(a, b) << endl;
	return 0;
}