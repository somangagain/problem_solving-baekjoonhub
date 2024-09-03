#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    string s; getline(cin, s);
    for (int i = 1; i <= t; i++)
    {
        getline(cin, s);
        cout << i << ". " << s << '\n';
    }

    return 0;
}