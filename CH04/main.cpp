#include <iostream>
#include <src.hpp>



void doSomething()
{
    static int a = 1; 
    // 전역 변수랑 동일한 것 아닐까? 같은 기능이라고 할 수는 있다. 메모리의 관점에서 보자.
    // static은 무슨 의미인가? : OS로부터 할당받은 메모리가 Static하다는 의미!
    // 초기화가 반복되지 않음! + 반드시 선언할 때 초기화가 되어야함!
    ++a;
    cout << a << endl;
    // 전역 변수는 꼭 필요하지 않으면 쓰지 않는 것이 좋고,
    // 객체 지향 프로그래밍을 익히는 것이 좋다.
}

int main()
{
    // Local_Scope();
    // Global_Variable();

    doSomething();
    doSomething();
    doSomething();
    
    return 0;
}