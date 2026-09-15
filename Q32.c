//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/#include <stdio.h>

int main(void)
{
    int number, original, reversed = 0, digit;

    scanf("%d", &number);
    original = number;

    if (number < 0)
        number = -number;

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original >= 0 && reversed == original)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}