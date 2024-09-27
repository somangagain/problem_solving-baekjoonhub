#include <stdio.h>
#include <string.h>

int main(void) {
	char s[1000001];
	gets(s);

	int S = 0;

	if (s[0] != ' ') S++;

	int i;
	for (i = 0; s[i]; i++)
		if (s[i] == ' ') S++;
	if (s[i - 1] == ' ') S--;

	printf("%d", S);

	return 0;
}