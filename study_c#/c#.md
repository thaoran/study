# c#学习
## 面向对象
* object = Entity = Attributes + Services 
## .Net 和 c# 
* c#语言可以通过.NET平台来编写 部署 运行 .NET 应用程序  
* .NET 平台的重要组成  
> 1.FCL - 框架类库 微软事先定义好的类的集合  
> 2.CLR - 公共语言运行时 创建 部署 运行 .NET程序的必备环境 
* .NET是一个跨语言的平台 mono
* c#跨平台 
## vs使用技巧 
* 解决方案是用来管理项目的 （一个解决方案可以有多个项目）
* F5: 将解决方案下的所有的项目编译成程序集并运行程序集 
* F6: 将解决方案下的所有的项目编译成程序集程序的入口是 
* main 函数 
> Console.ReadKey()； 当程序运行到这句代码的时候程序会暂停．当按下键盘上的任意一个键的时候程序继续运行
* 定义代码段快速输入 
> cw = Console.WriteLine 
* 文档注释 /// 
```c#
        /// <summary>
        /// 
        /// </summary>
        /// <param name="args"></param>
```  
* 快捷键 
>CTRL+J - 从断掉的单词继续提示   
>CTRL+K+D - 代码对齐  
>CTRL+k+C - 注释所选代码  
>CTRL+K+U - 取消注释  
>快速对齐  删掉大括号再打上   
* 代码折叠  
```c#
#region  说明  

#endregion  
```  
## 变量&变量类型  
* float and double  

| 类型    | 精度                      |
| ------- | ------------------------- |
| float   | 32位浮点值精度7位         |
| double  | 32位浮点值精度15到16位    |
| decimal | 精度高范围小表示128位数据 |


> 默认情况下，赋值运算符右侧的实数被视为double  
> 对float类型赋值时右边要使用后缀f或F初始化浮点型变量  
> 对decimal类型赋值时右边要使用后缀m或M初始化浮点型变量  
```C#
float x = 3.5F;
decimal money = 300.5m;
```
### 字符串  
>char ch = 'x'; 有且只能有一个,不能为空
>string str = "xxxxxx";  可为空  
## 变量使用规则和命名规范  
* 1*. 先声明。2.再赋值。3.再使用。  
### 命名规则  
> 1.首字符以字母/@/_/开始  
> 2.不可用系统关键字  
### 命名规范  
> camel命名法：首单词首字母小写，后单词首字母大写,多用于简单变量  
> Pascal命名法：单词首字母大写  
### 变量的作用范围  
> 从离他最近的上面的大括号{ 到此大括号结束为止  
## 赋值运算符  
### 符合赋值运算符   
```  
+= /= -= *= %=
```
> +可用于字符串组合  
> +号任意一边有字符串则只起到拼接字符串的作用 
```c#  
        string name = "xiaoming";
        float from = 4.5f;
        string str = "我叫" + name + "，我来自" + from;
        Console.WriteLine(str);
        Console.ReadKey();
```  
## 算术运算符  
### 运算先后顺序  
> 先一元后二元；先乘除后加减；先括号内再括号外。  
### ++和--  
* ++ -- 放在变量的左右一样，**但在表达式中会有变化**。
> ++在左_++x_先自增后返回  
> ++在右_x++_先返回后自增  
```c#  
 int x = 8,y = 8,z,w; 
 z = x++;  // z=8,x=9
 w = ++y;  // w=9,y=9
 ```  
## 关系运算符和逻辑运算符  
### 逻辑运算结果为bool值，true和false  
>  逻辑与 &&  
>  逻辑或 ||  
>  逻辑非 ！
```c#  
bool b = x>90 && y>90 && z>90;
```
## 占位符&转义符  
* 拼接字符串的方式：+号，占位符。  
### 占位符  
* {n},n必须从0开始
```c# 
        string name = "xiaoming";
        float from = 4.5f;
        string str = string.Format("我叫{0}，我来自{1}",name,from);
        Console.WriteLine(str);
        Console.ReadKey();
```  
> 占位符可以少占多填，不能多占少填 
### 转义符  \和@
* 在符号前面加 \
```c#  
        string str = "\"I'm Lucy.\"";
        Console.WriteLine(str);
        // "I'm Lucy."
        char c = '\'';
        string str = "\\"; 
        // 输出\
```
* 常用  
> \t TAB键  
> \b 退格  
> \f 换页  输出向上的箭头
> \n 换行  
> \r 回车 
* @的作用  
1. 取消 \ 转义符 
2. 使用系统关键字  
3. 加在字符串前面可以显示实际格式，字符串能够跨越行数
```c#  
            string @string = @"
                    1 
                    2 
                3
                        4";
            Console.WriteLine(@string); 
```  

