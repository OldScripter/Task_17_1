#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}


int main() {

    int a = 10;
    int b = 20;

    std::cout << "Before swapping: a = " << a << ", b = " << b << "\n";
    swap(&a, &b);
    std::cout << "After swapping: a = " << a << ", b = " << b << "\n";

    return 0;
}
