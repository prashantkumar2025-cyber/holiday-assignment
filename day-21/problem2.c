#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    printf("Reversed String: ");
    for(i=len-2; i>=0; i--)
        printf("%c", str[i]);

    return 0;
}