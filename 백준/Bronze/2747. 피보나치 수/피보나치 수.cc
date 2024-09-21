#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

long long int DP[46];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long int n; cin >> n;    
    DP[1] = 1; DP[2] = 1;
    for (long long int i = 3; i <= n; i++) {
        DP[i] = DP[i - 1] + DP[i - 2];
    }

    cout << DP[n];

    return 0;
}