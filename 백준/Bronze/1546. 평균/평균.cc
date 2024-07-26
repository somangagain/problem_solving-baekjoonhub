#include <bits/stdc++.h>

using namespace std;

int N, M;
double S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;

    vector<int> V;
    for (int i = 0; i < N; i++) {
        int x; cin >> x; V.push_back(x);
        M = max(M, x);
        S += x;
    }

    S *= 100;
    S /= M * N;

    cout << fixed; cout.precision(3);
    cout << S;

    return 0;
}