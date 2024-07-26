#include <bits/stdc++.h>

using namespace std;

long long A, B, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B;
    S = A * A - B * B;

    cout << S;

    return 0;
}