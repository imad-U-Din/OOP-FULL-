// Design a class template by name Vector and perform the following:
// ● Find the smallest of the element in the Vector
// ● Search for an element in the Vector
// ● Find the average of the element in the array.



#include <iostream>
using namespace std;

// Template class for Vector
template <class T>
class Vector {
private:
    T *arr;
    int size;

public:
    // Constructor
    Vector(int s) {
        size = s;
        arr = new T[size];
    }

    // Destructor
    ~Vector() {
        delete[] arr;
    }

    // Function to input elements
    void inputElements() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to display elements
    void display() {
        cout << "Vector elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to find the smallest element
    T findSmallest() {
        T smallest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
        return smallest;
    }

    // Function to search for an element
    int searchElement(T key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i; // Return index of the element
            }
        }
        return -1; // Return -1 if not found
    }

    // Function to find the average
    double findAverage() {
        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return (double)sum / size;
    }
};

// Main function to test the template class
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create Vector of type int
    Vector<int> vec(n);
    vec.inputElements();
    vec.display();

    // Find smallest element
    cout << "Smallest element: " << vec.findSmallest() << endl;

    // Search for an element
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    int pos = vec.searchElement(key);
    if (pos != -1) {
        cout << "Element found at index: " << pos << endl;
    } else {
        cout << "Element not found.\n";
    }

    // Find average
    cout << "Average of elements: " << vec.findAverage() << endl;

    return 0;
}
