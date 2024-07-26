#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;
    if ((!(N % 4) && (N % 100)) || !(N % 400)) cout << 1;
    else cout << 0;

    return 0;
}