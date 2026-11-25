#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];
    char copy[50];

    printf("enter your name:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\r\n")] = '\0';

    printf(" name: %s\n", name);
    printf("lenght %zu\n", strlen(name));
    printf("first character:%c\n", name[0]);

    strcpy(copy, name);
    printf("copy:%s\n", copy);
    return 0;
}
