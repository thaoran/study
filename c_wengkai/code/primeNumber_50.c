//��ӡ50���ڵ�����
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;
    for (x = 1; cnt < 50; x++)
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
            cnt++;
            printf("%d\t", x); // "\t"��֤����
            if (cnt % 5 == 0)  //ÿ�������һ��
            {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}