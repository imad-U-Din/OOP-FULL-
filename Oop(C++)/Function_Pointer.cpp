#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcPtr)(int, int) = add;

    int result = funcPtr(5, 7);

    cout << "Sum: " << result << endl;

    return 0;
}
