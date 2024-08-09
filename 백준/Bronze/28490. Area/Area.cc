#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int s = 0;
    while (t--) {
        int a, b; cin >> a >> b;
        if (s < a * b) {
            s = a * b;
        }
    }
    
    cout << s;
    
    return 0;
}