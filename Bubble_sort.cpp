#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to perform bubble sort on a vector of integers
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    vector<int> smallNumericalDataset;
    vector<int> mediumNumericalDataset;
    vector<int> largeNumericalDataset;

    // Generate small numerical dataset
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        smallNumericalDataset.push_back(rand() % 1000);
    }

    // Generate medium numerical dataset
    for (int i = 0; i < 10000; i++) {
        mediumNumericalDataset.push_back(rand() % 100000);
    }

    // Generate large numerical dataset
    for (int i = 0; i < 1000000; i++) {
        largeNumericalDataset.push_back(rand() % 10000000);
    }

    // Sort the datasets using Bubble Sort
    bubbleSort(smallNumericalDataset);
    bubbleSort(mediumNumericalDataset);
    bubbleSort(largeNumericalDataset);

    return 0;
}
