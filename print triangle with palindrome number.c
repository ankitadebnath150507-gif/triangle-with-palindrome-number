//w.c.p to print triangle with palindrome number//
#include<stdio.h>
int main()
{
	int rows=7;
	int i,k,j;
	
	for(i=1;i<=rows;i++)
	{
		for(k=1;k<=rows-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
			printf("\n");
	}
		return 0;
}
