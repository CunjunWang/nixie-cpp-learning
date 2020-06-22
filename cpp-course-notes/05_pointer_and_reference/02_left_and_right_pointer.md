# 左值和右值

## 数组和指针
```
int main() {
    // 定义一个数组
    char strHelloWorld[] = {"helloworld"};
    char* pStrHelloWorld = "helloworld";
    
    pStrHelloWorld = strHelloWorld;  // 指针变量的值允许改变
    strHelloWorld = pStrHelloWorld;  // 会报错, 数组变量的值不允许改变

    return 0;
}
```
解决办法:
1. 用字符指针替代字符数组
2. 使用`strcpy`对数组赋值
3. 使用`string`

### 为什么会报错?
因为字符数组并没有被分配一块内存空间, 而是直接指到了`"helloworld"`这个字符串常量.

数组是由若干独立的数组元素组成的, 这些元素不能作为一个整体被赋值.


## 指针声明和数组声明的区别
### 第一大类
`char *a;` 这一行中编译器做的事情是, 它知道有一个变量`a`可能需要放在栈上; 假如后面需要取变量`a`的地址, 那么编译器就被迫使`a`占用栈空间;
而假如编译器决定使`a`不占用栈空间就要给`a`在它需要保持值的期间保留一个寄存器. 在执行时计算机不为此做任何事情.

`a = "abcde";` 这一行中编译器做的事情是它知道有这么一个匿名数组"abcde", 它需要把匿名数组保存到目标文件中, 并且生成一个指令, 把匿名数组在
运行时的首地址赋值给变量`a`. 具体赋值给了一段内存还是给了一个寄存器这要看`a`是不是在栈上占有空间, 并且有必要即刻将`a`的值更新(否则可以在晚
一些更新这个值, 又或者`a`的值此后再也没被使用那么这个操作就可以被彻底优化掉). 在执行时这一句就表现为在寄存器间或者在寄存器与内存间移动数据.

`*a = 'A'`之所以会在运行时发发生错误, 是因为匿名数组所在的存储空间是不可写的. 

```
char a[];
a = "abcde";
```
以上是不合法的. 首先, 声明数组时如果没有给变量初始化就必须指明数组的长度. 其次, 即使改成
```
char a[6];
a = "abcde";
```
也是不合法的, 这是因为你不能将指针值赋给一个数组. 或者用一个更简单的说法: 类型不同, 并且不存在一个隐式转换使得`char*`被转换成`char[6]`.

### 第二大类
```
char a[] = "abcde";
char *b = "abcde";
```
这2行的区别要归结于`char[6]`类型的初始化器与`char*`类型的初始化器的差别.

`char`数组的初始化器会将匿名数组的内容复制到对象所处的空间中, 而`char*`的初始化器会将匿名数组的首地址赋值给对象

### 第三大类
```
char *a, *b;
a = "abcde"; 
b = "abcde";
```
`a`和`b`的值不一定相同, 这取决于编译器的行为. 但是在第二大类中数组`a`的首地址一定和`b`保存着的地址不同, 这是因为
第二大类中`a`所处的空间是可写的也就是说数组`a`的首地址是可写的, `char`数组初始化器必须把匿名数组的位于只读空间的内容
复制到`a`所处的可写的空间; 与此同时`b`保存的是匿名数组的首地址, 换句话说保存的是一个只读的地址, 这个地址当然就不同于
数组`a`的首地址

### 第四大类
```
char a[6]
```
或
```
char a[] = "abcde";
```
这句话是否正确? 当`a`作为右值(rvalue)时，其类型为`char*`; 而当`a`作为左值(lvalue)时, 其类型就是`char[6`.

这句话是错误的. 从`char[6]`到`char*`有一个隐式转换, 这并不意味着`a`会有飘忽不定的类型. 例如`char`总是能隐式转换到`int`,
说`char`类型的变量有时候具有类型`int`显然是错误的.

```
char a[] = "abcde";
char *b;
b = a;
```
合法. 原理如前所述, `char[]`可以隐式转换成`char*`. 

```
char *a = "abcde";
char b[6];
b = a;
```
不合法. 如前所述, 不存在一个隐式转换使得`char*`被转换成`char[]`. 

```
char a[] = "abcde";
char b[6];
b = a;
```
不合法. `char[]`类型的变量不能被赋值(具体来说, 所有数组都不能作为左值使用).


## 左值和右值
### 概念
- 左值: 编译器为其单独分配了一块存储空间, 是可以取其地址的, 左值可以放在赋值运算符的左边
- 右值: 指的是数据本身, 不能取到其自身地址, 右值只能在赋值运算符邮编
    - 编译器没有为右值分配单独的空间, 所以取不出地址

### 具体分析
左值最常见的情况如函数和数据成员的名字

右值是没有标识符, 不可以取地址的表达式, 一般也称为临时对象

例如: `a = b + c`
- `&a`是允许的操作
- `&(b+c)`无法通过编译
- `a`是一个左值, `(b+c)`是右值