#include <bits/stdc++.h>

using namespace std;

int N, A[302], DP[302];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // input
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    // solution
    DP[0] = 0;
    DP[1] = A[1];
    DP[2] = A[1] + A[2];

    for (int i = 3; i <= N; i++) {
        DP[i] = A[i] + max(DP[i - 2], DP[i - 3] + A[i - 1]);
    }

    // output
    cout << DP[N];

    return 0;
}