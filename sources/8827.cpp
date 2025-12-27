#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x;

    y = (x*x + 3*x - 4)/(2*x - 3) - (x+2)/(x*x - 5*x + 7);
    cout << setprecision(3) << fixed << y;
}
