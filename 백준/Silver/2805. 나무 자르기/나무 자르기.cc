#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long int n, m; cin >> n >> m;
    vector<long long int> v; while (n--) { long long int x; cin >> x; v.push_back(x); }
    sort(v.begin(), v.end());

    long long int hmin = 0, hmax = v[v.size() - 1], h = 0;

    while (hmin <= hmax) {
        long long q = hmax - (long long int)((hmax - hmin) / 2);
       
        long long s = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > q) {
                s += v[i] - q;
            }
        }

        if (s >= m) {
            hmin = q + 1;
            h = q;
        }
        else hmax = q - 1;
    }

    cout << h;
    
    return 0;
}