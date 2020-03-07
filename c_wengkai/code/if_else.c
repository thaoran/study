#include<stdio.h>
#include<stdlib.h>
const int READY = 24;
int code = 0;
int count = 0;
int main(){
scanf("%d %d",&code,&count);
if ( code == READY ) 
    if ( count <20 ) 
        printf("一切正常\n");
    else 
        printf("继续等待\n"); //else和最近的if匹配
else
printf("退出 \n");
system("pause");
return 0;
}