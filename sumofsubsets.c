#include<stdio.h>
int main()
{
	int i,j,n,t,a[20];
	printf("Enter the target:");
	scanf("%d",&t);
	printf("Enter the number of elements in the set:");
	scanf("%d",&n);
	printf("Enter the elements in the set:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
		  if(a[i]+a[j]== t)
		  {
		  	printf("(%d %d)",a[i],a[j]);
		  }
	}
}
return 0;
}
