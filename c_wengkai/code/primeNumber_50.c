//打印50以内的素数
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;
    for (x = 1; cnt < 50; x++)
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
            cnt++;
            printf("%d\t", x); // "\t"保证对齐
            if (cnt % 5 == 0)  //每五个素数一行
            {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}