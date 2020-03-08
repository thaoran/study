# 常用

## 常用函数

### rand（）<stdlib.h> 函数

* 产生一个随机整数
* rand函数界限：stdlib.h头文件中有宏#define RAND_MAX 0x7fff
* rand产生一个0-0x7fff的随机数，即最大是32767的一个数
  
```c
srand((unsigned int)time(0));//初始化种子为随机值，强转为无符号整数
int num = rand() % 50 + 1;//产生一个1-50之间的随机数
```

### srand()

* 随机数发生器的初始化函数

> rand（）产生随机数时，如果用srand（seed）播下种子之后，一旦种子相同（下面的getpid方法），产生的随机数将是相同的。当然很多时候刻意让rand（）产生的随机数随机化，用时间作种子 srand（time（NULL）），这样每次运行程序的时间肯定是不相同的，产生的随机数肯定就不一样了。

## 技巧

* x%n的结果是[0,n-1]的一个整数
* 1.0*a//转换我浮点型
* 整数分解

>n%10,得个位数  
>n/10,去得个位数  
>(n/10)%10,得十位数  

* 整数逆序

```c 正整数逆序
int main(){
    int x;
    scanf_s("%d", &x);
    int digit;
    int ret = 0;
    while (x > 0)
    {
        digit = x % 10;
        ret = ret * 10 + digit;
        printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
        x /= 10;
    }
    printf("%d", ret);
    system("pause");
    return 0;
}
```
