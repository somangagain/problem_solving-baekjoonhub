#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int M = -1;
    int X = -1;
    int Y = -1;

    for (int y = 1; y <= 9; y++) {
        for (int x = 1; x <= 9; x++) {
            int t; cin >> t;
            if (t > M) {
                X = x; Y = y;
                M = t;
            }
        }
    }

    cout << M << '\n' << Y << ' ' << X;

    return 0;
}