#include <iostream>
using namespace std;

auto add(int a) {
    return [a](int b) {
        return [a, b](int c) {
            return a + b + c;
        };
    };
}

int main() {
    cout << add(1)(2)(3) << endl; // 6
}


//====