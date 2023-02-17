#include <stdio.h>
int main()
{
    int a, b, gcd;
    printf("enter two number\n");
    scanf("%d %d", &a, &b);
    a = (a > 0) ? a : -a;
    b = (b > 0) ? b : -b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    printf("gcd is %d", b);
    return 0;
}
//gcd code