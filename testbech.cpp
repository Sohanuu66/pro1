// testbench.cpp
#include <iostream>
#include "bubble_sort.h"

int main() {
    int testArray[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(testArray)/sizeof(testArray[0]);

    std::cout << "Original array:\n";
    printArray(testArray, size);

    bubbleSort(testArray, size);

    std::cout << "Sorted array:\n";
    printArray(testArray, size);

    return 0;
}
