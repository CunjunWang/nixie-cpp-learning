# RAII初步

RAII - Resource Acquisition Is Initialization

## C++的RAII
RAII是C++所特有的资源管理方式. 有少量其他语言如D, Rust也采纳了RAII, 但是在主流语言中, 
C++是唯一一个依赖RAII来做资源管理的

RAII依托栈和析构函数, 来对所有的资源, 包括堆内存在内进行资源管理. 对RAII的使用, 使得
C++不需要类似于Java那样的垃圾收集方法, 也能有效地对内存进行管理. RAII的存在, 也是垃圾
收集虽然理论上可以在C++使用, 但是从来没有流行过的原因

RAII有些比较成熟的智能指针代表, 如`std::auto_ptr`和`boost::shared_ptr`
