//10-06-2021
//2k20-a11-03
#include<stdio.h>
int main()
{
	int a,c=0;
	printf("Enter the Number");
	scanf("%d",&a);
	for(a;a>0;a=a/10)
	{
		c++;
	}
	printf("Number of digits is %d",c);
	return 0;
}

