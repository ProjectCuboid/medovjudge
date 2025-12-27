#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x;

    y = (2*x - 1)/(x*x) + (sqrt(x*x + 1))/2;
    cout << setprecision(3) << fixed << y;
}
