#include <bits/stdc++.h>

using namespace std;

int X, Y;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> X >> Y;
    if (X * Y > 0) cout << (X > 0 ? 1 : 3);
    else cout << (X > 0 ? 4 : 2);

    return 0;
}