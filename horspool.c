#include <stdio.h>
#include <string.h>

#define MAX 100

int shift[MAX];

void shiftTable(char pattern[]) {
    int m = strlen(pattern);
    for (int i = 0; i < MAX; i++)
        shift[i] = m;
    for (int i = 0; i < m - 1; i++)
        shift[pattern[i]] = m - 1 - i;
}

int horspool(char text[], char pattern[]) {
    int m = strlen(pattern);
    int n = strlen(text);
    int i = m - 1;

    while (i < n) {
        int k = 0;
        while (k < m && pattern[m - 1 - k] == text[i - k])
            k++;
        if (k == m)
            return i - m + 1;
        else
            i += shift[text[i]];
    }
    return -1;
}

int main() {
    char text[100], pattern[100];
    printf("Enter text: ");
    scanf("%s", text);
    printf("Enter pattern: ");
    scanf("%s", pattern);

    shiftTable(pattern);
    int pos = horspool(text, pattern);
    if (pos == -1)
        printf("Pattern not found\n");
    else
        printf("Pattern found at position %d\n", pos);
    return 0;
}
