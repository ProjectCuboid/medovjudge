#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x;

    y = x - (x*x + 4)/2 + x*x*x - 3/(x+7);
    cout << setprecision(3) << fixed << y;
}
