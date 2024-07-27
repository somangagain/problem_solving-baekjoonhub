#include <bits/stdc++.h>

using namespace std;

long long A, B, V, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> V;
    S = 1 + (V - A) / (A - B) + ((V - A) % (A - B) ? 1 : 0);

    cout << S;

    return 0;
}