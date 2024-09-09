#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int s = -1;
    if (c > b) {
        s = (a) / (c - b) + 1;
    }

    cout << s;

    return 0;
}