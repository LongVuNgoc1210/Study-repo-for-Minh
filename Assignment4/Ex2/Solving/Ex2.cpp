#include<iostream>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b) {
    if (a == nullptr || b == nullptr) {
        std::cerr << "Error: Null pointer passed to swapByPointer." << std::endl;
        return;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
}
void findMinMax(int a, int b, int &min, int &max) {
    if (a < b) {
        min = a;
        max = b;
    } else if (a == b) {
        min = max = a;
    } else {
        min = b;
        max = a;
    }
}

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swapByValue(x, y);
    std::cout << "After swapByValue: x = " << x << ", y = " << y << std::endl;
    swapByReference(x, y);
    std::cout << "After swapByReference: x = " << x << ", y = " << y << std::endl;
    swapByPointer(&x, &y);
    std::cout << "After swapByPointer: x = " << x << ", y = " << y << std::endl;
    int min, max;
    findMinMax(x, y, min, max);
    std::cout << "Minimum: " << min << ", Maximum: " << max << std::endl;
    std::cout << "Is x even? " << (isEven(x) ? "Yes" : "No") << std::endl;
    std::cout << "Is y even? " << (isEven(y) ? "Yes" : "No") << std::endl;
}