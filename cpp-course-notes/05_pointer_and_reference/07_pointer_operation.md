# 指针的基本运算

## `&`和`*`操作符
```
char ch = 'a';
char* cP = &ch;
```

取地址操作得到的是右值, 只能在赋值符号右侧竖线
- 左值是需要有一个具体可定位的存储区域的, 而右值不需要
- `&ch`左值非法的意思
    - 可以取出`ch`的地址, 但不会像`cP`变量那样有一个机制可以获取到这个值具体是什么, 因此不能做左值
- `&cP`左值非法的含义同上

<img src="images/lrvalue1.png" alt="lrvalue1" width="450">

<img src="images/lrvalue2.png" alt="lrvalue2" width="450">


## ++与--操作符
### 前置运算符
先变化cp的值, 然后把发生变化后cp的值存入cp2
```
char* cp2 = ++cp;
```
汇编代码:
```
003716E2 mov    eax, dword prt [cp]    // 把cp的信息移动到eax寄存器
003716E5 add    eax, 1                 // + 1 
003716E8 mov    dword prt [cp], eax    // 把eax的信息存回cp
003716EB mov    ecx, dword prt [cp]    // 把cp的信息移动到ecx寄存器
003716EE mov    dword ptr [cp2], ecx   // 由ecx把信息转存回cp2
```

### 后置运算符
先把cp的值存入cp3, 存的是cp变化之前的值, 然后改变cp的值
```
char* cp3 = cp++;
```
汇编代码:
```
003716F1 mov    eax, dword prt [cp]    // 把cp的信息移动到eax寄存器
003716F4 moc    dword ptr [cp3], eax   // 把eax的信息移动到cp3
003716F7 mov    ecx, dword prt [cp]    // 把cp的信息移动到ecx寄存器
003716E5 add    ecx, 1                 // ecx + 1 
003716FA mov    dword ptr [cp], ecx   // 由ecx把信息转存回cp
```

<img src="images/++lrvalue.png" alt="++lrvalue.png" width="400">

<img src="images/++*lrvalue.png" alt="++*lrvalue.png" width="400">


## ++++, ----运算符
编译器程序分解成符号的方法是: 一个字符一个字符读入, 如果该字符可能组成一个符号, 那么读入下一个字符,
一直到读入的字符不能再组成一个有意义的符号. 称为贪心法
```
int a = 1, b = 2, c, d;
c = a +++ b;  // 相当于a++ + b, c = 3
d = a ++++ b;  // 相当于a++ ++b, error
```

<img src="images/++*++lrvalue.png" alt="++*++lrvalue.png" width="400">

