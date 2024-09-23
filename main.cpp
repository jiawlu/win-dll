#include <iostream>

#ifdef _WIN32
#define C_API __declspec(dllexport)
#else
#define C_API
#endif

extern "C" {

C_API void testPrint() {
    std::cout << "hello\n";
}

}