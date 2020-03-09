#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
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
        printf("x是素数\n");
    }
    else
    {
        printf("x不是素数 \n");
    }
    system("pause");
    return 0;
    /*第二种方法
    if (i < x)
    {
        printf("x是素数\n");
    }
    else
    {
        printf("x不是素数 \n");
    }
    */
}