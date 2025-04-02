#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}

    // Overloading the > operator for volume comparison
    bool operator>(const Box &b) {
        return (length * width * height) > (b.length * b.width * b.height);
    }

    void display() {
        cout << "Box Dimensions: " << length << "x" << width << "x" << height << endl;
    }
};

int main() {
    Box b1(3, 4, 5);
    Box b2(2, 6, 4);
    
    cout << "Comparing Boxes: " << endl;
    b1.display();
    b2.display();
    
    if (b1 > b2) {
        cout << "Box 1 is larger than Box 2." << endl;
    } else {
        cout << "Box 2 is larger than or equal to Box 1." << endl;
    }
    
    return 0;
}
