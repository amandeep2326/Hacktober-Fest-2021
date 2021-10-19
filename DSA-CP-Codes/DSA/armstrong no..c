//10-06-2021
//2k20-a11-03
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c=0,d,sum=0,z;
	printf("Enter the Number\t");
	scanf("%d",&a);
	z=a;
	for(z;z>0;z=z/10)
	{
		c++;
	}
	printf("Number of digits is %d\n",c);
	b=a;
	while(a>0)
	{
		d=a%10;
		sum=sum+pow(d,c);
		a=a/10;	
	}
	if(sum==b)
	printf("%d is an armstrong number",b);
	else
	printf("%d is not an armstrong number",b);
	return 0;
}

