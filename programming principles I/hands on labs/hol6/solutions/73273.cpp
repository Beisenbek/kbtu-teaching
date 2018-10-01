#include <iostream>
using namespace std;

bool isPrime(int x) { // bolean function

    for (int i = 2; i < x; ++ i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int x;
    cin >> x;
    if (isPrime(x)) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}