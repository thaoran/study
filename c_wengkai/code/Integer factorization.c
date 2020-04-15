//整数分解问题
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int mask = 1;
    scanf("%d", &x);
    int t = x;
    //int cnt = 0;
    while (t > 9) //当x仅剩下个位时不再循环
    {
        t /= 10;
        mask *= 10;
        //cnt++;
    }
    //printf("cnt=%d\n", cnt);
    printf("x=%d,mask=%d\n", x, mask);
    do
    {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while (mask > 0);
    printf("\n");
    system("pause");
    return 0;
}