#include <stdio.h>
int main(void)
{
    printf("               The Fibonacci sequence \n\n");
    //The first two numbers is 0 and 1
    printf("0 \n");
    printf("1 \n");
    int k, v1 = 0, v2 = 1;
    int fn = v1 + v2; //fn = fibonacci number
    for (k = 3; k <= 6; k = k + 1) {
        printf("%d \n", fn);
        v1 = v2;
        v2 = fn;
        fn = v1 + v2;
    }


}
