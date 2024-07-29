#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> V;
    int m = 0;
    int s = 0;
    for (int i = 0; i < 9; i++) {
        int x; cin >> x; V.push_back(x);
        if (m < x) {
            s = i;
            m = x;
        }
    }

    cout << m << '\n' << (s+1);


    return 0;
}