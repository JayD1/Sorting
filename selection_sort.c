#include<stdio.h>

int main()
{
	int arr[100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	int pos,temp;
	for(i=0;i<n;i++)
	{
		pos=0;
		for(j=1;j<n-i;j++)if(arr[j]>arr[pos])pos=j;
		temp=arr[n-1-i];
		arr[n-i-1]=arr[pos];
		arr[pos]=temp;
	}
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
