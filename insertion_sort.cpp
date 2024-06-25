#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> nums = {5, 2, 9, 3, 6};
    
    insertionSort(nums);
    
    std::cout << "Sorted array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    
    return 0;
}
