#include<stdio.h>
#include<math.h>
long x(int n)
{
	int i;
	long a,s=0;
	for(i=1;i<=n;i++)
	{
	 a=i*pow(10,n-i);
	 s=s+a;		
	}
	 return(s);
}
void main()
{
	int i,n;
	long sum=0;
	printf("please input n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=x(i);
	printf("sum=1+12+123+...=%ld",sum);
}

