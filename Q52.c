/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {

    int i, j;

    // 1 star
    for (i = 1; i <= 1; i++) {
        printf("*\n");
    }

    printf("\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 5 stars
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }

    printf("\n");

    // 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 1 star
    printf("*\n");

    return 0;
}
