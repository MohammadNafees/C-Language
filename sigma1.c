

#include<stdio.h>
#include<cs50.h>

int sigma(int m);

int main(void)
{
	int n; 
	do
	{
		n = get_int("positive intger:");
	}
	while (n < 1);
	int answer = sigma(n);
	printf("%i\n", answer);
}

// return sum of 1 through m
int sigma(int m )
{
	if (m<=0)
	{
		return 0;
	}
	else 
	{
		return (m + sigma(m-1);
	}
}