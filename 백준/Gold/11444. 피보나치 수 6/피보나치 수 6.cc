#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define DIVISOR 1000000007

using namespace std;

long long int dfs(map<long long, long long>& s, long long int n) {
    if (s.find(n) != s.end()) {
        return s[n];
    }
    else {
        if (n % 2) return s[n] = (dfs(s, (n + 1) / 2) * dfs(s, (n + 1) / 2) + dfs(s, (n - 1) / 2) * dfs(s, (n - 1) / 2)) % DIVISOR;
        else return s[n] = (dfs(s, n / 2) * (dfs(s, n / 2 + 1) + dfs(s, n / 2 - 1))) % DIVISOR;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long n; cin >> n;
    map<long long, long long> s;

    s[0] = 0; s[1] = 1; s[2] = 1;

    cout << (dfs(s, n));

    return 0;
}