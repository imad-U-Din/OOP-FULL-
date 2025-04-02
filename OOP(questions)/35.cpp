// Assignment 10: Nested Control Statements with Arrays
// Write a program to find all subsets of an array whose sum equals a given target value.
// • Input: Array of integers and a target sum.
// • Output: All subsets (in any order) that sum up to the target.
// For example:
// Input: [2, 3, 5], Target = 5
// Output: [2, 3] and [5]



#include <iostream>
using namespace std;

void findSubsets(int arr[], int n, int target) {
    int totalSubsets = 1 << n; // 2^n subsets

    for (int i = 0; i < totalSubsets; i++) {
        int sum = 0;
        bool firstElement = true;

        // Calculate sum of this subset
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // If bit is set, include element
                sum += arr[j];
            }
        }

        // Print subset only if it matches the target sum
        if (sum == target) {
            cout << "{ ";
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) { // Print the elements in the subset
                    if (!firstElement) cout << ", ";
                    cout << arr[j];
                    firstElement = false;
                }
            }
            cout << " }" << endl;
        }
    }
}

int main() {
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Subsets with sum " << target << ":\n";
    findSubsets(arr, n, target);

    return 0;
}
