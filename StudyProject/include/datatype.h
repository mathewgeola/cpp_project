#ifndef DATATYPE_H
#define DATATYPE_H
#include <iostream>


struct DataType {
    bool boolValue;
    char charValue;
    // mutable 修饰成员变量允许在 const 函数中被修改
    mutable int intValue;
    float floatValue;
    double doubleValue;

    // 静态成员函数（加 static）
    static void voidValue1() {
        std::cout << "voidValue1" << std::endl;
    };

    // 普通成员函数（不加 static） // const 修饰成员函数不能修改成员变量
    void voidValue2() const {
        std::cout << "voidValue2 intValue = " << intValue << std::endl;
        intValue++;
        // this 是一个指针
        std::cout << "voidValue2 intValue = " << this->intValue << std::endl;
    }

    void voidValue3() {
        std::cout << "voidValue2 doubleValue = " << doubleValue << std::endl;
        doubleValue++;
        std::cout << "voidValue2 doubleValue = " << doubleValue << std::endl;
    }

    void *voidPointer;
    wchar_t wcharValue;

    // 构造函数，成员初始化列表
    DataType(const bool b, const char c, const int i, float f, const double d, void *vp, const wchar_t w)
        : boolValue(b), charValue(c), intValue(i), floatValue(f), doubleValue(d), voidPointer(vp), wcharValue(w) {
        // 构造函数体可以空着或者做额外初始化
        f += 1;
    }

    // 无参构造函数，成员初始化列表赋默认值
    DataType()
        : boolValue(false),
          charValue('\0'),
          intValue(0),
          floatValue(0.0f),
          doubleValue(0.0),
          voidPointer(nullptr),
          wcharValue(L'\0') {
        // 构造函数体可以为空
    }
};


#endif //DATATYPE_H
