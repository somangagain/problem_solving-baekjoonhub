#include <bits/stdc++.h>

using namespace std;

int DP[1001];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    DP[1] = 1;
    DP[2] = DP[1] + 2;
    for (int i = 3; i <= 1000; i++) {
        DP[i] = (DP[i - 1] + DP[i - 2] * 2) % 10007;
    }

    int n; cin >> n; 
    cout << DP[n];

    return 0;
}