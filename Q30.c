//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/ #include <stdio.h>

int main(void)
{
	long long number, reversed = 0;

	scanf("%lld", &number);

	while (number != 0) {
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	printf("%lld", reversed);
	return 0;
}
