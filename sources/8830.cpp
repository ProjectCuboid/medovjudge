#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x;

    double a = x*x;
    y = sqrt(a*a + 1)/a - sqrt(a/(a+1));
    cout << setprecision(3) << fixed << y;
}
