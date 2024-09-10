#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int S = 5;
    int N; cin >> N;
    for (int i = 2; i <= N; i++) {
        S = (S + 3 * (i - 1) + 4) % 45678;
    }

    cout << S;


    return 0;
}