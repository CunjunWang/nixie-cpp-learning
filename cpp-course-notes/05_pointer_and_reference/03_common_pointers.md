# 常见C++原始指针

## 一般类型指针
T泛指任何的类型
```
int i = 4;
int* iP = &i;
cout << (*iP) << endl;

double d = 3.14;
double* dP = &d;
cout << (*dP) << end;

char c = 'a';
char* cP = &c;
cout << (*cP) << endl;
```

## 指针的数组和数组的指针
指针的数组 array of pointers
```
T* t[]
```

数组的指针 the pointer to an array
```
T (*t) []
```

- `int* a[4]`: 指针的数组. `a`是一个数组, 包含4个元素, 每一个元素都是一个`int`指针.
- `int (*b)[4]`: 数组的指针. `b`是一个指针, 指向一个数组, 包含4个元素, 每个元素都是`int`