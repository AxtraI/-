#include <iostream>
using namespace std;

int main() {
    int x, y, a, b, c, d;
    cin >> x >> y >> a >> b >>c >> d;
    if (x >= c && x >= a && c >= a && d >= b && y <= d) {
        cout << " ( " << x << " " << y << " ) " <<
            "( " << a << " " << b << " )" << " ( " << c << " " << d << " ) ";
    }
    else if (x >= c && x >= a && a >= c && b >= d && y <= b) {
        cout << " ( " << x << " " << y << " ) " <<
            "( " << c << " " << d << " )" << " ( " << a << " " << b << " ) ";
    }
    else if (c >= a && c >= x && x >= a && y >= b && d <= y) {
        cout << " ( " << c << " " << d << " ) " <<
            "( " << a << " " << b << " )" << " ( " << x << " " << y << " ) ";
    }
    else if (c >= x && c >= a && a >= x && b >= y && d <= b) {
        cout << " ( " << c << " " << d << " ) " <<
            "( " << x << " " << y << " )" << " ( " << a << " " << b << " ) ";
    }
    else if (a >= c && a >= x && c >= x && d >= y && b <= d) {
        cout << " ( " << a << " " << b << " ) " <<
            "( " << x << " " << y << " )" << " ( " << c << " " << d << " ) ";
    }
    else if (a >= c && a >= x && x >= c && y >= d && b <= y) {
        cout << " ( " << a << " " << b << " ) " <<
            "( " << c << " " << d << " )" << " ( " << x << " " << y << " ) ";
    }

    return 0;
}