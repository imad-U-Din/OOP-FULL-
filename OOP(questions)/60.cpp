// Assignment 3: Overloading the > Operator for Comparison
// Develop a class Box with attributes (length, width, height). Overload the > operator to
// compare two Box objects based on volume and print whether one is larger than the other.



#include <iostream>
using namespace std;

class Box {
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int volume() const {
        return length * width * height;
    }

    bool operator>(const Box& b) {
        return this->volume() > b.volume();
    }

    void display() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Box b1(3, 4, 5), b2(2, 6, 7);
    cout << "Box 1 ";
    b1.display();
    cout << "Box 2 ";
    b2.display();
    
    if (b1 > b2)
        cout << "Box 1 is larger." << endl;
    else
        cout << "Box 2 is larger." << endl;

    return 0;
}
