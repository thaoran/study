# c����

## ע��

����:����`//`  
���У��� `/*  */`
Ҳ��������һ���ڵ�ע��  
`int ak=47 /* 36 */,y=9,`

## �ж�

### �жϣ�if���

```c
#include<stdio.h>
#include<stdlib.h>
int hour1,hour2;
int minutes1,minutes2;
int main()
{
    printf("��������ʱ��\n");
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
    printf("%dСʱ%d��\n",ih,im);
    system("pause");
    return 0;
}
```

## �жϵ���������ϵ����

### ��ϵ�����  

����� | ����
:----:|:---:
= = | ���
!= | �����
|> | ����
|>= | ���ڻ����
< | С��
<= | С�ڻ����

### ��ϵ����Ľ��

* ������ֵ�Ĺ�ϵ���Ϲ�ϵ�������Ԥ��ʱ����ϵ����Ľ��Ϊ����1������Ϊ����0

> printf("%d\n"5==3);

### ��ϵ��������ȼ�  

* ���еĹ�ϵ����������ȼ�����������ĵ�  
* �ȸ�ֵ����ĸ�

> 7 >= 3 + 4;����3+4����  
> int r = a>0;  

* �����ж��Ƿ���ȵ� == �� != �����ȼ��������ĵͣ��������Ĺ�ϵ�����Ǵ����ҽ��е�  

> 5>3==6>4  
> 6>5>4  

## ���������

```c
// ��ʼ��  
int price = 0;
// �������Ʊ��  
printf("�������");  
scanf("%d",&price);
printf("������Ʊ�棺");  
scanf("%d",&bill);
// ��������  
if ( bill >= price) {
    printf("Ӧ��������%d\n",bill - price);
} else {
    printf("���Ǯ����\n");
}
```

## if�����̽

* if�����һ�н�����ʱ��û�б�ʾ�������ġ�;��,������ĸ�ֵ���д��if����һ��,����������,����һ�н�����ʱ����һ����ʾ�������ġ�;���������������ֵ�����if����һ����,if���ӵ�кͿ���������ֵ���,�������Ƿ�Ҫ��ִ�С�

```c
if ( total > amount );
    total += amount+10;
```

## ��֧  

### Ƕ�׵��ж�

* ��if��������?����߲���?���ʱ��Ҫִ?�е����Ҳ������?һ��if��if-else��䣬�����Ƕ�׵�if���

```C
if ( code == READY )
    if ( count <20 )
        printf("һ������\n");
    else
        printf("�����ȴ�\n"); //else�������ifƥ��
```

## else��ƥ��

* else���Ǻ�**���**���Ǹ�ifƥ�䣨**���˴����žͲ�һ����**��

```c
if ( code == READY )
    if ( count <20 ) {
        printf("һ������\n");
    }else
        printf("�����ȴ�\n"); //��code == READYʱ����ִ��else,ֱ������return 0
return 0��
```

## ����

* ������ʽ���ܰ�ʾelse��ƥ��
  
```C
if ( code == READY )
    if ( count <20 )
        printf("һ������\n");
else
    printf("�����ȴ�\n"); //else�������ifƥ��
```

## Ƕ�׵�if

```c  
if( gameover == 0 )  
    if ( player2move == 2 )
        printf("Your turn\n");
    else    //��Ӧ�ڶ���if
        printf("My turn\n");
else //��Ӧ��һ��if
printf("GAME OVER\n");
```

## ������if-else if

* ����else���롪������������д����

```c
if ( exp1 )
st1;
else if ( exp2 ) //��Ӧ��һ��if
st2;
else //��Ӧ�ڶ���if
```

![11](https://raw.githubusercontent.com/thaoranpicture/picture/master/pictures/%E5%8D%95%E4%B8%80%E5%87%BA%E5%8F%A3.png)  

* ���Ϊ��һ���ڸ��ã��ұ߽����д����  fffffffff
