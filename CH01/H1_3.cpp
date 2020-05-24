#include <iostream>

int main3() {
	int x = 123;	// Initialization  -> 2가지는 구분되어야 한다.
	x = 5;			// Assignment

	std::cout << x << std::endl;
	// 초기화 하지 않고 출력: 선언되지 않은 x가 사용됨: Runtime Error!
	// Release모드로 실행 -> 0이 들어감. 편리하지만 의도하지 않은 동작이므로 환경이 달라졌을 때 문제가 생긴다.


	return 0;
}