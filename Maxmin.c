#include<stdio.h>
#include<conio.h>
int main()
{
	int a[]={10,20,30,40,50},max,min,i;
	min=a[0];
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	printf("\n Minimum : %d",min);
	printf("\n Maximum : %d",max);
	getch();
	return 0;
}
