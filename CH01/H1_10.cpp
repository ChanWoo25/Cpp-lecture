#include <iostream>
using namespace std;

// �Լ��� ��� ��������, �� ���� ������ �ʰ�, main�Լ��� ������ �������� ������ ����� ���Ǹ� �и��Ͽ� �ش�.

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