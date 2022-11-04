#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, s, area;
    cout << "Enter sides of triangle: ";
    cin >> a >> b >> c;
    if ((a+b > c) && (a+c > b) && (c+b > a)) {
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << area;
    }
    else {
        cout << "Cannot form triangle";
    }
    return 0;
}
