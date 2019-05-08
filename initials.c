#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	string Name = get_string("Name: ");
	char initials[4];
	int counter = 0;
	for (int i = 0; i < strlen(name); i++)
	{
		if (isupper(name[i]))
		{
			initials[counter] = name[i];
			counter++;
		}
	}
	initials[counter] = '\0' ;
	printf("%s\n", initials);
}