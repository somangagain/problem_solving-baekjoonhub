#include <bits/stdc++.h>

using namespace std;

int N;

int calc(int x) {
    int t = x;
    int s = t;
    while (t > 0) {
        s += t % 10;
        t /= 10;
    }
    
    return s;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N;
    int S = 0;
    for (int i = 1; i <= 1000000; i++) {
        if (calc(i) == N) {
            S = i;
            break;
        }
    }

    cout << S;
   
    return 0;
}