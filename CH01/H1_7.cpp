#include <iostream>
using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << " " << &x << endl;
}
int main()
{
	int x = 0;
	//int x = 1; //Error!
	cout << x << ' ' << &x << endl;

	{	//�߰�ȣ�� ������ �����ϴ� ������ ������.
		int x = 1;	// ���� ������ �����ϰ� �ִ� �޸𸮴� ���� ������ ������ '���� �޸�'�� ��ȯ�ȴ�.
		cout << x << ' ' << &x << endl;
		doSomething(x);
	}
	// Output:
	// 0 00F8FDE8
	// 1 00F8FDDC

	doSomething(x);
	{
		int x = 2;
		cout << x << ' ' << &x << endl;
	}
	return 0;
}