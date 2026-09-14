//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/#include <stdio.h>

int main() {
    int num3, num2, sum;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num3);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Calculate sum
    sum = num3 + num2;
    
    // Display result
    printf("Sum: %d\n", sum);
    
    return 0;
}
