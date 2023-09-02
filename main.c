// #include <stdlib.h> for malloc, free
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    //find cube root
    double cubeRoot = cbrt(num);
    printf("%.2lf\n", cubeRoot);

    return 0;
}