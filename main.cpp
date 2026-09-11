#include <iostream>
using namespace std;

// Bug 1: Division by zero
int divide(int a, int b) {
    return a / b;
}

int main() {

    // Bug 2: Array out of bounds
    int numbers[] = {10, 20, 30};

    for (int i = 0; i <= 3; i++) {
        cout << numbers[i] << endl;
    }

    cout << "Division result: " << divide(10, 0) << endl;

    return 0;
}
