#include<stdio.h>

void mergesort(int arr[100],int n);
void merge(int a1[], int p, int a2[], int q, int arr[]);

int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	mergesort(arr,n);
	for(i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

void mergesort(int arr[100],int n)
{
	if(n<=1)return;
	int m=n/2,i;
	int a1[m],a2[n-m];
	for(i=0;i<m;i++)a1[i]=arr[i];
	for(i=m;i<n;i++)a2[i-m]=arr[i];
	mergesort(a1,m);
	mergesort(a2,n-m);
	merge(a1,m,a2,n-m,arr);
	return;
}

void merge(int a1[], int p, int a2[], int q, int arr[])
{
	int k=0,i=0,j=0;
	while(i<p&&j<q)
	{
		if(a1[i]<a2[j])arr[k++]=a1[i++];
		else arr[k++]=a2[j++];
	}
	while(i<p)arr[k++]=a1[i++];
	while(j<q)arr[k++]=a2[j++];
	return;
}
