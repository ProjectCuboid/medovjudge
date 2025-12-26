#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long c = 5;
    for (int i = 1; i < n; i++)
        c *= 5;

    cout << c;
}
