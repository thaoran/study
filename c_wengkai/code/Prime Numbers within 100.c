#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 100; x++)
    {
        int i;           //�����涨��,���Ժ������
        int isPrime = 1; //x������
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isPrime = 0;
                break; //����һ���ж��ܱ�i����ʱ,�Ͳ���Ҫѭ����
            }
        }
        if (isPrime == 1)
        {
            printf("%d������\n", x);
        }
    }
    system("pause");
    return 0;
}