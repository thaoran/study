//f(n)=1+1/2+...+1/n
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("f(%d)=%f\n", n, sum);
    system("pause");
    return 0;
}