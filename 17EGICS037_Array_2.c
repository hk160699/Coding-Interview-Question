#include<stdio.h>
int main()
{
	int n,a[10],i,count,s1=0,s2=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count=n/2;
	for(i=0;i<count;i++)
		s1=s1+a[i];
	for(i=count;i<n;i++)
		s2=s2+a[i];
	if(s1<s2)
	
		printf("minimum sum is %d",s1);
	else
		printf("minimum sum is %d",s2);
}
