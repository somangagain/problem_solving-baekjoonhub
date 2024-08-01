#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    
    int S = n / 5 + n / 25 + n / 125;
    cout << S;

    return 0;
}