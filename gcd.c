#include <stdio.h>
int gcd(int a, int b)
{
	if(a == 0)
	{
    return b;
	}
	return gcd(b%a, a);
}
int main()
{
	int a, b;
	printf("Enter 2 number: ");
	scanf("%d%d", &a, &b);
	printf("GCD is: %d\n", gcd(a, b));
	return 0;
}
