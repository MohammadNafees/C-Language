#include<stdio.h>
#include<conio.h>

int main(void)
{
	string s = get_string("s: ");
	string t = get_string("t: ");
	
	if (s==t)
	{
		printf("same\n");
	}
	else
	{
		printf("different\n");
	}
}
