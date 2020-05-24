/* 
object      객체
vriables    변수 (메모리에 담겨있는 객체를 사용하기 위해 
            숫자로 된 주소 대신사람이 인식하기 쉬운 이름을 달아준다.)즉, 주소의 다른 이름

            L,R-values 기준 : 메모리 주소를 프로그래머가 직접적으로 접근할 수 있느냐 없느냐.
L-values    
R-values

메모리에 존재하는 정보 == 객체 ~~ 현실세계에서 존재하는 것 == 실체가 있는 것

 */

#include <iostream>

int main2()
{
    // x는 메모리 어딘가의 주소, int는 점수하나를 담을 수 있는 크기라고 생각
    // 즉, x라는 변수 이름이 가리키는 주소가 가리키는 
    // 메모리 공간에 123이라는 정수를 저장을 해놓는다. 
    int x = 123; // assignment

    std::cout << x << std::endl;
    
    // &x x가 가리키는 메모리의 주소 16진수 8자리 (==32bit) 출력
    std::cout << &x << std::endl;  

    //  L-value와 R-value
    //      주소를 갖고 있는것 vs 컴파일러가 동작을 구분해주는 것.
    int y(0);
   
    y = y + 2;
    /*  왼쪽의 y는 l-value, 오른쪽의 y는 r-value이다.
     *  변수 y가 가리키는 메모리 공간으로 부터 값을 가져와 + 2 연산을 한 뒤,
     *  우리는 알 수 없는 임시의 메모리 공간이 값이 저장되고, 
     *  l-value인 왼쪽의 y에 assignment를 수행한 뒤, r-value 메모리 공간은 해제된다.
     */
    



    return 0;
}