#include "../include/main.h"


void testNameSpace() {
    using namespace Space;

    clearScreen();

    printValue();

    print();

    std::cout << std::endl;
}

void testModifier() {
    // signed int 默认有符号
    signed int x = -10;
    std::cout << "signed int x = " << x << std::endl;

    // unsigned int 无符号，只能存非负数
    unsigned int y = 10;
    std::cout << "unsigned int y = " << y << std::endl;

    // short int 占用较小空间，范围更小
    short int z = 100;
    std::cout << "short int z = " << z << std::endl;

    // long int 占用更大空间，范围更大
    long int a = 100000L;
    std::cout << "long int a = " << a << std::endl;

    // const 常量，不能修改
    const int b = 5;
    std::cout << "const int b = " << b << std::endl;
    // b = 6; // 编译错误，不能修改常量

    // volatile 变量，防止编译器优化（多线程或硬件寄存器等场景）
    volatile int c = 10;
    std::cout << "volatile int c = " << c << std::endl;

    class Demo {
    public:
        // mutable 允许在 const 对象中修改
        mutable int counter;

        Demo() : counter(0) {
        }

        void increment() const {
            counter++; // const 函数里可以修改 mutable 变量
        }

        void printCounter() const {
            std::cout << "counter = " << counter << std::endl;
        }
    };

    // 演示 mutable
    const Demo demoObj;
    demoObj.printCounter(); // 0
    demoObj.increment(); // 修改 mutable 成员
    demoObj.printCounter(); // 1

    std::cout << std::endl;
}


void testStruct() {
    DataType::voidValue1();

    // 创建一个常量对象，它的成员变量不能被修改（除了 mutable 修饰的成员变量例外）
    // 只能调用const成员函数，不能调用非 const 成员函数
    const DataType dataType1;
    dataType1.voidValue2();
    dataType1.intValue = 6;
    dataType1.voidValue2();

    DataType dataType2;
    dataType2.voidValue3();

    wchar_t wchar_tValue = L'你';
    short int short_intValue = L'我';

    char charValue = 'a';

    std::cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << std::endl;
    std::cout << "sizeof(short int) = " << sizeof(short int) << std::endl;
    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;

    // 设置标准输出为 UTF-16 模式，支持宽字符输出
    _setmode(_fileno(stdout), _O_U16TEXT);

    std::wcout << L"dataType2.wcharValue = " << dataType2.wcharValue << std::endl;
    dataType2.wcharValue = L'你';
    std::wcout << L"dataType2.wcharValue = " << dataType2.wcharValue << std::endl;
}


int main() {
    testNameSpace();

    testModifier();

    testStruct();

    return 0;
}
