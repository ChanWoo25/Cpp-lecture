#include "src.hpp"

void foo(){ std::cout << "Do Something 1\n"; }

namespace work1
{
    void foo(){ std::cout << "Do Something 2\n"; }
}

namespace work2
{
    void foo(){ std::cout << "Do Something 3\n"; }
}

void Local_Scope()
{
    printf("\n[About local block scope]\n");
    int a = 1, b = 2;
    printf("a: %d, b: %d\n", a, b);
    {
        int a = 10; b = 20;
        printf("a: %d, b: %d\n", a, b);
    }
    printf("a: %d, b: %d\n", a, b);

    printf("\n[About namespace]\n");

    foo();
    work1::foo();
    work2::foo();

}

