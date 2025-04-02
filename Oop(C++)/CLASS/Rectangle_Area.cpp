#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Setter functions
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }

    // Getter functions
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle;
    double l, w;
    cout << "Enter length of the rectangle: ";
    cin >> l ;
    cout<<"Enter Width of the rectangle: ";
    cin>> w;
    
    myRectangle.setLength(l);
    myRectangle.setWidth(w);
    
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;
    
    return 0;
}
