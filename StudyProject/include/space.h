#ifndef MYSPACE_H
#define MYSPACE_H

#include <iostream>

namespace Space {
    extern int value;

    // 函数声明默认就是 extern
    void printValue();

    void print();

    extern void clearScreen();
}

#endif //MYSPACE_H
