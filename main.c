#include <stdio.h>
#include <stdlib.h>

int main()
{
    // double cel;
    // printf("celcius : ");
    // scanf("%lf", &cel);
    // printf("섭씨 -> 화씨: %f도\n", (9*cel/5 + 32));
    // printf("섭씨 -> 화씨: %f도\n", (9/5*cel + 32));
    // printf("연산은 left-to-right이다. 두번쨰 연산의 경우 9/5*celcius인데,\n");
    // printf("9/5가 먼저 int형으로 계산되어 1이 나와버리고 cel과 연산되기 때문에, 오차가 생긴다.\n");
    

    // for(int i=3; i<=5; i++)
    //     for(int j=3; j<=5; j++)
    //         printf("%d * %d = %d\n", i, j, (i*j));

    // char star = '*';
    // char sp = ' ';
    // int sz = 0;
    // printf("tri size: "); scanf("%d", &sz);
    // for(int i=0; i<sz; i++)
    // {
    //     for(int j=0; j<i; j++)
    //         printf("%c", sp);
    //     for(int j=1; j<(sz-i)*2; j++)
    //         printf("%c", star);
    //     printf("\n");
    // }

    int n, num;
    printf("소인수분해\n입력: N = ");

    printf("%x\n", n);
    scanf("%d", &n);

    printf("%x\n", n);
    printf("%x\n", num);

    printf("N = ");
    if(n==1) printf("1");
    for(int i=2, num=n; i*i < n; i++)
    {
        while(num % i == 0)
        {
            printf("%d", i);
            num /= i;
            if(num != 1) printf(" * ");
        }
    }
    if(num != 1) printf("%d", num);
    printf("\n");
    return 0;
}