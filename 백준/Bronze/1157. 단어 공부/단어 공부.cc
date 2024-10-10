#include <bits/stdc++.h>

using namespace std;

int main(void) {
    char* str = (char*)malloc(1000001 * sizeof(char));
    scanf("%s", str);
    
    vector<int> a('Z' - 'A' + 1);
    for (int i = 0; str[i]; i++) {
        a[str[i] >= 'a' ? str[i] - 'a': str[i] - 'A']++;
    }
    
    int maxIndex = 0;
    int maxIndexCount = 1;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] > a[maxIndex]) {maxIndex = i; maxIndexCount = 1;}
        else if (a[i] == a[maxIndex]) { maxIndexCount++; }
    }
    
    printf("%c", maxIndexCount == 1 ? (maxIndex + 'A') : '?');
    
    return 0;
}