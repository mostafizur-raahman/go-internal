#include <stdio.h>
#include "helpers.h"
#include <string.h>
void print_scores(int *scores) {
    // printf("%d\n", &scores);
    for (size_t i = 0; i < 6; i++) {
        printf("scores[%zu]: %d\n", i, scores[i]);
    }
}

int main(void) {
    int scores[5] = {10, 20, 30, 40, 50};
    print_scores(scores);
    return 0;

    char src[] = "this is a very long string";
    char dest[6];
    strcpy(dest, src); 
    printf("%s\n",dest);
    char a[] = "hello";
char b[] = "hello";

if (a == b) {
    printf("equal\n");     // never prints
} else {
    printf("not equal\n"); // prints this -- a and b are at different addresses
}
}