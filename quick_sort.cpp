#include <iostream>
#include <vector>
#include <ctime>

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        
        std::swap(arr[i + 1], arr[high]);
        
        int pIndex = i + 1;
        
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main() {
    std::vector<int> smallDataset = {4, 2, 7, 1, 9, 5, 3, 8, 6};
    std::vector<int> mediumDataset;
    std::vector<int> largeDataset;
    
    // Generate medium and large datasets
    srand(time(NULL));
    
    for (int i = 0; i < 10000; i++) {
        mediumDataset.push_back(rand() % 10000);
    }
    
    for (int i = 0; i < 1000000; i++) {
        largeDataset.push_back(rand() % 1000000);
    }
    
    // Sort small dataset
    std::cout << "Before sorting small dataset:" << std::endl;
    for (int num : smallDataset) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    quickSort(smallDataset, 0, smallDataset.size() - 1);
    
    std::cout << "After sorting small dataset:" << std::endl;
    for (int num : smallDataset) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
