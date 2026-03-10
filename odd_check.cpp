#include <iostream>
using namespace std;

bool isOdd(int x) {
    return x % 2 != 0;
}

int main() {
    cout << isOdd(7);
}