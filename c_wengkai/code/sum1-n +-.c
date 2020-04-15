//f(n)=1-1/2+1/3-1/4+...+1/n
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    double sum = 0.0;
    //int sign = 1;
    double sign = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        //sum += sign * 1.0 / i;
        sum += sign / i;
        sign = -sign;
    }
    printf("f(%d)=%f\n", n, sum);
    system("pause");
    return 0;
}