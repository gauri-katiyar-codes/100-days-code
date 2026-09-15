 //Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/#include <stdio.h>

int main(void)
{
	long long number;
	int sum = 0;

	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	do
	{
		sum += (int)(number % 10);
		number /= 10;
	} while (number != 0);

	printf("%d", sum);

	return 0;
}
