#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int* a = (int*)malloc(sizeof(int) * 10);
	
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		*(a + s[i] - '0') += 1;
	}

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		m = max(m, *(a + i));
	}
	int c = *(a + 6) + *(a + 9);
	m = max(m, c / 2 + c % 2);

	cout << m;

	return 0;
}