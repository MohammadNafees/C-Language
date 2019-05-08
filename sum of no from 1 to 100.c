#include<stdio.h>
#include<conio.h>
void main()
{
  int i,sum=0;
  clrscr();
  for(i=1;i<=100;i++)
      sum+=i;
  printf("Sum= %d\n", sum);
  getch();
}
