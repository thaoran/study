#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0; //退出标志
    x = 2;
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 2; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("%d %d %d\n", one, two, five);
                    goto out;
                    exit = 1;
                    break; //只是离开了最内层的循环
                }
            }
            if (exit)
                break;
        }
        if (exit)
            break;
    }
out:
    system("pause");
    return 0;
}