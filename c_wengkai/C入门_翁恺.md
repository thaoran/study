# c入门

## 注释

单行:　　`//`  
多行：　 `/*  */`
也可以用于一行内的注释  
`int ak=47 /* 36 */,y=9,`

## 判断

### 判断：if语句

```c
#include<stdio.h>
#include<stdlib.h>
int hour1,hour2;
int minutes1,minutes2;
int main()
{
    printf("输入两个时间\n");
    scanf("%d %d",&hour1,&minutes1);
    scanf("%d %d",&hour2,&minutes2);
    printf("right \n");
    scanf("%d %d",&hour2,&minutes2);
    int ih = hour2 - hour1;
    int im = minutes2 - minutes1;
    if( im<0 ){
        im = im + 60;
        ih --;
    }
    printf("%d小时%d分\n",ih,im);
    system("pause");
    return 0;
}
```

## 判断的条件：关系运算

### 关系运算符  

运算符 | 意义
:----:|:---:
= = | 相等
!= | 不相等
|> | 大于
|>= | 大于或等于
< | 小于
<= | 小于或等于

### 关系运算的结果

* 当两个值的关系符合关系运算符的预期时，关系运算的结果为整数1，否则为整数0

> printf("%d\n"5==3);

### 关系运算的优先级  

* 所有的关系运算符的优先级比算术运算的低  
* 比赋值运算的高

> 7 >= 3 + 4;　　3+4先算  
> int r = a>0;  

* 用来判断是否相等的 == 和 != 的优先级比其他的低，而连续的关系运算是从左到右进行的  

> 5>3==6>4  
> 6>5>4  

## 找零计算器

```c
// 初始化  
int price = 0;
// 读入金额和票面  
printf("请输入金额：");  
scanf("%d",&price);
printf("请输入票面：");  
scanf("%d",&bill);
// 计算找零  
if ( bill >= price) {
    printf("应该找您：%d\n",bill - price);
} else {
    printf("你的钱不够\n");
}
```

## if语句再探

* if语句这一行结束的时候并没有表示语句结束的“;”,而后面的赋值语句写在if的下一行,并且缩进了,在这一行结束的时候有一个表示语句结束的“;”。这表明这条赋值语句是if语句的一部分,if语句拥有和控制这条赋值语句,决定它是否要被执行。

```c
if ( total > amount );
    total += amount+10;
```

## 分支  

### 嵌套的判断

* 当if的条件满?足或者不满?足的时候要执?行的语句也可以是?一条if或if-else语句，这就是嵌套的if语句

```C
if ( code == READY )
    if ( count <20 )
        printf("一切正常\n");
    else
        printf("继续等待\n"); //else和最近的if匹配
```

## else的匹配

* else总是和**最近**的那个if匹配（**加了大括号就不一定了**）

```c
if ( code == READY )
    if ( count <20 ) {
        printf("一切正常\n");
    }else
        printf("继续等待\n"); //当code == READY时不再执行else,直接跳到return 0
return 0；
```

## 缩进

* 缩进格式不能暗示else的匹配
  
```C
if ( code == READY )
    if ( count <20 )
        printf("一切正常\n");
else
    printf("继续等待\n"); //else和最近的if匹配
```

## 嵌套的if

```c  
if( gameover == 0 )  
    if ( player2move == 2 )
        printf("Your turn\n");
    else    //对应第二个if
        printf("My turn\n");
else //对应第一个if
printf("GAME OVER\n");
```

## 级联的if-else if

* 所有else对齐——级联——书写整洁

```c
if ( exp1 )
st1;
else if ( exp2 ) //对应第一个if
st2;
else //对应第二个if
```

![11](https://raw.githubusercontent.com/thaoranpicture/picture/master/pictures/%E5%8D%95%E4%B8%80%E5%87%BA%E5%8F%A3.png)  

* 左边为单一出口更好，右边将输出写死了  fffffffff
