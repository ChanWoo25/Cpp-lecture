#include <iostream>
using namespace std;

int main()
{
	int x = 2; // x is a variabel, 2 is a literal.
	
	cout << 1 + 2 << endl; 
	// 1과 2는 둘 다 literal , 1 + 2 는 expression.
	// 1과 2는 연산자의 입장에서는 operand라고도 할 수 있다. 

	int y = (x > 0) ? 1 : 2;
	// C++의 유일한 삼항 연산자(Ternary operator)인 조건 연산자 (Conditional Operator)
	// 첫번째 항이 true면 2번째, false면 3번째 항을 반환한다.
	cout << y << endl;
	
	cout << "Hello, World!" << endl;
	
	
	return 0;
}


/* Formatting
 * 보기 좋게 코드를 정리 하는법
 1. 보기 좋은 코드를 보면 보고 배운다.
 2. indenting을 그룹 내에서 통일 시키기.
 3. 하드코딩보다는 소프트 코딩에 익숙해지기. (사용자가 직접 변수에 literal값을 직접 넣어주는게 Hard coding,
 사용자의 입력이나 외부파일, 네트워크 통신등으로 값을 받아서 저장하는 것을 Soft coding이라한다.
*/