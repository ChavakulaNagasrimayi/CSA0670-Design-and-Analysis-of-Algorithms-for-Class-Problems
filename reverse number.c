#include<stdio.h>
int main() 
{
int n,rev=0,remainder;
printf("Enter an integer: ");
scanf("%d",&n);
int temp=n;
while (n!=0) 
{
remainder=n%10;
rev=rev*10+remainder;
n /= 10;
}
printf("Reversed number = %d", rev);
if(rev==temp)
{
	printf("\nit is a palindrome!!");
}
else
printf("\nnot a palindrome!!");
return 0;
}
