#include <iostream>
#include <conio.h>
#include <stdarg.h>

using namespace std;

template <typename T, size_t N>
void printArray(const T(&arr)[N]) {
    for (const auto& element : arr)
        cout << element << " ";
    cout << endl;
}

template <typename T, size_t N>
void quickSort(T(&arr)[N], int low, int high) {
    if (low < high) {
        T pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

template <typename... Args>
void sortNumbers(Args&&... args) {
    constexpr size_t size = sizeof...(args);
    int numbers[size] = { forward<Args>(args)... };

    quickSort(numbers, 0, size - 1);

    cout << "Sorted numbers: ";
    printArray(numbers);
}

int main() {
    cout << "Sorting numbers using QuickSort algorithm" << endl;

    sortNumbers(5, 2, 8, 1, 7, 3, -1);

    cin.get();
    return 0;
}
