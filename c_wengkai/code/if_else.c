#include<stdio.h>
#include<stdlib.h>
const int READY = 24;
int code = 0;
int count = 0;
int main(){
scanf("%d %d",&code,&count);
if ( code == READY ) 
    if ( count <20 ) 
        printf("һ������\n");
    else 
        printf("�����ȴ�\n"); //else�������ifƥ��
else
printf("�˳� \n");
system("pause");
return 0;
}