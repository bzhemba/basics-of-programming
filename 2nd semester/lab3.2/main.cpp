#include <iostream>
#include "TriangleClass.h"
int main() {
    TriangleClass tr1(3, 4, 5, {1, 0}, {2, 1}, {3, 4});
    TriangleClass tr2(8, 7, 4, {2, 0}, {1, 1}, {4, 3});
try {
    bool b = operator!=(tr1, tr2);
}
catch (std::runtime_error err) {
    std::cout << "Runtime_error: " << err.what() << std::endl;
}
}
