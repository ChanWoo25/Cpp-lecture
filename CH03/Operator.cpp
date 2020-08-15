
// Operator Precedence and Associativity.
#include <iostream>

using namespace std;

int main()
{
	int x = 4 + 2 * 3;
	int y = 3 * 4 / 2; // Level이 같은 경우 Associativity에 따라 연산 순서정함 
						// Wiki에 따르면, Left-to-Right

	// Wiki를 자주 참조하여 정확히 알고 넘어가자
	// https://en.cppreference.com/w/cpp/language/operator_precedence

	cout << (-5 / 2) << endl; // 소수점 부분을 절삭하는 방향으로 결정되었다.		== -2
	cout << (-5 % 2) << endl; // 나눠지는 왼쪽의 숫자에 부호를 따라가기로 결정됨.	== -1



	return 0;
}
