#include <iostream>
#include <vector>

template <typename T>
T square(T x) {
    return x * x;
}

template <typename T>
std::vector<T> square(const std::vector<T>& vec) {
    std::vector<T> result;
    for (const T& elem : vec) {
        result.push_back(elem * elem);
    }
    return result;
}

int main() {
    int num = 5;
    std::cout << "Square of " << num << ": " << square(num) << std::endl;

    std::vector<double> vec = { 1.1, 2.2, 3.3, 4.4 };
    std::cout << "Squares of elements in vector:";
    for (const double& elem : square(vec)) {
        std::cout << " " << elem;
    }
    std::cout << std::endl;

    return 0;
}