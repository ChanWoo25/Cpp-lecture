#pragma once 
// 밑의 전처리기가 없어도 #pragma once를 통해 헤더가드 역할을 할 수 있고 
// VS는 헤더파일을 생성할 때, 자동으로 넣어준다.

//정처리기
#ifndef MY_ADD
#define MY_ADD  // 이 밑의 코드를 MY_ADD라고 전처리기에게 알려주고
				// 위의 ifndef에서 MY_ADD가 이미 읽혔으면, 패스하라고 알려준다.

int add(int a, int b)
{
	return a + b;
}

#endif