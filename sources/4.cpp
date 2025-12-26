#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double d = hypot(x1 - x2, y1 - y2);
    double diff = abs(r1 - r2);

    if (x1 == x2 && y1 == y2 && r1 == r2) {
        cout << -1;
        return 0;
    }

    if (d > r1 + r2)
        cout << 0;
    else if (d < diff)
        cout << 0;
    else if (d == r1 + r2 || d == diff)
        cout << 1;
    else
        cout << 2;
}
