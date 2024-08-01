#include <bits/stdc++.h>
#define MIN_ABS 10000000

using namespace std;

int A[MIN_ABS * 2 + 2];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; 
    while (n--) { int x; cin >> x; A[x + MIN_ABS]++; }

    int m; cin >> m;
    while (m--) { int x; cin >> x; cout << A[x + MIN_ABS] << ' '; }

    return 0;
}