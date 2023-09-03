#include <stdio.h>
#include <stdlib.h>

int main() {

    int* marks;

    // allocate 3 memory
    marks = (int*) malloc(3 * sizeof(int));

    // get input value for marks
    for (int i = 0; i < 3; ++i) {
        scanf("%d", (marks + i));
    }

    // print array elements
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *(marks + i));
    }

    // resize the array to store 5 elements
    marks = realloc(marks, 5 * sizeof(int));

    // assign the value of 2 new elements
    *(marks + 3) = 13;
    *(marks + 4) = 15;

    // print the array elements
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(marks + i));
    }

    // deallocate the memory
    free(marks);

    return 0;
}