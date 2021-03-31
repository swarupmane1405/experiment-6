#include<stdio.h>
int main()
{
    int i, n, sum=0, a[50];
    float avg;

	printf("enter the value of elements");
	scanf("%d", &n);
    printf("enter any %d num",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d", &a[i]);

    }
  
   for(i=0;i<=n-1;i++)
    {
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("the avg of given %d number is %f",n,avg);
    getch();
   return 0;
}
