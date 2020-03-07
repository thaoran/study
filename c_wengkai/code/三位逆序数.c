#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	//int a = 0, x = 0, y = 0, z = 0;
	//scanf("%d",&a);
	//x = a / 100;
	//y = (a - 100 * x) / 10;
	//z = (a - 100 * x - 10 * y);
	//printf("%d%d%d", z, y, x);
	//system("pause");
	//return 0;
	//三位正整数
	int i;
	scanf("%d", &i);
	int a = i % 100 % 10;
	int b = i / 100;
	int c = i % 100 / 10;
	i = a * 100 + b + c * 10;
	printf("%d", i);
	system("pause");
	return 0;
}