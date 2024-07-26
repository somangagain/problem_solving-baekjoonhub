#include <bits/stdc++.h>

using namespace std;

int N, X, T;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> X;

    while (N--) {
        cin >> T;
        if (T < X) cout << T << ' ';
    }

    return 0;
}