#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x;

    double a = (sqrt(x*x + 1));
    y = 2*x / a - a / (x*x*x);
    cout << setprecision(3) << fixed << y;
}
