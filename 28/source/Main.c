#include <stdio.h>
#include <stdlib.h>

char changeCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}

int main() {
    char ch;
    printf("��J�@�ӭ^��r��: ");
    scanf_s(" %c", &ch);

    char changed = changeCase(ch);
    printf("Changed case: %c\n", changed);

    return 0;
}