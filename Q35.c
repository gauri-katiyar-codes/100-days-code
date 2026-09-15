 //Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/#include <stdio.h>

int main(void)
{
	int number;

	scanf("%d", &number);

	for (int factor = 1; factor <= number; factor++) {
		if (number % factor == 0) {
			printf("%d ", factor);
		}
	}

	return 0;
}
