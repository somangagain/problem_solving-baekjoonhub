#include <bits/stdc++.h>

using namespace std;

long long N, M, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    S = N - M;
    if (S < 0) S *= -1;
    cout << S;

    return 0;
}