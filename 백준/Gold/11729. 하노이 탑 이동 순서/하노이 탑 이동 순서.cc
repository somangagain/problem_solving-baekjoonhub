#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> S;

int sol(int n, int frm, int tmp, int des) {
    if (n == 1) {
        S.push_back({ frm, des });
        return 1;
    }
    else {
        int a = sol(n - 1, frm, des, tmp);
        S.push_back({ frm, des });
        int b = sol(n - 1, tmp, frm, des);
        
        return a + b + 1;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    
    int s = sol(n, 1, 2, 3);
    
    cout << s << '\n';
    for (int i = 0; i < S.size(); i++) {
        cout << S[i].first << ' ' << S[i].second << '\n';
    }

    return 0;
}