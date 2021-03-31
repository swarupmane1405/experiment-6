#include<stdio.h>
int main()
{
    int i, n, small, a[50];

	printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
  small=a[0];
   for(i=0;i<=n-1;i++)
    {
       if(small>a[i])
	   {
	   small=a[i];
	   }
    }
    printf("the smallest elements in given %d number is %d",n,small);
    getch();
   return 0;
}
