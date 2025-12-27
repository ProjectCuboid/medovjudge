#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long cw = 8; // nums without 7
    for (int i = 1; i < n; i++)
        cw *= 9;

    long long ac = 9; // all nums
    for (int i = 1; i < n; i++)
        ac *= 10;

    cout << ac-cw;
}
