#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cel;
    printf("celcius : ");
    scanf("%lf", &cel);
    printf("섭씨 -> 화씨: %f도\n", (9*cel/5 + 32));
    printf("섭씨 -> 화씨: %f도\n", (9/5*cel + 32));
    printf("연산은 left-to-right이다. 두번쨰 연산의 경우 9/5*celcius인데,\n");
    printf("9/5가 먼저 int형으로 계산되어 1이 나와버리고 cel과 연산되기 때문에, 오차가 생긴다.\n");
    return 0;
}