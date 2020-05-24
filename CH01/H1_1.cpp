//#이 붙는 것들은 전처리기라고 한다. preprocessor directive
// include : cpp에 포함을 시키겠다는 의미.
#include <iostream> //input output stream 

// 프로그래밍이란 OS를 통해서 명령을 요청하는 것 <- 컴파일된 파일.
// 최소 단위 = 함수 

int main1() // main : OS가 프로그램을 실행시킬 때 main이라는 함수를 먼저 찾는다. 즉, 시작점.
{
	1 + 1;			// statement. also expression.
	int x = 2;		// integer를 담을 memory를 할당해달라고 OS에 전달.
	int y = x + 3;	// 숫자는 literal 이라고 한다.

	// 출력을 하는 함수를 갑자기 작성할 수 없기 때문에 작성된 함수를 가져오겠다.
	std::cout << y << std::endl; //end line

	// std 란 namespace -- standard library
	// 나만의 라이브러리를 잘 정리하고 유지보수 하는 습관을 들이는게 좋다.

	
	/* 마치며
		1. what's the difference between an expression and a statement?
		2. between function and library?
	*/

	return 0; // 'return' statement.
}