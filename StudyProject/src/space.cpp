#include "../include/space.h"

namespace Space {
    int value = 42;

    void printValue() {
        std::cout << "value = " << value << std::endl;
    }

    void print() {
        // c 风格
        printf("Hello World\n");

        // c++ 风格
        std::cout << "Hello World" << std::endl;

        using namespace std;
        cout << "Hello World" << endl;
    }

    void clearScreen() {
#if defined(_WIN32) || defined(_WIN64)
        system("cls");
#else
        system("clear");
#endif
    }
}
