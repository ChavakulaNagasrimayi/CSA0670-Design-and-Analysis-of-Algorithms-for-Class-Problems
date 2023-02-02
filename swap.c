#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n After swapping : a=%d b=%d ",x,y);
}
int main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping a=%d b=%d",a,b);
	swap(a,b);
	getch();
	return 0;
}
