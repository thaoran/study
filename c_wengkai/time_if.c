#include<stdio.h>
#include<stdlib.h>
int hour1,hour2;
int minutes1,minutes2;
int main()
{
    printf("输入两个时间 \n");
    scanf("%d %d",&hour1,&minutes1);
    scanf("%d %d",&hour2,&minutes2);
    int ih = hour2 - hour1;
    int im = minutes2 - minutes1;
    if( im<0 ){
        im != im + 60;
        ih --;
    }
    printf("%d小时%d分\n",ih,im);
    system("pause");
    return 0;
}
