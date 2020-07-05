# const指针

## const pointer和pointer to const
关于`const`修饰的部分:
- 看左侧最近的部分
- 如果左侧没有, 就看右侧

```
char strHelloWorld[] = { "Helloworld" };
char const *pStr1 = "helloworld";
char* const pStr2 = "helloworld";
char const * const pStr3 = "helloworld";

pStr1 = strHelloworld;
// pStr2 = strHelloworld;  // pStr2不可修改
// pStr3 = strHelloworld;  // pStr3不可修改
```

指针之间的区别:
- `char const *pStr1`
    - `const`修饰的是`char`, 指针指向的地址是可变的, 但是指向的空间存储的内容是不可变的
- `char* const pStr2`
    - `const`修饰的是`char*`指针, `pStr2`指向的位置不允许发生变化
- `char const * const pStr3`
    - 指针指向的位置不可变, 指针指向位置存储的内容也不可变
- `const char * pStr4`
    - 和`char const *pStr1`是等价的