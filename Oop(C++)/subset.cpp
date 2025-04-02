#include <iostream>
using namespace std;

void findSubsets(int arr[], int n, int target, int index, int currentSubset[], int currentSize) {
    if (target == 0) {
        cout << "[";
        for (int i = 0; i < currentSize; i++) {
            cout << currentSubset[i];
            if (i != currentSize - 1) cout << ", ";
        }
        cout << "]" << endl;
        return;
    }

    if (index == n || target < 0) {
        return;
    }

    currentSubset[currentSize] = arr[index];
    findSubsets(arr, n, target - arr[index], index + 1, currentSubset, currentSize + 1);

    findSubsets(arr, n, target, index + 1, currentSubset, currentSize);
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    int currentSubset[n]; 
    cout << "Subsets whose sum equals " << target << " are:" << endl;
    findSubsets(arr, n, target, 0, currentSubset, 0);

    return 0;
}
