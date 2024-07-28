#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    int level = 0;
    int coverage = 1;

    while (coverage < N) {
        level++;
        coverage += level * 6;
    }

    int S = level + 1;

    cout << S;

    return 0;
}