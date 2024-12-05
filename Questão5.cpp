#include <iostream>
using namespace std;

int main() {
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p; // x = 0
    x = 4; // x = 4
    (*p)++; // y = 1
    --x; // x = 3
    (*p) += x; // y = 1 + 3 = 4

    cout << "x = " << x << ", y = " << y << ", *p = " << *p << endl;
    return 0;
}
