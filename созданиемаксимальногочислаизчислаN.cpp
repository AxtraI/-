#include <iostream>
#include <sstream>
using namespace std;

int main() {
    long long n;
    stringstream s;

    cin >> n;
    for (int i = 9; i >= 0; i--) {
        int a = n;
        for (; a; a /= 10)
            if (a % 10 == i)
                s << i;
    }
    s >> n;
    cout << n;
    system("pause");
    return 0;
}