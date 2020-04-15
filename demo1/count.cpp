#include<stdio.h>
int main()
{
	int a[100],i,n,j,k,count=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
			else
			{
				j++;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
