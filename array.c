#include<stdio.h>
int push(int arr[50],int n,int top)
{
	if (top>=50)
	{
	  printf("Overflow");
	}
	else
	{
		top ++;
		arr[top]=n;
		return top;
	}

}

int pop(int arr[50],int top)
{
	if (top==-1)
	{
		printf("Underflow" );
	}
	else 
	{
		top =top-1;
		return top;
	}
}

int main()
{
	int arr[50];
	int n,top=-1;
	char str[20]; 
    scanf("%s ",str);
   if(str=="push")
   {
   	scanf("%d ",&n);
   	// printf("%d",n );
   	top=push(arr,n,top);
   }
   if (str=="pop")
   {
   	top=pop(arr,top);
   	printf("Hello");
   }
   else
   	return arr[top];
}