#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}

int main() {
    std::vector<int> smallNums;
    std::vector<int> mediumNums;
    std::vector<int> largeNums;

    // Generate small dataset
    for (int i = 0; i < 1000; i++) {
        smallNums.push_back(rand() % 1000);
    }

    // Generate medium dataset
    for (int i = 0; i < 10000; i++) {
        mediumNums.push_back(rand() % 10000);
    }

    // Generate large dataset
    for (int i = 0; i < 1000000; i++) {
        largeNums.push_back(rand() % 1000000);
    }
