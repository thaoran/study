#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 100; x++)
    {
        int i;           //在外面定义,可以后面调用
        int isPrime = 1; //x是素数
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break; //当第一次判断能被i整除时,就不需要循环了
            }
        }
        if (isPrime == 1)
        {
            printf("%d是素数\n", x);
        }
    }
    system("pause");
    return 0;
}