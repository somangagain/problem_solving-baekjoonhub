#include <bits/stdc++.h>

using namespace std;

int A, B, C, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    // input
    cin >> A >> B >> C;

    // solution
    S = (3 * B * C) / A;

    // output
    cout << S;

    return 0;
}