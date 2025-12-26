#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long c = 9;
    for (int i = 1; i < n; i++)
        c *= 10;

    cout << (c+1)/2;
}
