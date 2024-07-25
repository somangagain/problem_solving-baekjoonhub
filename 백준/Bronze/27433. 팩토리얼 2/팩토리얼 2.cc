#include <bits/stdc++.h>

using namespace std;

int N;
long long int S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // input
    cin >> N;

    // solution
    S = 1;
    for (int i = 1; i <= N; i++) {
        S *= i;
    }

    // output
    cout << S;

    return 0;
}