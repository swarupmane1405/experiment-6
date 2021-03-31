#include<stdio.h>
int main()
{
    int i, n, a[50];

	printf("enter the value of elements");
	scanf("%d", &n);
    
    a[0]=0;
    a[1]=1;
   printf("Fibonacci series \n");
     printf("  %d  %d",a[0],a[1]);
  
   for(i=2;i<=n-1;i++)
    {
       a[i]=a[i-1]+a[i-2];
       printf("  %d",a[i]);
    }
   
    getch();
   return 0;
}
