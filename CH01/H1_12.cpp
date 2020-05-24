#include <iostream>
#include "mywork.h"
#include "MyHeaders/add.h"
using namespace std;

// 여의치 않게 헤더파일에 정의를 모두 구현한 경우
// include를 통해 같은 함수가 여러번 정의될 수가 있는데, 이 때
// 헤더가드 또는 include가드가 없으면 에러가 발생한다.

int main()
{
	doSomething();
	return 0;
}