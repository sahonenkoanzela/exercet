#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int sum = std::reduce(vec.begin(), vec.end());

    std::cout << "Sum of all elements: " << sum << std::endl;

    return 0;
}
