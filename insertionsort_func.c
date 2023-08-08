#include<stdio.h>
void main()
{
	int a[10],i,j,n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] element: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nbefore sorting the array elements are:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
	insertionsort(a,n);
}
void insertionsort(int a[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	printf("\nsorted array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
