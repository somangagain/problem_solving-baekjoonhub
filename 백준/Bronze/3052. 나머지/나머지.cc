#include <bits/stdc++.h>

using namespace std;

int A[42];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 10; i++) {
        int x; cin >> x;
        A[x % 42]++;
    }

    int S = 0;
    for (int i = 0; i < 42; i++) S += (A[i] ? 1 : 0);

    cout << S;

    return 0;
}