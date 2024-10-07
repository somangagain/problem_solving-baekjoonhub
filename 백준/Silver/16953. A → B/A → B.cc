#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, s = 0;
    cin >> a >> b;
    
    while (b > a) {
        if (b % 10 == 1) {
            b /= 10; s++;
        } 
        else if (!(b % 2)) {
            b /= 2; s++;
        }
        else {
            break;
        }
    }
    
    if (a != b) cout << -1;
    else cout << (s + 1);
    
    return 0;
}