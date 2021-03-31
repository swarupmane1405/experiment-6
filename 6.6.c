#include<stdio.h>
int main()
{
    int i, n, a[50];

	printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
  printf("EVEN NUMBERS \n");
   for(i=0;i<=n-1;i++)
    {
       if(a[i]%2==0)
	   {
	   printf("%d ",a[i]);
	   }
    }
    
    getch();
   return 0;
}
