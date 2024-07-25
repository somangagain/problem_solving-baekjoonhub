#include <bits/stdc++.h>

using namespace std;

int S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // input
    for (int i = 0; i < 6; i++) {
        int x; cin >> x; S += x;
    }

    // solution
    S *= 5;

    // output
    cout << S;

    return 0;
}