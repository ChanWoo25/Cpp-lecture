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

	{	//중괄호는 영역을 구분하는 역할을 수행함.
		int x = 1;	// 지역 변수가 차지하고 있던 메모리는 영역 밖으로 나가면 '스택 메모리'에 반환된다.
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