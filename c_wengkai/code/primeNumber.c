#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
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
        printf("x������\n");
    }
    else
    {
        printf("x�������� \n");
    }
    system("pause");
    return 0;
    /*�ڶ��ַ���
    if (i < x)
    {
        printf("x������\n");
    }
    else
    {
        printf("x�������� \n");
    }
    */
}