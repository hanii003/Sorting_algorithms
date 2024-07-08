#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    vector<int> data = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    
    cout << "Before sorting:" << endl;
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;
    
    shellSort(data);
    
    cout << "After sorting:" << endl;
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
