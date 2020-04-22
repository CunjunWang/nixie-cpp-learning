# C++关键字和标识符
## 标识符
- C++中标识符是用来标识变量、函数、类、模块, 或其他任何用户自定义的项目的名字.
- 一个标识符以字母`A-Z`或`a-z`或下划线`_`开始, 后跟零个或多个字母、下划线和数字`0-9`;
    - 正则: `[_A-Za-z][_A-Za-z0-9]*`
    - Eg: `button_email1`
- 一个标识符不允许以数字开头.
- 一个标识符内不允许出现标点字符, 比如@, &, %.
- 大小写不能混淆. C++是区分大小写的语言.
- 不能使用C++关键字. 原则上长度不允许超过32位.

## 关键字
### C++常见预留关键字表
|||||
|---|---|---|---|
|asm|else|new|this|
|auto|enum|operator|throw|
|bool|explicit|private|true|
|break|export|protected|try|
|case|extern|public|typedef|
|catch|false|register|typeid|
|char|float|reinterpret_cast|typename|
|class|for|return|union|
|const|friend|short|unsigned|
|const_cast|goto|signed|using|
|continue|if|sizeof|virtual|
|default|inline|static|void|
|delete|int|static_cast|volatile|
|do|long|struct|wchar_t|
|double|mutable|switch|while|
|dynamic_cast|namespace|template| |

- 关键字表会随着C++标准的演变会不断更新.
- 参考: https://en.cppreference.com/w/cpp/keyword

## 起名建议
- 不要试图发明最好的命名规则. 应当制定一个让大部分成员满足的命名规则, 并且在项目中贯彻执行.
- 标识符应该直观, 可以望文知意. 尽量使用英语单词组合的方式, 不要使用拼音.
- 标识符长度应当符合`min-length && max-information`原则, 不是越长越好.
- 变量名字尽量使用名词或形容词+名词. 如`value`或者`newValue`. 避免使用数字. 
- 函数名可以用动词+名词, 如`DrawGraph`.
- 有些著名的规则可以参考. 如微软的匈牙利命名法, 驼峰式命名(CamelCase), 或Pascal命名法.
    - 匈牙利命名法: 开头字母用变量类型的缩写, 其余部分用变量的英文或英文缩写. 要求单词第一个字母必须大写.
        - `int iMyAge;`
    - 驼峰式命名法: 第一个单词首字母小写, 后面其他单词首字母大写.
        - `int myAge;`
    - Pascal命名法: 每个单词的第一个字母都大写.
        - `int MyAge;`
        
