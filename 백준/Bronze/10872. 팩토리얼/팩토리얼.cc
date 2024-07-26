#include <bits/stdc++.h>

using namespace std;

int N;
long long S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    S = 1;
    for (int i = 2; i <= N; i++) {
        S *= i;
    }

    cout << S;

    return 0;
}