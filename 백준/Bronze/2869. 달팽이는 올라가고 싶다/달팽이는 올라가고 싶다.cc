#include <bits/stdc++.h>

using namespace std;

long long A, B, V, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> V;
    S = 1 + (V - B - 1) / (A - B);

    cout << S;

    return 0;
}