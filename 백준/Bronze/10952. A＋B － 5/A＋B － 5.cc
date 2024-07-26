#include <bits/stdc++.h>

using namespace std;

int A, B;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (1) {
        cin >> A >> B;
        if (A == 0) break;
        cout << (A + B) << '\n';
    }

    return 0;
}