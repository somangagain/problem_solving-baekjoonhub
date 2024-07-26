#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    vector<int> V;
    for (int i = 0; i < 28; i++) {
        int x; cin >> x; V.push_back(x);
    }

    sort(V.begin(), V.end());

    int n = 1;
    vector<int> S;
    for (int i = 0; i < V.size(); i++) {
        while (V[i] != n) {
            S.push_back(n);
            n++;
        }
        n++;
    }

    while (n < 31) {
        S.push_back(n);
        n++;
    }
    
    for (int i = 0; i < S.size(); i++) {
        cout << S[i] << '\n';
    }

    return 0;
}