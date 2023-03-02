#include <iostream>
using namespace std;
int main() {
    const int c1 = 42;  // эта константа известна в compile time
    int x;
    std::cin >> x;
    const int c2 = 2 * x;  // значение становится известным только в runtime
    int a[c2];
}