#include <bits/stdc++.h>

using namespace std;

int A, B;
double S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> A >> B;
    S = A / (double)(B);
    cout.precision(10);
    cout << S;
	
    return 0;
}