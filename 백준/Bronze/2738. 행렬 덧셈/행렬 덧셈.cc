#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;

    vector<int> V;
    for (int i = 0; i < N * M; i++) { int x; cin >> x; V.push_back(x); }
    for (int i = 0; i < N * M; i++) { 
        int x; cin >> x; V[i] += x; 
        cout << V[i] << ' '; 
        if (!((i + 1) % M)) cout << '\n';
    }

    return 0;
}