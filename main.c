#include <stdio.h>
// #include <stdlib.h> for malloc, free

int main() {
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
