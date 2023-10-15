#include <iostream>

int findSmallest(int arr[], int size) {
    int smallest = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
    }

    return smallest;
}

int main() {
    int arr[] = {12, 45, 1, 78, 5, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallest(arr, size);

    std::cout << "The smallest element in the array is: " << smallest << std::endl;

    return 0;
}
