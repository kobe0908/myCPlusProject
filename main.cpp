#include <iostream>

int main() {
    int a = 5, b = 7;

    // Lambda 表达式求和
    auto sum = [](int x, int y) -> int {
        return x + y;
    };
    std::cout << "Sum: " << sum(a, b) << std::endl;    
    return 0;
}
