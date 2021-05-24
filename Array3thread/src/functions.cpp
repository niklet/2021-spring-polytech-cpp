#include <iostream>
#include "thread"

int SumArray3(int *array, int len) {
    int len3 = len / 3;
    int Sum = 0;
    auto SumArray = [&](int *arr, int start, int end) {
        for (int i = start; i <= end; i++)
            Sum += array[i];
    };
    std::thread th1(SumArray, array, 0, len3);
    std::thread th2(SumArray, array, len3 + 1, len3 * 2);
    std::thread th3(SumArray, array, (len3 * 2) + 1, len - 1);
    th1.join();
    th2.join();
    th3.join();
    return Sum;
}
