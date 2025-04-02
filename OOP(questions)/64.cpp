// Assignment 7: Conversion Between Two Classes (Celsius & Fahrenheit)
// Define two classes Celsius and Fahrenheit and implement conversion functions to convert
// temperature between them using overloaded type conversion operators.


#include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
    float temp;

public:
    Celsius(float t = 0) : temp(t) {}

    float getTemp() {
        return temp;
    }

    operator Fahrenheit();
};

class Fahrenheit {
    float temp;

public:
    Fahrenheit(float t = 0) : temp(t) {}

    float getTemp() {
        return temp;
    }

    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main() {
    Celsius c(25);
    Fahrenheit f = c;
    cout << "25 C in Fahrenheit: " << f.getTemp() << " F" << endl;

    Fahrenheit f2(77);
    Celsius c2 = f2;
    cout << "77 F in Celsius: " << c2.getTemp() << " C" << endl;

    return 0;
}
