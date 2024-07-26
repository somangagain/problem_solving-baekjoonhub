#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int j = i; 
        while (j--) cout << '*';
        cout << '\n';
    }


    return 0;
}