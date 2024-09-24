#include <bits/stdc++.h>
using namespace std;

vector<int> process(string s, char divider) {
	istringstream iss(s);
	string buffer;

	vector<string> sVector; while (getline(iss, buffer, divider)) sVector.push_back(buffer);
	
	vector<int> v;
	for (int i = 0; i < sVector.size(); i++) {
		v.push_back(stoi(sVector[i]));
	}

	return v;
}

int main(void)
{
	int t; cin >> t;
	while (t--) {
		string p; cin >> p;
		int n; cin >> n;
		
		string s; cin >> s; s = s.substr(1, s.length() - 2);
		vector<int> v = process(s, ',');

		bool flag = false;
		bool isReverse = false;
		for (int i = 0; i < p.size(); i++) {
			switch (p[i]) {
				case 'R': {
					isReverse = !isReverse;
					break;
				}
				case 'D': {
					if (!v.size()) {
						flag = true;
						break;
					}
					else {
						if (isReverse) {
							v.erase(v.begin() + v.size() - 1, v.end());
						}
						else {
							v.erase(v.begin(), v.begin() + 1);
						}
					}
				}
			}
			if (flag) {
				cout << "error\n";
				break;
			}
		}

		if (!flag) {
			cout << "[";
			for (int i = 0; i < v.size(); i++) {
				int j = i;
				if (isReverse) j = v.size() - 1 - i;
				cout << v[j];
				if (i != v.size() - 1) {
					cout << ',';
				}
			}
			cout << "]\n";
		}
	}
}